use tower_lsp::lsp_types::*;
use tree_sitter::{Node, Parser, Query, QueryCursor, Tree};
use tree_sitter_traversal::traverse;

#[derive(Debug)]
pub struct SrcTree {
    pub src: String,
    // Must be always matched to `src`
    pub tree: Tree,
}

impl SrcTree {
    pub fn new(src: String) -> Self {
        let language = tree_sitter_egglog::language();
        let mut parser = Parser::new();
        parser
            .set_language(language)
            .expect("Error loading egglog language");

        let tree = parser
            .parse(&src, None)
            // Not possible
            .expect("Error parsing egglog source");

        Self { src, tree }
    }

    pub fn global_types(&self) -> Vec<String> {
        let queries = &[
            Query::new(
                tree_sitter_egglog::language(),
                r#"(command "datatype" (ident) @name)"#,
            )
            .unwrap(),
            Query::new(
                tree_sitter_egglog::language(),
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
                tree_sitter_egglog::language(),
                r#"(command "datatype" (variant (ident) @name))"#,
            )
            .unwrap(),
            Query::new(
                tree_sitter_egglog::language(),
                r#"(command "relation" (ident) @name)"#,
            )
            .unwrap(),
            Query::new(
                tree_sitter_egglog::language(),
                r#"(command "function" (ident) @name)"#,
            )
            .unwrap(),
            Query::new(
                tree_sitter_egglog::language(),
                r#"(command "let" (ident) @name)"#,
            )
            .unwrap(),
            Query::new(
                tree_sitter_egglog::language(),
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
        let cursor = root_node.walk();

        {
            // FIXME: Many ad-hocs, I don't like this codes.
            use std::fmt::Write;

            let mut emptyline = true;
            let mut last_kind = "";
            let mut paren_level = 0;
            for n in traverse(cursor, tree_sitter_traversal::Order::Pre)
                .filter(|n| n.child_count() == 0)
                .skip_while(|n| n.kind() == "ws")
            {
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
            }
        }

        while buf.ends_with('\n') {
            buf.pop();
        }
        buf.push('\n');

        buf
    }

    pub fn diagnstics(&self) -> Vec<Diagnostic> {
        let src = &self.src;
        let tree = &self.tree;
        let root_node = tree.root_node();

        // Fixme: Better traverse
        traverse(root_node.walk(), tree_sitter_traversal::Order::Post)
            .filter(|n| n.is_error() || n.is_missing())
            .map(|node| {
                let start = node.start_position();
                let end = node.end_position();
                let message = if node.has_error() && node.is_missing() {
                    node.to_sexp()
                        .trim_start_matches('(')
                        .trim_end_matches(')')
                        .to_string()
                } else {
                    let mut cursor = node.walk();
                    format!(
                        "Unexpected token(s) {}",
                        node.children(&mut cursor)
                            .filter_map(|n| n.utf8_text(src.as_bytes()).ok())
                            .collect::<Vec<_>>()
                            .join(", ")
                    )
                };
                Diagnostic {
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
                }
            })
            .collect()
    }

    pub fn definition(&self, node: Node) -> Option<Node> {
        if node.kind() != "ident" && node.kind() != "type" {
            return None;
        }

        let ident = node.utf8_text(self.src.as_bytes()).unwrap();
        let queries = &[
            Query::new(
                tree_sitter_egglog::language(),
                &format!(
                    r#"(command "datatype" (ident) @name (#eq? @name "{}")) @command"#,
                    ident
                ),
            )
            .unwrap(),
            Query::new(
                tree_sitter_egglog::language(),
                &format!(
                    r#"(command "datatype" (variant (ident) @name) (#eq? @name "{}")) @command"#,
                    ident
                ),
            )
            .unwrap(),
            Query::new(
                tree_sitter_egglog::language(),
                &format!(
                    r#"(command "relation" (ident) @name (#eq? @name "{}")) @command"#,
                    ident
                ),
            )
            .unwrap(),
            Query::new(
                tree_sitter_egglog::language(),
                &format!(
                    r#"(command "function" (ident) @name (#eq? @name "{}")) @command"#,
                    ident
                ),
            )
            .unwrap(),
            Query::new(
                tree_sitter_egglog::language(),
                &format!(
                    r#"(command "let" (ident) @name (#eq? @name "{}")) @command"#,
                    ident
                ),
            )
            .unwrap(),
            Query::new(
                tree_sitter_egglog::language(),
                &format!(
                    r#"(command "sort" (ident) @name (#eq? @name "{}")) @command"#,
                    ident
                ),
            )
            .unwrap(),
            Query::new(
                tree_sitter_egglog::language(),
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
}
