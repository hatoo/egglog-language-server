use tower_lsp::lsp_types::*;
use tree_sitter::{Node, Parser, Point, Query, QueryCursor, Tree, TreeCursor};

#[derive(Debug)]
pub struct SrcTree {
    src: String,
    // Must be always matched to `src`
    tree: Tree,
}

impl SrcTree {
    pub fn new(src: String) -> Self {
        let language = tree_sitter_egglog::language();
        let mut parser = Parser::new();
        parser
            .set_language(&language)
            .expect("Error loading egglog language");

        let tree = parser
            .parse(&src, None)
            // Not possible
            .expect("Error parsing egglog source");

        Self { src, tree }
    }

    pub fn src(&self) -> &str {
        &self.src
    }

    pub fn tree(&self) -> &Tree {
        &self.tree
    }

    pub fn global_types(&self) -> Vec<String> {
        let queries = &[
            Query::new(
                &tree_sitter_egglog::language(),
                r#"(command "datatype" (ident) @name)"#,
            )
            .unwrap(),
            Query::new(
                &tree_sitter_egglog::language(),
                r#"(command "sort" (ident) @name)"#,
            )
            .unwrap(),
        ];

        queries
            .iter()
            .flat_map(|q| {
                let mut cursor = QueryCursor::new();
                cursor
                    .matches(q, self.tree.root_node(), self.src.as_bytes())
                    .map(|m| {
                        m.captures[0]
                            .node
                            .utf8_text(self.src.as_bytes())
                            .unwrap()
                            .to_string()
                    })
                    .collect::<Vec<_>>()
            })
            .collect()
    }

    // names for other than types
    pub fn global_idents(&self) -> Vec<String> {
        let queries = &[
            Query::new(
                &tree_sitter_egglog::language(),
                r#"(command "datatype" (variant (ident) @name))"#,
            )
            .unwrap(),
            Query::new(
                &tree_sitter_egglog::language(),
                r#"(command "relation" (ident) @name)"#,
            )
            .unwrap(),
            Query::new(
                &tree_sitter_egglog::language(),
                r#"(command "function" (ident) @name)"#,
            )
            .unwrap(),
            Query::new(
                &tree_sitter_egglog::language(),
                r#"(command "let" (ident) @name)"#,
            )
            .unwrap(),
            Query::new(
                &tree_sitter_egglog::language(),
                r#"(command "declare" (ident) @name)"#,
            )
            .unwrap(),
        ];

        queries
            .iter()
            .flat_map(|q| {
                let mut cursor = QueryCursor::new();
                cursor
                    .matches(q, self.tree.root_node(), self.src.as_bytes())
                    .map(|m| {
                        m.captures[0]
                            .node
                            .utf8_text(self.src.as_bytes())
                            .unwrap()
                            .to_string()
                    })
                    .collect::<Vec<_>>()
            })
            .collect()
    }

    pub fn globals_all(&self) -> Vec<String> {
        self.global_types()
            .into_iter()
            .chain(self.global_idents())
            .collect()
    }

