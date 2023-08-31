use std::process::Stdio;

use dashmap::DashMap;
use tower_lsp::jsonrpc::{Error, Result};
use tower_lsp::lsp_types::*;
use tower_lsp::{Client, LanguageServer, LspService, Server};
use tree_sitter::{Node, Parser, Query, QueryCursor, Tree};
use tree_sitter_highlight::{Highlight, HighlightConfiguration, HighlightEvent, Highlighter};
use tree_sitter_traversal::{traverse, Order};

// Token types for language server side
pub const LSP_LEGEND_TYPE: &[SemanticTokenType] = &[
    SemanticTokenType::KEYWORD,
    SemanticTokenType::FUNCTION,
    SemanticTokenType::TYPE,
    SemanticTokenType::DECORATOR,
    SemanticTokenType::VARIABLE,
    SemanticTokenType::NUMBER,
    SemanticTokenType::STRING,
    SemanticTokenType::COMMENT,
    SemanticTokenType::OPERATOR,
    SemanticTokenType::PARAMETER,
];
// Token types for Tree-sitter side
// Both must match indices
const TS_HIGHLIGHT_NAMES: &[&str] = &[
    "keyword",
    "function",
    "type",
    "attribute",
    "variable",
    "number",
    "string",
    "comment",
];

#[derive(Debug)]
struct SrcTree {
    src: String,
    // Must be always matched to `src`
    tree: Tree,
}

#[derive(Debug)]
struct Backend {
    client: Client,
    document_map: DashMap<Url, SrcTree>,
}

struct TextDocumentItem {
    uri: Url,
    text: String,
    version: i32,
}

fn diagnstics(src_tree: &SrcTree) -> anyhow::Result<Vec<Diagnostic>> {
    let src = &src_tree.src;
    let tree = &src_tree.tree;
    let root_node = tree.root_node();

    // Fixme: Better traverse
    Ok(traverse(root_node.walk(), Order::Post)
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
        .collect())
}

