package tree_sitter_egglog_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-egglog"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_egglog.Language())
	if language == nil {
		t.Errorf("Error loading Egglog grammar")
	}
}