    pub fn formatted(&self, tab_width: usize) -> String {
        let src = &self.src;
        let tree = &self.tree;
        let root_node = tree.root_node();

        let mut buf = String::new();
        let mut cursor = root_node.walk();

        {
            // FIXME: Many ad-hocs, I don't like this codes.
            use std::fmt::Write;

            let mut emptyline = true;
            let mut last_kind = "";
            let mut paren_level = 0;

            while cursor.goto_first_child() {}
            while cursor.node().kind() == "ws" {
                if !next_leaf(&mut cursor) {
                    break;
                }
            }

            loop {
                let n = cursor.node();
                let text = n.utf8_text(src.as_bytes()).unwrap();

                match text {
                    text if n.kind() == "lparen" => {
                        if last_kind == "lparen" {
                            write!(buf, "{}", text).unwrap();
                        } else if emptyline {
                            for _ in 0..tab_width * paren_level {
                                write!(buf, " ").unwrap();
                            }
                            write!(buf, "{}", text).unwrap();
                        } else if last_kind == "rparen" && paren_level == 0 {
                            writeln!(buf).unwrap();
                            write!(buf, "{}", text).unwrap();
                        } else {
                            write!(buf, " {}", text).unwrap();
                        }
                        emptyline = false;
                        paren_level += 1;
                    }
                    text if n.kind() == "rparen" => {
                        paren_level = paren_level.saturating_sub(1);
                        if emptyline {
                            for _ in 0..tab_width * paren_level {
                                write!(buf, " ").unwrap();
                            }
                        }
                        write!(buf, "{}", text).unwrap();
                        emptyline = false;
                    }
                    text if n.kind() == "comment" => {
                        if emptyline {
                            for _ in 0..tab_width * paren_level {
                                write!(buf, " ").unwrap();
                            }
                        } else {
                            write!(buf, " ").unwrap();
                        }
                        writeln!(buf, "{}", text).unwrap();
                        emptyline = true;
                    }
                    text if n.kind() == "ws" => {
                        let newlines = text.chars().filter(|&c| c == '\n').count();
                        let n = if emptyline { 1 } else { 0 };

                        for _ in n..newlines {
                            writeln!(buf).unwrap();
                            emptyline = true;
                        }

                        if !emptyline {
                            if !next_leaf(&mut cursor) {
                                break;
                            }
                            continue;
                        }
                    }
                    text => {
                        if last_kind == "lparen" {
                            write!(buf, "{}", text).unwrap();
                        } else {
                            if emptyline {
                                for _ in 0..tab_width * paren_level {
                                    write!(buf, " ").unwrap();
                                }
                            } else {
                                write!(buf, " ").unwrap();
                            }
                            write!(buf, "{}", text).unwrap();
                        }
                        emptyline = false;
                    }
                }

                last_kind = n.kind();
                if !next_leaf(&mut cursor) {
                    break;
                }
            }
        }

        while buf.ends_with('\n') {
            buf.pop();
        }
        buf.push('\n');

        buf
    }

    pub fn diagnostics(&self) -> Vec<Diagnostic> {
        let src = &self.src;
        let tree = &self.tree;
        let root_node = tree.root_node();

        let mut diagnostics = Vec::new();

        let mut stack = vec![root_node.walk()];

        // Fixme: Better traverse
        while let Some(mut cursor) = stack.pop() {
            let n = cursor.node();

            if n.is_error() || n.is_missing() || n.kind() == "top_parens" {
                let start = n.start_position();
                let end = n.end_position();
                let message = if n.has_error() && n.is_missing() {
                    n.to_sexp()
                        .trim_start_matches('(')
                        .trim_end_matches(')')
                        .to_string()
                } else {
                    let mut cursor = n.walk();
                    format!(
                        "Unexpected token(s) {}",
                        n.children(&mut cursor)
                            .filter_map(|n| n.utf8_text(src.as_bytes()).ok())
                            .collect::<Vec<_>>()
                            .join(", ")
                    )
                };
                diagnostics.push(Diagnostic {
                    range: Range {
                        start: Position {
                            line: start.row as u32,
                            character: start.column as u32,
                        },
                        end: Position {
                            line: end.row as u32,
                            character: end.column as u32,
                        },
                    },
                    severity: Some(DiagnosticSeverity::ERROR),
                    message,
                    ..Default::default()
                });
            } else {
                for child in n.children(&mut cursor) {
                    stack.push(child.walk());
                }
            }
        }

        diagnostics
    }

    pub fn definition(&self, ident: &str) -> Option<Node> {
        if ident.contains('"') || ident.contains('\\') {
            return None;
        }

        let queries = &[
            Query::new(
                &tree_sitter_egglog::language(),
                &format!(
                    r#"(command "datatype" (ident) @name (#eq? @name "{}")) @command"#,
                    ident
                ),
            )
            .unwrap(),
            Query::new(
                &tree_sitter_egglog::language(),
                &format!(
                    r#"(command "datatype" (variant (ident) @name) (#eq? @name "{}")) @command"#,
                    ident
                ),
            )
            .unwrap(),
            Query::new(
                &tree_sitter_egglog::language(),
                &format!(
                    r#"(command "relation" (ident) @name (#eq? @name "{}")) @command"#,
                    ident
                ),
            )
            .unwrap(),
            Query::new(
                &tree_sitter_egglog::language(),
                &format!(
                    r#"(command "function" (ident) @name (#eq? @name "{}")) @command"#,
                    ident
                ),
            )
            .unwrap(),
            Query::new(
                &tree_sitter_egglog::language(),
                &format!(
                    r#"(command "let" (ident) @name (#eq? @name "{}")) @command"#,
                    ident
                ),
            )
            .unwrap(),
            Query::new(
                &tree_sitter_egglog::language(),
                &format!(
                    r#"(command "sort" (ident) @name (#eq? @name "{}")) @command"#,
                    ident
                ),
            )
            .unwrap(),
            Query::new(
                &tree_sitter_egglog::language(),
                &format!(
                    r#"(command "declare" (ident) @name (#eq? @name "{}")) @command"#,
                    ident
                ),
            )
            .unwrap(),
        ];

        for query in queries {
            let mut cursor = QueryCursor::new();
            let Some((capture, _)) = cursor
                .captures(query, self.tree.root_node(), self.src.as_bytes())
                .next()
            else {
                continue;
            };

            let m = capture.captures[0].node;

            return Some(m);
        }
        None
    }

