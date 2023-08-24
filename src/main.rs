use dashmap::DashMap;
use ropey::Rope;
use tower_lsp::jsonrpc::Result;
use tower_lsp::lsp_types::*;
use tower_lsp::{Client, LanguageServer, LspService, Server};
use tree_sitter::Parser;
use tree_sitter_highlight::{Highlight, HighlightConfiguration, HighlightEvent, Highlighter};
use tree_sitter_traversal::{traverse, Order};

pub const LEGEND_TYPE: &[SemanticTokenType] = &[
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
#[derive(Debug)]
struct Backend {
    client: Client,
    document_map: DashMap<Url, String>,
}

struct TextDocumentItem {
    uri: Url,
    text: String,
    version: i32,
}

fn diagnstics(src: &str) -> Vec<Diagnostic> {
    let language = tree_sitter_egglog::language();
    let mut parser = Parser::new();
    parser.set_language(language).unwrap();

    let tree = parser.parse(src, None).unwrap();
    let root_node = tree.root_node();

    // Fixme: Better traverse
    traverse(root_node.walk(), Order::Post)
        .filter(|n| n.kind() == "ERROR" || n.is_missing())
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
                        .map(|n| n.utf8_text(src.as_bytes()).unwrap())
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

// FIXME: find more better way
fn formatting(src: &str, tab_width: usize) -> String {
    let language = tree_sitter_egglog::language();
    let mut parser = Parser::new();
    parser.set_language(language).unwrap();

    let src = src.trim();
    let tree = parser.parse(src, None).unwrap();
    let root_node = tree.root_node();

    let mut buf = String::new();
    let cursor = root_node.walk();

    {
        use std::fmt::Write;

        let mut emptyline = true;
        let mut last_kind = "";
        let mut paren_level = 0;
        for n in traverse(cursor, Order::Pre).filter(|n| n.child_count() == 0) {
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

    if !buf.ends_with('\n') {
        buf.push('\n');
    }

    buf
}

impl Backend {
    async fn on_change(&self, params: TextDocumentItem) {
        self.document_map
            .insert(params.uri.clone(), params.text.clone());
        let diagnostics = diagnstics(&params.text);

        self.client
            .publish_diagnostics(params.uri, diagnostics, Some(params.version))
            .await;
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
                                    token_types: LEGEND_TYPE.into(),
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
        self.on_change(TextDocumentItem {
            uri: params.text_document.uri,
            text: params.text_document.text,
            version: params.text_document.version,
        })
        .await
    }

    async fn did_change(&self, mut params: DidChangeTextDocumentParams) {
        self.client
            .log_message(MessageType::INFO, "did_change")
            .await;
        self.on_change(TextDocumentItem {
            uri: params.text_document.uri,
            text: std::mem::take(&mut params.content_changes[0].text),
            version: params.text_document.version,
        })
        .await
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
        let highlight_names = [
            "keyword",
            "function",
            "type",
            "attribute",
            "variable",
            "number",
            "string",
            "comment",
        ];

        let mut highlighter = Highlighter::new();
        let language = tree_sitter_egglog::language();
        let mut language_config =
            HighlightConfiguration::new(language, tree_sitter_egglog::HIGHLIGHTS_QUERY, "", "")
                .unwrap();

        language_config.configure(&highlight_names);

        let src = self.document_map.get(&params.text_document.uri).unwrap();
        let rope = Rope::from_str(src.as_str());

        let highlights = highlighter
            .highlight(&language_config, src.as_bytes(), None, |_| None)
            .unwrap();

        let mut current_hightlight: Option<Highlight> = None;
        let mut pre_line = 0;
        let mut pre_start = 0;
        let semantic_tokens = highlights
            .filter_map(|h| h.ok())
            .filter_map(|h| match h {
                HighlightEvent::Source { start, end } => {
                    let s = start;
                    let e = end;
                    let line = rope.try_byte_to_line(s).ok()? as u32;
                    let first = rope.try_line_to_char(line as usize).ok()? as u32;
                    let start = rope.try_byte_to_char(s).ok()? as u32 - first;
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
        let src = self.document_map.get(&params.text_document.uri).unwrap();
        let fmt = formatting(&src, params.options.tab_size as usize);

        let lines = src.lines().enumerate().count();

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