fn formatting(src_tree: &SrcTree, tab_width: usize) -> anyhow::Result<String> {
    let language = tree_sitter_egglog::language();
    let mut parser = Parser::new();
    parser.set_language(language)?;

    let src = &src_tree.src;
    let tree = &src_tree.tree;
    let root_node = tree.root_node();

    let mut buf = String::new();
    let cursor = root_node.walk();

    {
        // FIXME: Many ad-hocs, I don't like this codes.
        use std::fmt::Write;

        let mut emptyline = true;
        let mut last_kind = "";
        let mut paren_level = 0;
        for n in traverse(cursor, Order::Pre)
            .filter(|n| n.child_count() == 0)
            .skip_while(|n| n.kind() == "ws")
        {
            let text = n.utf8_text(src.as_bytes())?;

            match text {
                text if n.kind() == "lparen" => {
                    if last_kind == "lparen" {
                        write!(buf, "{}", text)?;
                    } else if emptyline {
                        for _ in 0..tab_width * paren_level {
                            write!(buf, " ")?;
                        }
                        write!(buf, "{}", text)?;
                    } else if last_kind == "rparen" && paren_level == 0 {
                        writeln!(buf)?;
                        write!(buf, "{}", text)?;
                    } else {
                        write!(buf, " {}", text)?;
                    }
                    emptyline = false;
                    paren_level += 1;
                }
                text if n.kind() == "rparen" => {
                    paren_level = paren_level.saturating_sub(1);
                    if emptyline {
                        for _ in 0..tab_width * paren_level {
                            write!(buf, " ")?;
                        }
                    }
                    write!(buf, "{}", text)?;
                    emptyline = false;
                }
                text if n.kind() == "comment" => {
                    if emptyline {
                        for _ in 0..tab_width * paren_level {
                            write!(buf, " ")?;
                        }
                    } else {
                        write!(buf, " ")?;
                    }
                    writeln!(buf, "{}", text)?;
                    emptyline = true;
                }
                text if n.kind() == "ws" => {
                    let newlines = text.chars().filter(|&c| c == '\n').count();
                    let n = if emptyline { 1 } else { 0 };

                    for _ in n..newlines {
                        writeln!(buf)?;
                        emptyline = true;
                    }

                    if !emptyline {
                        continue;
                    }
                }
                text => {
                    if last_kind == "lparen" {
                        write!(buf, "{}", text)?;
                    } else {
                        if emptyline {
                            for _ in 0..tab_width * paren_level {
                                write!(buf, " ")?;
                            }
                        } else {
                            write!(buf, " ")?;
                        }
                        write!(buf, "{}", text)?;
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

    Ok(buf)
}

fn desugar(src: &str) -> anyhow::Result<String> {
    use std::io::Write;

    let mut child = std::process::Command::new("egglog")
        .args(["--desugar", "/dev/stdin"])
        .stdin(Stdio::piped())
        .stdout(Stdio::piped())
        .stderr(Stdio::piped())
        .spawn()?;

    write!(child.stdin.take().unwrap(), "{}", src)?;

    let output = child.wait_with_output()?;

    if !output.status.success() {
        anyhow::bail!("child proccess fail");
    }
    Ok(String::from_utf8(output.stdout)?)
}

fn globals(src_tree: &SrcTree) -> Vec<String> {
    let queries = &[
        Query::new(
            tree_sitter_egglog::language(),
            r#"(command "datatype" (ident) @name)"#,
        )
        .unwrap(),
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
            r#"(command "sort" (ident) @name)"#,
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
                .matches(q, src_tree.tree.root_node(), src_tree.src.as_bytes())
                .map(|m| {
                    m.captures[0]
                        .node
                        .utf8_text(src_tree.src.as_bytes())
                        .unwrap()
                        .to_string()
                })
                .collect::<Vec<_>>()
        })
        .collect()
}

impl Backend {
    async fn on_change(&self, params: TextDocumentItem) -> Result<()> {
        let language = tree_sitter_egglog::language();
        let mut parser = Parser::new();
        parser
            .set_language(language)
            .map_err(|_| Error::internal_error())?;

        // TODO: Support partial edit
        let tree = parser
            .parse(&params.text, None)
            .ok_or_else(Error::parse_error)?;

        let src_tree = SrcTree {
            tree,
            src: params.text,
        };

        let diagnostics = diagnstics(&src_tree).map_err(|_| Error::internal_error())?;

        self.document_map.insert(params.uri.clone(), src_tree);

        self.client
            .publish_diagnostics(params.uri, diagnostics, Some(params.version))
            .await;

        Ok(())
    }
}

#[tower_lsp::async_trait]
impl LanguageServer for Backend {
    async fn initialize(&self, _: InitializeParams) -> Result<InitializeResult> {
        Ok(InitializeResult {
            capabilities: ServerCapabilities {
                text_document_sync: Some(TextDocumentSyncCapability::Kind(
                    TextDocumentSyncKind::FULL,
                )),
                // diagnostic_provider: Some(DiagnosticServerCapabilities::Simple(true)),
                semantic_tokens_provider: Some(
                    SemanticTokensServerCapabilities::SemanticTokensRegistrationOptions(
                        SemanticTokensRegistrationOptions {
                            text_document_registration_options: {
                                TextDocumentRegistrationOptions {
                                    document_selector: Some(vec![DocumentFilter {
                                        language: Some("egglog".to_string()),
                                        scheme: Some("file".to_string()),
                                        pattern: None,
                                    }]),
                                }
                            },
                            semantic_tokens_options: SemanticTokensOptions {
                                work_done_progress_options: WorkDoneProgressOptions::default(),
                                legend: SemanticTokensLegend {
                                    token_types: LSP_LEGEND_TYPE.into(),
                                    token_modifiers: vec![],
                                },
                                range: Some(false),
                                full: Some(SemanticTokensFullOptions::Bool(true)),
                            },
                            static_registration_options: StaticRegistrationOptions::default(),
                        },
                    ),
                ),
                document_formatting_provider: Some(OneOf::Left(true)),
                hover_provider: Some(HoverProviderCapability::Simple(true)),
                completion_provider: Some(CompletionOptions {
                    resolve_provider: Some(false),
                    trigger_characters: Some(vec!["(".to_string(), " ".to_string()]),
                    work_done_progress_options: Default::default(),
                    all_commit_characters: None,
                    completion_item: None,
                }),
                ..Default::default()
            },
            ..Default::default()
        })
    }

    async fn initialized(&self, _: InitializedParams) {
        self.client
            .log_message(MessageType::INFO, "server initialized!")
            .await;
    }

    async fn shutdown(&self) -> Result<()> {
        Ok(())
    }

    async fn did_open(&self, params: DidOpenTextDocumentParams) {
        self.client
            .log_message(MessageType::INFO, "file opened!")
            .await;
        let _ = self
            .on_change(TextDocumentItem {
                uri: params.text_document.uri,
                text: params.text_document.text,
                version: params.text_document.version,
            })
            .await;
    }

    async fn did_change(&self, mut params: DidChangeTextDocumentParams) {
        self.client
            .log_message(MessageType::INFO, "did_change")
            .await;
        let _ = self
            .on_change(TextDocumentItem {
                uri: params.text_document.uri,
                text: std::mem::take(&mut params.content_changes[0].text),
                version: params.text_document.version,
            })
            .await;
    }

    async fn did_save(&self, _: DidSaveTextDocumentParams) {
        self.client
            .log_message(MessageType::INFO, "file saved!")
            .await;
    }
    async fn did_close(&self, _: DidCloseTextDocumentParams) {
        self.client
            .log_message(MessageType::INFO, "file closed!")
            .await;
    }

    async fn semantic_tokens_full(
        &self,
        params: SemanticTokensParams,
    ) -> Result<Option<SemanticTokensResult>> {
        self.client
            .log_message(MessageType::INFO, "semantic_tokens_full")
            .await;

        let mut highlighter = Highlighter::new();
        let language = tree_sitter_egglog::language();
        let mut language_config =
            HighlightConfiguration::new(language, tree_sitter_egglog::HIGHLIGHTS_QUERY, "", "")
                .map_err(|_| Error::internal_error())?;

        language_config.configure(TS_HIGHLIGHT_NAMES);

        let src_tree = self
            .document_map
            .get(&params.text_document.uri)
            .ok_or_else(Error::internal_error)?;

        let mut parser = Parser::new();
        parser.set_language(language).unwrap();

        let tree = &src_tree.tree;
        let root_node = tree.root_node();

        let highlights = highlighter
            .highlight(&language_config, src_tree.src.as_bytes(), None, |_| None)
            .map_err(|_| Error::internal_error())?;

        let mut current_hightlight: Option<Highlight> = None;
        let mut pre_line = 0;
        let mut pre_start = 0;
        let semantic_tokens = highlights
            .filter_map(|h| h.ok())
            .filter_map(|h| match h {
                HighlightEvent::Source { start, end } => {
                    let node = root_node.descendant_for_byte_range(start, end).unwrap();

                    let s = start;
                    let e = end;
                    let line = node.start_position().row as u32;
                    let start = node.start_position().column as u32;
                    let delta_line = line - pre_line;
                    let delta_start = if delta_line == 0 {
                        start - pre_start
                    } else {
                        start
                    };
                    if let Some(t) = current_hightlight {
                        let ret = Some(SemanticToken {
                            delta_line,
                            delta_start,
                            length: (e - s) as u32,
                            token_type: t.0 as u32,
                            token_modifiers_bitset: 0,
                        });
                        pre_line = line;
                        pre_start = start;
                        ret
                    } else {
                        None
                    }
                }
                HighlightEvent::HighlightStart(highlight) => {
                    current_hightlight = Some(highlight);
                    None
                }
                HighlightEvent::HighlightEnd => {
                    current_hightlight = None;
                    None
                }
            })
            .collect::<Vec<_>>();

        if semantic_tokens.is_empty() {
            Ok(None)
        } else {
            Ok(Some(SemanticTokensResult::Tokens(SemanticTokens {
                result_id: None,
                data: semantic_tokens,
            })))
        }
    }

    async fn formatting(&self, params: DocumentFormattingParams) -> Result<Option<Vec<TextEdit>>> {
        let src_tree = self
            .document_map
            .get(&params.text_document.uri)
            .ok_or_else(Error::internal_error)?;
        let fmt = formatting(&src_tree, params.options.tab_size as usize)
            .map_err(|_| Error::internal_error())?;

        let lines = src_tree.tree.root_node().end_position().row;

        Ok(Some(vec![TextEdit {
            range: Range {
                start: Position {
                    line: 0,
                    character: 0,
                },
                end: Position {
                    line: lines as u32 + 1,
                    character: 0,
                },
            },
            new_text: fmt,
        }]))
    }

    async fn hover(&self, params: HoverParams) -> Result<Option<Hover>> {
        fn desugar_node(mut node: Node, src: &str) -> Option<String> {
            while node.kind() != "command" {
                let Some(p) = node.parent() else {
                    return None;
                };

                node = p;
            }

            let src = format!(
                "{}\n(let __marker 0)\n{}",
                &src[..node.start_byte()],
                &src[node.start_byte()..node.end_byte()]
            );

            desugar(&src).ok().map(|s| {
                let mut lines = s.lines();
                for line in lines.by_ref() {
                    if line.contains("__marker") {
                        break;
                    }
                }
                lines.collect::<Vec<_>>().join("\n")
            })
        }

        fn definition<'a>(node: Node, tree: &Tree, src: &'a str) -> Option<&'a str> {
            if node.kind() != "ident" && node.kind() != "type" {
                return None;
            }

            let ident = node.utf8_text(src.as_bytes()).ok()?;

            // TODO: I think these can be 'static.
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
                    .captures(query, tree.root_node(), src.as_bytes())
                    .next()
                else {
                    continue;
                };

                return capture.captures[0].node.utf8_text(src.as_bytes()).ok();
            }

            None
        }

        let pos = params.text_document_position_params;

        let src_tree = self
            .document_map
            .get(&pos.text_document.uri)
            .ok_or_else(|| Error::invalid_params("unknown uri"))?;

        let root = src_tree.tree.root_node();

        let posisiton = tree_sitter::Point {
            row: pos.position.line as _,
            column: pos.position.character as _,
        };

        let node = root
            .descendant_for_point_range(posisiton, posisiton)
            .ok_or_else(|| Error::invalid_params("Postion out of range"))?;

        let mut markdown = String::new();

        if let Some(definition) = definition(node, &src_tree.tree, &src_tree.src) {
            markdown.push_str(&format!(
                "#### Definition\n\n```egglog\n{}\n```\n",
                definition
            ));
        }

        if let Some(desugar_result) = desugar_node(node, &src_tree.src) {
            markdown.push_str(&format!(
                "#### Desugar\n\n```egglog\n{}\n```",
                desugar_result
            ));
        }

        if markdown.is_empty() {
            return Ok(None);
        }

        Ok(Some(Hover {
            contents: HoverContents::Scalar(MarkedString::String(markdown)),
            range: None,
        }))
    }

    async fn completion(&self, params: CompletionParams) -> Result<Option<CompletionResponse>> {
        self.client
            .log_message(MessageType::INFO, "completion")
            .await;

        let uri = &params.text_document_position.text_document.uri;

        let src_tree = self
            .document_map
            .get(uri)
            .ok_or_else(Error::internal_error)?;

        let root = src_tree.tree.root_node();

        let pos = tree_sitter::Point {
            row: params.text_document_position.position.line as _,
            column: params.text_document_position.position.character as _,
        };

        let mut node = root.named_descendant_for_point_range(pos, pos).unwrap();

        if node.kind() == "rparen" {
            if let Some(p) = node.prev_sibling() {
                node = p;
            }
        }

        if node.prev_sibling().is_some() {
            // Completion global variables
            let globals = globals(&src_tree);
            Ok(Some(CompletionResponse::Array(
                globals
                    .iter()
                    .map(|s| CompletionItem {
                        label: s.to_string(),
                        kind: Some(CompletionItemKind::FUNCTION),
                        ..Default::default()
                    })
                    .collect(),
            )))
        } else {
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
                "add-ruleset",
                "calc",
                "query-extract",
                "check",
                "check-proof",
                "run-schedule",
                "push",
                "pop",
                "print-table",
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

            let globals = globals(&src_tree);

            let items = KEYWORDS
                .iter()
                .map(|k| CompletionItem {
                    label: k.to_string(),
                    kind: Some(CompletionItemKind::KEYWORD),
                    ..Default::default()
                })
                .chain(globals.iter().map(|s| CompletionItem {
                    label: s.to_string(),
                    kind: Some(CompletionItemKind::FUNCTION),
                    ..Default::default()
                }))
                .collect();
            Ok(Some(CompletionResponse::Array(items)))
        }
    }
}

#[tokio::main]
async fn main() {
    let stdin = tokio::io::stdin();
    let stdout = tokio::io::stdout();

    let (service, socket) = LspService::new(|client| Backend {
        client,
        document_map: DashMap::new(),
    });
    Server::new(stdin, stdout, socket).serve(service).await;
}
