use tower_lsp::jsonrpc::Result;
use tower_lsp::lsp_types::*;
use tower_lsp::{Client, LanguageServer, LspService, Server};
use tree_sitter::{Node, Parser, TreeCursor};
use tree_sitter_traversal::{traverse, Order};

#[derive(Debug)]
struct Backend {
    client: Client,
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

impl Backend {
    async fn on_change(&self, params: TextDocumentItem) {
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
                ..ServerCapabilities::default()
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
}

#[tokio::main]
async fn main() {
    let stdin = tokio::io::stdin();
    let stdout = tokio::io::stdout();

    let (service, socket) = LspService::new(|client| Backend { client });
    Server::new(stdin, stdout, socket).serve(service).await;
}
