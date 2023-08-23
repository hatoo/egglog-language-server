"use strict";
const vscode = require("vscode");
const languageclient = require("vscode-languageclient");

let client;

function activate(context) {
  try {
    const serverOptions = {
      path: context.extensionPath,
      command: "cargo",
      args: ["run", "--manifest-path", context.extensionPath + "/Cargo.toml"],
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
}

function deactivate() {
  if (client) return client.stop();
}

module.exports = { activate, deactivate };