    pub fn completion(&self, pos: Point) -> Vec<CompletionItem> {
        fn is_root_command(node: Node) -> bool {
            node.parent().map(|p| p.kind()) == Some("top_parens")
        }
        fn is_inner(mut node: Node, kind: &str) -> bool {
            loop {
                if node.kind() == kind {
                    return true;
                }
                if let Some(p) = node.parent() {
                    node = p;
                } else {
                    return false;
                }
            }
        }

        const BUILTIN_TYPES: &[&str] = &[
            // types
            "Unit", "bool", "i64", "f64", "Map", "Rational", "String",
        ];
        const BUILTIN: &[&str] = &[
            // functions
            "map",
            "rational",
            // Not a function but add here
            "=",
            // Unit
            "!=",
            // bool
            "not",
            "and",
            "or",
            "xor",
            "=>",
            // i64
            "+",
            "-",
            "*",
            "/",
            "%",
            "&",
            "|",
            "<<",
            ">>",
            "not-i64",
            "<",
            ">",
            "<=",
            ">=",
            "bool-=",
            "bool-<",
            "bool->",
            "bool-<=",
            "bool->=",
            "min",
            "max",
            "log2",
            "to-f64",
            "to-string",
            // f64
            "neg",
            "to-i64",
            // map
            "empty",
            "insert",
            "get",
            "not-contains",
            "contains",
            "set-union",
            "set-diff",
            "set-intersect",
            "map-remove",
            // rational
            "abs",
            "pow",
            "numer",
            "denom",
            "log",
            "sqrt",
            // string
            "count-matches",
            "replace",
        ];

        let root = self.tree.root_node();

        let mut node = root.named_descendant_for_point_range(pos, pos).unwrap();

        if node.kind() == "rparen" {
            if let Some(p) = node.prev_sibling() {
                node = p;
            }
        }

        if node
            .utf8_text(self.src.as_bytes())
            .unwrap()
            .starts_with(':')
        {
            // Attributes
            if let Some(command) = node.parent() {
                if let Some(node) = command.child(1) {
                    let command_name = node.utf8_text(self.src.as_bytes()).unwrap();

                    let attrs: &[&str] = match command_name {
                        "function" => &["cost", "unextractable", "on_merge", "merge", "default"],
                        "rule" => &["ruleset", "name"],
                        "rewrite" | "birewrite" => &["when", "ruleset"],
                        "run" => &["until"],
                        "query-extract" => &["variants"],
                        _ => return Vec::new(),
                    };

                    return attrs
                        .iter()
                        .map(|a| CompletionItem {
                            label: a.to_string(),
                            kind: Some(CompletionItemKind::FIELD),
                            ..Default::default()
                        })
                        .collect();
                }
            }
            Vec::new()
        } else if node.parent().map(|p| p.kind()) == Some("variant") || is_inner(node, "schema") {
            // complete types
            let global_types = self.global_types();

            global_types
                .iter()
                .map(|s| s.as_str())
                .chain(BUILTIN_TYPES.iter().copied())
                .map(|s| CompletionItem {
                    label: s.to_string(),
                    kind: Some(CompletionItemKind::CLASS),
                    ..Default::default()
                })
                .collect()
        } else if node.prev_sibling().is_some() {
            // Triggered by space
            // Completion global variables
            let globals = self.globals_all();
            globals
                .iter()
                .map(|s| s.as_str())
                .map(|s| CompletionItem {
                    label: s.to_string(),
                    kind: Some(CompletionItemKind::FUNCTION),
                    ..Default::default()
                })
                .collect()
        } else if is_root_command(node) {
            // Completion keywords
            const KEYWORDS: &[&str] = &[
                "set-option",
                "datatype",
                "sort",
                "function",
                "declare",
                "relation",
                "ruleset",
                "rule",
                "rewrite",
                "birewrite",
                "let",
                "run",
                "simplify",
                "calc",
                "query-extract",
                "check",
                "check-proof",
                "run-schedule",
                "print-stats",
                "push",
                "pop",
                "print-function",
                "print-size",
                "input",
                "output",
                "fail",
                "include",
                "set",
                "delete",
                "union",
                "panic",
                "extract",
            ];

            let globals = self.globals_all();

            KEYWORDS
                .iter()
                .map(|k| CompletionItem {
                    label: k.to_string(),
                    kind: Some(CompletionItemKind::KEYWORD),
                    ..Default::default()
                })
                .chain(globals.iter().map(|s| s.as_str()).map(|s| CompletionItem {
                    label: s.to_string(),
                    kind: Some(CompletionItemKind::FUNCTION),
                    ..Default::default()
                }))
                .collect()
        } else {
            let globals = self.globals_all();
            globals
                .iter()
                .map(|s| s.as_str())
                .chain(BUILTIN.iter().copied())
                .map(|s| CompletionItem {
                    label: s.to_string(),
                    kind: Some(CompletionItemKind::FUNCTION),
                    ..Default::default()
                })
                .chain(vec!["true", "false"].into_iter().map(|s| CompletionItem {
                    label: s.to_string(),
                    kind: Some(CompletionItemKind::VARIABLE),
                    ..Default::default()
                }))
                .collect()
        }
    }

