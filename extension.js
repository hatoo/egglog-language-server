"use strict";
const vscode = require("vscode");
const languageclient = require("vscode-languageclient");

let client;

function activate(context) {
  try {
    const serverOptions = {
      command: "cargo",
      args: [
        "run",
        "--release",
        "--manifest-path",
        context.extensionPath + "/Cargo.toml",
      ],
    };
    const clientOptions = {
      documentSelector: [
        {
          scheme: "file",
          language: "egglog",
        },
      ],
    };
    client = new languageclient.LanguageClient(
      "egglog",
      serverOptions,
      clientOptions
    );
    context.subscriptions.push(client.start());
  } catch (e) {
    vscode.window.showErrorMessage(
      "egglog-language-server couldn't be started."
    );
  }

  context.subscriptions.push(
    vscode.commands.registerCommand("egglog.egglog_run", async function () {
      const document = vscode.window.activeTextEditor.document;
      document.save().then(() => {
        const relativeFile = document.uri.fsPath;

        const terminal = vscode.window.createTerminal({
          name: "egglog",
          shellPath: "bash",
          shellArgs: [
            "-c",
            `egglog ${relativeFile} ; printf "\nPress any key to close..." ; read -n 1 -s`,
          ],
        });
        terminal.show();
      });
    })
  );
  context.subscriptions.push(
    vscode.commands.registerCommand("egglog.egglog_desugar", async function () {
      const document = vscode.window.activeTextEditor.document;
      document.save().then(() => {
        const relativeFile = document.uri.fsPath;

        const terminal = vscode.window.createTerminal({
          name: "egglog desugar",
          shellPath: "bash",
          shellArgs: [
            "-c",
            `egglog --desugar ${relativeFile} ; printf "\nPress any key to close..." ; read -n 1 -s`,
          ],
        });
        terminal.show();
      });
    })
  );
}

function deactivate() {
  if (client) return client.stop();
}

module.exports = { activate, deactivate };