    pub fn includes(&self) -> Vec<String> {
        let query = Query::new(
            &tree_sitter_egglog::language(),
            r#"(command "include" (string) @path)"#,
        )
        .unwrap();

        let mut cursor = QueryCursor::new();
        cursor
            .captures(&query, self.tree.root_node(), self.src.as_bytes())
            .map(|(capture, _)| {
                capture.captures[0]
                    .node
                    .utf8_text(self.src.as_bytes())
                    .unwrap()
                    .trim_start_matches('"')
                    .trim_end_matches('"')
                    .to_string()
            })
            .collect()
    }
}

fn next_leaf(cursor: &mut TreeCursor) -> bool {
    loop {
        if cursor.goto_next_sibling() {
            while cursor.goto_first_child() {}
            return true;
        }
        if cursor.goto_parent() {
            continue;
        }
        return false;
    }
}

#[test]
fn test_diagnostic() {
    fn has_error(src: &str) -> bool {
        let src_tree = SrcTree::new(src.to_string());

        !src_tree.diagnostics().is_empty()
    }

    assert!(has_error("()"));

    assert!(has_error("(sort)"));
    assert!(!has_error("(sort X)"));

    assert!(has_error("(declare)"));
    assert!(has_error("(declare x)"));
    assert!(!has_error("(declare x T)"));
}

#[test]
fn test_format() {
    fn format(src: &str) -> String {
        let src_tree = SrcTree::new(src.to_string());

        src_tree.formatted(2)
    }

    assert_eq!(format("(  sort)"), "(sort)\n");
}

#[test]
fn test_completion() {
    fn complete(src: &str, pos: Point, label: &str) {
        let src_tree = SrcTree::new(src.to_string());

        src_tree
            .completion(pos)
            .into_iter()
            .find(|c| c.label == label)
            .unwrap();
    }
    fn root_command(src: &str, pos: Point) {
        complete(src, pos, "run");
    }
    fn complete_not(src: &str, pos: Point, label: &str) {
        let src_tree = SrcTree::new(src.to_string());

        assert!(src_tree
            .completion(pos)
            .into_iter()
            .find(|c| c.label == label)
            .is_none());
    }
    fn not_complete(src: &str, pos: Point) {
        let src_tree = SrcTree::new(src.to_string());

        assert!(src_tree.completion(pos).is_empty());
    }

    root_command("()", Point { row: 0, column: 1 });
    root_command("(let x 1)\n()", Point { row: 1, column: 1 });
    root_command("(let x 1)\n()\n(run 100)", Point { row: 1, column: 1 });
    complete("(run 100 :)", Point { row: 0, column: 10 }, "until");
    complete("(datatype A (X ))", Point { row: 0, column: 14 }, "i64");
    complete(
        "(sort S)\n(datatype A (X ))",
        Point { row: 1, column: 14 },
        "S",
    );
    complete_not("(function A ())", Point { row: 0, column: 13 }, "+");
    not_complete("(function )", Point { row: 0, column: 10 });
}
