#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 271
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 91
#define ALIAS_COUNT 0
#define TOKEN_COUNT 65
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 15
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_comment = 1,
  sym_ws = 2,
  sym_lparen = 3,
  sym_rparen = 4,
  anon_sym_COMMA = 5,
  anon_sym_set_DASHoption = 6,
  anon_sym_datatype = 7,
  anon_sym_sort = 8,
  anon_sym_function = 9,
  anon_sym_COLONunextractable = 10,
  anon_sym_COLONon_merge = 11,
  anon_sym_COLONmerge = 12,
  anon_sym_COLONdefault = 13,
  anon_sym_declare = 14,
  anon_sym_relation = 15,
  anon_sym_ruleset = 16,
  anon_sym_rule = 17,
  anon_sym_COLONruleset = 18,
  anon_sym_COLONname = 19,
  anon_sym_rewrite = 20,
  anon_sym_COLONwhen = 21,
  anon_sym_birewrite = 22,
  anon_sym_let = 23,
  anon_sym_run = 24,
  anon_sym_COLONuntil = 25,
  anon_sym_simplify = 26,
  anon_sym_calc = 27,
  anon_sym_query_DASHextract = 28,
  anon_sym_COLONvariants = 29,
  anon_sym_check = 30,
  anon_sym_check_DASHproof = 31,
  anon_sym_run_DASHschedule = 32,
  anon_sym_print_DASHstats = 33,
  anon_sym_push = 34,
  anon_sym_pop = 35,
  anon_sym_print_DASHfunction = 36,
  anon_sym_print_DASHsize = 37,
  anon_sym_input = 38,
  anon_sym_output = 39,
  anon_sym_fail = 40,
  anon_sym_include = 41,
  anon_sym_saturate = 42,
  anon_sym_seq = 43,
  anon_sym_repeat = 44,
  anon_sym_COLONcost = 45,
  anon_sym_set = 46,
  anon_sym_delete = 47,
  anon_sym_union = 48,
  anon_sym_panic = 49,
  anon_sym_extract = 50,
  anon_sym_LBRACK = 51,
  anon_sym_RBRACK = 52,
  anon_sym_EQ = 53,
  sym_type = 54,
  anon_sym_true = 55,
  anon_sym_false = 56,
  sym_num = 57,
  sym_unum = 58,
  anon_sym_NaN = 59,
  aux_sym_f64_token1 = 60,
  anon_sym_inf = 61,
  anon_sym_DASHinf = 62,
  sym_ident = 63,
  sym_string = 64,
  sym_source_file = 65,
  sym_top_parens = 66,
  sym_command = 67,
  sym_schedule = 68,
  sym_cost = 69,
  sym_nonletaction = 70,
  sym_action = 71,
  sym_fact = 72,
  sym_schema = 73,
  sym_expr = 74,
  sym_literal = 75,
  sym_callexpr = 76,
  sym_variant = 77,
  sym_identsort = 78,
  sym_unit = 79,
  sym_bool = 80,
  sym_f64 = 81,
  sym_symstring = 82,
  aux_sym_source_file_repeat1 = 83,
  aux_sym_command_repeat1 = 84,
  aux_sym_command_repeat2 = 85,
  aux_sym_command_repeat3 = 86,
  aux_sym_command_repeat4 = 87,
  aux_sym_command_repeat5 = 88,
  aux_sym_command_repeat6 = 89,
  aux_sym_command_repeat7 = 90,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym_ws] = "ws",
  [sym_lparen] = "lparen",
  [sym_rparen] = "rparen",
  [anon_sym_COMMA] = ",",
  [anon_sym_set_DASHoption] = "set-option",
  [anon_sym_datatype] = "datatype",
  [anon_sym_sort] = "sort",
  [anon_sym_function] = "function",
  [anon_sym_COLONunextractable] = ":unextractable",
  [anon_sym_COLONon_merge] = ":on_merge",
  [anon_sym_COLONmerge] = ":merge",
  [anon_sym_COLONdefault] = ":default",
  [anon_sym_declare] = "declare",
  [anon_sym_relation] = "relation",
  [anon_sym_ruleset] = "ruleset",
  [anon_sym_rule] = "rule",
  [anon_sym_COLONruleset] = ":ruleset",
  [anon_sym_COLONname] = ":name",
  [anon_sym_rewrite] = "rewrite",
  [anon_sym_COLONwhen] = ":when",
  [anon_sym_birewrite] = "birewrite",
  [anon_sym_let] = "let",
  [anon_sym_run] = "run",
  [anon_sym_COLONuntil] = ":until",
  [anon_sym_simplify] = "simplify",
  [anon_sym_calc] = "calc",
  [anon_sym_query_DASHextract] = "query-extract",
  [anon_sym_COLONvariants] = ":variants",
  [anon_sym_check] = "check",
  [anon_sym_check_DASHproof] = "check-proof",
  [anon_sym_run_DASHschedule] = "run-schedule",
  [anon_sym_print_DASHstats] = "print-stats",
  [anon_sym_push] = "push",
  [anon_sym_pop] = "pop",
  [anon_sym_print_DASHfunction] = "print-function",
  [anon_sym_print_DASHsize] = "print-size",
  [anon_sym_input] = "input",
  [anon_sym_output] = "output",
  [anon_sym_fail] = "fail",
  [anon_sym_include] = "include",
  [anon_sym_saturate] = "saturate",
  [anon_sym_seq] = "seq",
  [anon_sym_repeat] = "repeat",
  [anon_sym_COLONcost] = ":cost",
  [anon_sym_set] = "set",
  [anon_sym_delete] = "delete",
  [anon_sym_union] = "union",
  [anon_sym_panic] = "panic",
  [anon_sym_extract] = "extract",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_EQ] = "=",
  [sym_type] = "type",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_num] = "num",
  [sym_unum] = "unum",
  [anon_sym_NaN] = "NaN",
  [aux_sym_f64_token1] = "f64_token1",
  [anon_sym_inf] = "inf",
  [anon_sym_DASHinf] = "-inf",
  [sym_ident] = "ident",
  [sym_string] = "string",
  [sym_source_file] = "source_file",
  [sym_top_parens] = "top_parens",
  [sym_command] = "command",
  [sym_schedule] = "schedule",
  [sym_cost] = "cost",
  [sym_nonletaction] = "nonletaction",
  [sym_action] = "action",
  [sym_fact] = "fact",
  [sym_schema] = "schema",
  [sym_expr] = "expr",
  [sym_literal] = "literal",
  [sym_callexpr] = "callexpr",
  [sym_variant] = "variant",
  [sym_identsort] = "identsort",
  [sym_unit] = "unit",
  [sym_bool] = "bool",
  [sym_f64] = "f64",
  [sym_symstring] = "symstring",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_command_repeat2] = "command_repeat2",
  [aux_sym_command_repeat3] = "command_repeat3",
  [aux_sym_command_repeat4] = "command_repeat4",
  [aux_sym_command_repeat5] = "command_repeat5",
  [aux_sym_command_repeat6] = "command_repeat6",
  [aux_sym_command_repeat7] = "command_repeat7",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [sym_ws] = sym_ws,
  [sym_lparen] = sym_lparen,
  [sym_rparen] = sym_rparen,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_set_DASHoption] = anon_sym_set_DASHoption,
  [anon_sym_datatype] = anon_sym_datatype,
  [anon_sym_sort] = anon_sym_sort,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_COLONunextractable] = anon_sym_COLONunextractable,
  [anon_sym_COLONon_merge] = anon_sym_COLONon_merge,
  [anon_sym_COLONmerge] = anon_sym_COLONmerge,
  [anon_sym_COLONdefault] = anon_sym_COLONdefault,
  [anon_sym_declare] = anon_sym_declare,
  [anon_sym_relation] = anon_sym_relation,
  [anon_sym_ruleset] = anon_sym_ruleset,
  [anon_sym_rule] = anon_sym_rule,
  [anon_sym_COLONruleset] = anon_sym_COLONruleset,
  [anon_sym_COLONname] = anon_sym_COLONname,
  [anon_sym_rewrite] = anon_sym_rewrite,
  [anon_sym_COLONwhen] = anon_sym_COLONwhen,
  [anon_sym_birewrite] = anon_sym_birewrite,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_run] = anon_sym_run,
  [anon_sym_COLONuntil] = anon_sym_COLONuntil,
  [anon_sym_simplify] = anon_sym_simplify,
  [anon_sym_calc] = anon_sym_calc,
  [anon_sym_query_DASHextract] = anon_sym_query_DASHextract,
  [anon_sym_COLONvariants] = anon_sym_COLONvariants,
  [anon_sym_check] = anon_sym_check,
  [anon_sym_check_DASHproof] = anon_sym_check_DASHproof,
  [anon_sym_run_DASHschedule] = anon_sym_run_DASHschedule,
  [anon_sym_print_DASHstats] = anon_sym_print_DASHstats,
  [anon_sym_push] = anon_sym_push,
  [anon_sym_pop] = anon_sym_pop,
  [anon_sym_print_DASHfunction] = anon_sym_print_DASHfunction,
  [anon_sym_print_DASHsize] = anon_sym_print_DASHsize,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_fail] = anon_sym_fail,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_saturate] = anon_sym_saturate,
  [anon_sym_seq] = anon_sym_seq,
  [anon_sym_repeat] = anon_sym_repeat,
  [anon_sym_COLONcost] = anon_sym_COLONcost,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_delete] = anon_sym_delete,
  [anon_sym_union] = anon_sym_union,
  [anon_sym_panic] = anon_sym_panic,
  [anon_sym_extract] = anon_sym_extract,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_type] = sym_type,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_num] = sym_num,
  [sym_unum] = sym_unum,
  [anon_sym_NaN] = anon_sym_NaN,
  [aux_sym_f64_token1] = aux_sym_f64_token1,
  [anon_sym_inf] = anon_sym_inf,
  [anon_sym_DASHinf] = anon_sym_DASHinf,
  [sym_ident] = sym_ident,
  [sym_string] = sym_string,
  [sym_source_file] = sym_source_file,
  [sym_top_parens] = sym_top_parens,
  [sym_command] = sym_command,
  [sym_schedule] = sym_schedule,
  [sym_cost] = sym_cost,
  [sym_nonletaction] = sym_nonletaction,
  [sym_action] = sym_action,
  [sym_fact] = sym_fact,
  [sym_schema] = sym_schema,
  [sym_expr] = sym_expr,
  [sym_literal] = sym_literal,
  [sym_callexpr] = sym_callexpr,
  [sym_variant] = sym_variant,
  [sym_identsort] = sym_identsort,
  [sym_unit] = sym_unit,
  [sym_bool] = sym_bool,
  [sym_f64] = sym_f64,
  [sym_symstring] = sym_symstring,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
  [aux_sym_command_repeat2] = aux_sym_command_repeat2,
  [aux_sym_command_repeat3] = aux_sym_command_repeat3,
  [aux_sym_command_repeat4] = aux_sym_command_repeat4,
  [aux_sym_command_repeat5] = aux_sym_command_repeat5,
  [aux_sym_command_repeat6] = aux_sym_command_repeat6,
  [aux_sym_command_repeat7] = aux_sym_command_repeat7,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_ws] = {
    .visible = true,
    .named = true,
  },
  [sym_lparen] = {
    .visible = true,
    .named = true,
  },
  [sym_rparen] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set_DASHoption] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_datatype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONunextractable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONon_merge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONmerge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONdefault] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_declare] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_relation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ruleset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rule] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONruleset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONname] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rewrite] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONwhen] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_birewrite] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_run] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONuntil] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_simplify] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_calc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_query_DASHextract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONvariants] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_check] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_check_DASHproof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_run_DASHschedule] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_print_DASHstats] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_print_DASHfunction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_print_DASHsize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_input] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fail] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_saturate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_seq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_repeat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONcost] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_union] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_panic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_num] = {
    .visible = true,
    .named = true,
  },
  [sym_unum] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_NaN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_f64_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_inf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASHinf] = {
    .visible = true,
    .named = false,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_top_parens] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_schedule] = {
    .visible = true,
    .named = true,
  },
  [sym_cost] = {
    .visible = true,
    .named = true,
  },
  [sym_nonletaction] = {
    .visible = true,
    .named = true,
  },
  [sym_action] = {
    .visible = true,
    .named = true,
  },
  [sym_fact] = {
    .visible = true,
    .named = true,
  },
  [sym_schema] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_callexpr] = {
    .visible = true,
    .named = true,
  },
  [sym_variant] = {
    .visible = true,
    .named = true,
  },
  [sym_identsort] = {
    .visible = true,
    .named = true,
  },
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_f64] = {
    .visible = true,
    .named = true,
  },
  [sym_symstring] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat7] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 89,
  [97] = 97,
  [98] = 98,
  [99] = 83,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 90,
  [108] = 108,
  [109] = 82,
  [110] = 92,
  [111] = 94,
  [112] = 93,
  [113] = 106,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 118,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 60,
  [133] = 57,
  [134] = 61,
  [135] = 59,
  [136] = 136,
  [137] = 58,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 130,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 169,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 220,
};

static TSCharacterRange sym_type_character_set_1[] = {
  {'!', '!'}, {'%', '&'}, {'*', '+'}, {'-', '-'}, {'/', '/'}, {'<', '?'}, {'A', 'Z'}, {'^', '_'},
  {'a', 'z'}, {'|', '|'},
};

static TSCharacterRange sym_type_character_set_2[] = {
  {'!', '!'}, {'%', '&'}, {'*', '+'}, {'-', '-'}, {'/', '9'}, {'<', '?'}, {'A', 'Z'}, {'^', '_'},
  {'a', 'z'}, {'|', '|'},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(235);
      ADVANCE_MAP(
        '"', 1,
        '(', 238,
        ')', 239,
        ',', 240,
        '-', 99,
        ':', 36,
        ';', 236,
        '=', 319,
        'N', 13,
        '[', 317,
        ']', 318,
        'b', 97,
        'c', 14,
        'd', 15,
        'e', 224,
        'f', 16,
        'i', 127,
        'l', 73,
        'o', 213,
        'p', 27,
        'q', 220,
        'r', 52,
        's', 20,
        't', 170,
        'u', 137,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '+') ADVANCE(4);
      if (lookahead == '-') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(90);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(85);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == ';') ADVANCE(236);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(239);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(237);
      if ((set_contains(sym_type_character_set_1, 10, lookahead)) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(322);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(221);
      if (lookahead == ';') ADVANCE(236);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(238);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(239);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 8:
      if (lookahead == ';') ADVANCE(236);
      if (lookahead == '=') ADVANCE(320);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(237);
      if ((set_contains(sym_type_character_set_1, 10, lookahead)) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        ';', 236,
        'd', 384,
        'e', 493,
        'l', 381,
        'p', 350,
        'u', 429,
        '(', 238,
        '[', 238,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(237);
      if ((set_contains(sym_type_character_set_1, 10, lookahead)) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 10:
      if (lookahead == ';') ADVANCE(236);
      if (lookahead == 'r') ADVANCE(82);
      if (lookahead == 's') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(237);
      END_STATE();
    case 11:
      if (lookahead == 'N') ADVANCE(329);
      END_STATE();
    case 12:
      if (lookahead == '_') ADVANCE(126);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(112);
      if (lookahead == 'h') ADVANCE(71);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(101);
      if (lookahead == 'u') ADVANCE(138);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead == 'i') ADVANCE(124);
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(139);
      if (lookahead == 'o') ADVANCE(151);
      if (lookahead == 'r') ADVANCE(103);
      if (lookahead == 'u') ADVANCE(176);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 34:
      if (lookahead == 'b') ADVANCE(122);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(144);
      END_STATE();
    case 36:
      ADVANCE_MAP(
        'c', 144,
        'd', 70,
        'm', 74,
        'n', 18,
        'o', 129,
        'r', 212,
        'u', 130,
        'v', 19,
        'w', 94,
      );
      END_STATE();
    case 37:
      ADVANCE_MAP(
        'c', 144,
        'd', 70,
        'm', 74,
        'n', 18,
        'o', 129,
        'r', 212,
        'u', 130,
        'w', 94,
      );
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(275);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(111);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(313);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(116);
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(115);
      if (lookahead == 'f') ADVANCE(333);
      if (lookahead == 'p') ADVANCE(217);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(206);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(188);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(192);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(95);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(201);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(209);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(212);
      if (lookahead == 'v') ADVANCE(19);
      if (lookahead == 'w') ADVANCE(94);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(219);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(123);
      if (lookahead == 'u') ADVANCE(118);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(323);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(309);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(302);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == 'u') ADVANCE(136);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(225);
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 86:
      if (lookahead == 'f') ADVANCE(335);
      END_STATE();
    case 87:
      if (lookahead == 'f') ADVANCE(282);
      END_STATE();
    case 88:
      if (lookahead == 'f') ADVANCE(227);
      END_STATE();
    case 89:
      if (lookahead == 'f') ADVANCE(22);
      END_STATE();
    case 90:
      if (lookahead == 'f') ADVANCE(222);
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 91:
      if (lookahead == 'g') ADVANCE(58);
      END_STATE();
    case 92:
      if (lookahead == 'g') ADVANCE(65);
      END_STATE();
    case 93:
      if (lookahead == 'h') ADVANCE(288);
      END_STATE();
    case 94:
      if (lookahead == 'h') ADVANCE(77);
      END_STATE();
    case 95:
      if (lookahead == 'h') ADVANCE(72);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(230);
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(113);
      if (lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(203);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 111:
      if (lookahead == 'k') ADVANCE(280);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(300);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(272);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(211);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(54);
      if (lookahead == 'n') ADVANCE(271);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(190);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(33);
      if (lookahead == 'p') ADVANCE(83);
      if (lookahead == 'w') ADVANCE(166);
      END_STATE();
    case 124:
      if (lookahead == 'm') ADVANCE(152);
      END_STATE();
    case 125:
      if (lookahead == 'm') ADVANCE(56);
      END_STATE();
    case 126:
      if (lookahead == 'm') ADVANCE(81);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(264);
      END_STATE();
    case 132:
      if (lookahead == 'n') ADVANCE(311);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(246);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(254);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(292);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(269);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(197);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 148:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 149:
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 150:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 151:
      if (lookahead == 'p') ADVANCE(290);
      END_STATE();
    case 152:
      if (lookahead == 'p') ADVANCE(117);
      END_STATE();
    case 153:
      if (lookahead == 'p') ADVANCE(83);
      END_STATE();
    case 154:
      if (lookahead == 'p') ADVANCE(161);
      END_STATE();
    case 155:
      if (lookahead == 'p') ADVANCE(63);
      END_STATE();
    case 156:
      if (lookahead == 'p') ADVANCE(218);
      END_STATE();
    case 157:
      if (lookahead == 'q') ADVANCE(305);
      END_STATE();
    case 158:
      if (lookahead == 'q') ADVANCE(305);
      if (lookahead == 't') ADVANCE(308);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 160:
      if (lookahead == 'r') ADVANCE(228);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 174:
      if (lookahead == 's') ADVANCE(279);
      END_STATE();
    case 175:
      if (lookahead == 's') ADVANCE(286);
      END_STATE();
    case 176:
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 177:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 178:
      if (lookahead == 's') ADVANCE(183);
      END_STATE();
    case 179:
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 180:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(267);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(244);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(307);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(296);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(3);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(298);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(306);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(315);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(256);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(251);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(260);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(277);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(229);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 211:
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 212:
      if (lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 213:
      if (lookahead == 'u') ADVANCE(193);
      END_STATE();
    case 214:
      if (lookahead == 'u') ADVANCE(171);
      END_STATE();
    case 215:
      if (lookahead == 'u') ADVANCE(120);
      END_STATE();
    case 216:
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 217:
      if (lookahead == 'u') ADVANCE(184);
      END_STATE();
    case 218:
      if (lookahead == 'u') ADVANCE(186);
      END_STATE();
    case 219:
      if (lookahead == 'u') ADVANCE(121);
      END_STATE();
    case 220:
      if (lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 221:
      if (lookahead == 'u') ADVANCE(142);
      END_STATE();
    case 222:
      if (lookahead == 'u') ADVANCE(143);
      END_STATE();
    case 223:
      if (lookahead == 'w') ADVANCE(173);
      END_STATE();
    case 224:
      if (lookahead == 'x') ADVANCE(198);
      END_STATE();
    case 225:
      if (lookahead == 'x') ADVANCE(207);
      END_STATE();
    case 226:
      if (lookahead == 'x') ADVANCE(210);
      END_STATE();
    case 227:
      if (lookahead == 'y') ADVANCE(273);
      END_STATE();
    case 228:
      if (lookahead == 'y') ADVANCE(5);
      END_STATE();
    case 229:
      if (lookahead == 'y') ADVANCE(155);
      END_STATE();
    case 230:
      if (lookahead == 'z') ADVANCE(67);
      END_STATE();
    case 231:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 232:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      END_STATE();
    case 233:
      if (eof) ADVANCE(235);
      ADVANCE_MAP(
        '"', 1,
        '-', 402,
        ':', 49,
        ';', 236,
        'N', 343,
        'f', 345,
        'i', 428,
        't', 455,
        '(', 238,
        '[', 238,
        ')', 239,
        ']', 239,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 234:
      if (eof) ADVANCE(235);
      ADVANCE_MAP(
        ':', 37,
        ';', 236,
        'b', 395,
        'c', 341,
        'd', 342,
        'e', 493,
        'f', 344,
        'i', 421,
        'l', 381,
        'o', 486,
        'p', 349,
        'q', 485,
        'r', 366,
        's', 383,
        'u', 429,
        '(', 238,
        '[', 238,
        ')', 239,
        ']', 239,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_ws);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_lparen);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_rparen);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_set_DASHoption);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_datatype);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_datatype);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_sort);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_sort);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_function);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_COLONunextractable);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_COLONon_merge);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_COLONmerge);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_COLONdefault);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_declare);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_relation);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_relation);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_ruleset);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_ruleset);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_rule);
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_rule);
      if (lookahead == 's') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_COLONruleset);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_COLONname);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_rewrite);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_rewrite);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_COLONwhen);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_birewrite);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_birewrite);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_run);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '-') ADVANCE(460);
      if (lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '-') ADVANCE(177);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_COLONuntil);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_simplify);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_simplify);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_calc);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_calc);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_query_DASHextract);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_query_DASHextract);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_COLONvariants);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_check);
      if (lookahead == '-') ADVANCE(154);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_check);
      if (lookahead == '-') ADVANCE(444);
      if (lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_check_DASHproof);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_check_DASHproof);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_run_DASHschedule);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_run_DASHschedule);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_print_DASHstats);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_print_DASHstats);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_push);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_push);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_pop);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_pop);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_print_DASHfunction);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_print_DASHfunction);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_print_DASHsize);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_print_DASHsize);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_input);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_output);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_fail);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_fail);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_saturate);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_seq);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_repeat);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_COLONcost);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_union);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_panic);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_panic);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_extract);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_extract);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_EQ);
      if ((set_contains(sym_type_character_set_1, 10, lookahead)) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_type);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(322);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_type);
      if ((set_contains(sym_type_character_set_1, 10, lookahead)) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(322);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '.') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_unum);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_NaN);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_NaN);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_f64_token1);
      if (lookahead == 'e') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_f64_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_inf);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_inf);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_DASHinf);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_DASHinf);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(392);
      if (lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(435);
      if (lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(387);
      if (lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'N') ADVANCE(330);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(410);
      if (lookahead == 'h') ADVANCE(379);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(462);
      if (lookahead == 'e') ADVANCE(357);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(340);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(399);
      if (lookahead == 'u') ADVANCE(427);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(414);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(473);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(475);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(454);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(431);
      if (lookahead == 'o') ADVANCE(442);
      if (lookahead == 'r') ADVANCE(400);
      if (lookahead == 'u') ADVANCE(458);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(431);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(361);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(362);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(480);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(276);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(409);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(314);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(412);
      if (lookahead == 'l') ADVANCE(385);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(394);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(413);
      if (lookahead == 'p') ADVANCE(488);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(479);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(468);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(470);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(482);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(487);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(371);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(419);
      if (lookahead == 'u') ADVANCE(415);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(492);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(259);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(310);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(253);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(303);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(263);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(243);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(295);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(324);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(326);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(355);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(364);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(463);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(448);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(464);
      if (lookahead == 'i') ADVANCE(420);
      if (lookahead == 'o') ADVANCE(453);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(418);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(476);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(469);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(494);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(283);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(334);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(336);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(495);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(491);
      if (lookahead == 's') ADVANCE(398);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(289);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(380);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(451);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(437);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(391);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(498);
      if (lookahead == 't') ADVANCE(347);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(411);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(432);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(356);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      if ((set_contains(sym_type_character_set_2, 10, lookahead)) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(477);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(478);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(438);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(439);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(440);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(441);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(354);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(301);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(348);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(484);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(461);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(368);
      if (lookahead == 'n') ADVANCE(270);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(397);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(376);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(385);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(353);
      if (lookahead == 'w') ADVANCE(452);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(443);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(359);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(312);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(247);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(255);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(241);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(293);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(360);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(389);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(396);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(390);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(401);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(472);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(363);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(388);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(447);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(434);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(422);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(423);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(424);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(425);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(426);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(291);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(416);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(450);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(373);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(489);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(481);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(496);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(351);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(436);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(367);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(403);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(465);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(370);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(490);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(404);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(352);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(393);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(287);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(358);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(378);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(346);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(268);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(338);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(245);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(297);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(299);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(316);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(257);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(278);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(446);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(337);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(497);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(449);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(459);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(369);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(372);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(374);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(405);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(406);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(407);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(408);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(457);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(365);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(382);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(471);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(417);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(466);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(467);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(377);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(433);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'w') ADVANCE(456);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(474);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(483);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(274);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(339);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(445);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'z') ADVANCE(375);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(499);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_ident);
      if ((set_contains(sym_type_character_set_1, 10, lookahead)) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 234},
  [2] = {.lex_state = 234},
  [3] = {.lex_state = 233},
  [4] = {.lex_state = 233},
  [5] = {.lex_state = 233},
  [6] = {.lex_state = 233},
  [7] = {.lex_state = 233},
  [8] = {.lex_state = 233},
  [9] = {.lex_state = 233},
  [10] = {.lex_state = 233},
  [11] = {.lex_state = 233},
  [12] = {.lex_state = 233},
  [13] = {.lex_state = 233},
  [14] = {.lex_state = 233},
  [15] = {.lex_state = 233},
  [16] = {.lex_state = 233},
  [17] = {.lex_state = 233},
  [18] = {.lex_state = 233},
  [19] = {.lex_state = 233},
  [20] = {.lex_state = 233},
  [21] = {.lex_state = 233},
  [22] = {.lex_state = 233},
  [23] = {.lex_state = 233},
  [24] = {.lex_state = 233},
  [25] = {.lex_state = 233},
  [26] = {.lex_state = 233},
  [27] = {.lex_state = 233},
  [28] = {.lex_state = 233},
  [29] = {.lex_state = 233},
  [30] = {.lex_state = 233},
  [31] = {.lex_state = 233},
  [32] = {.lex_state = 233},
  [33] = {.lex_state = 233},
  [34] = {.lex_state = 233},
  [35] = {.lex_state = 233},
  [36] = {.lex_state = 233},
  [37] = {.lex_state = 233},
  [38] = {.lex_state = 233},
  [39] = {.lex_state = 233},
  [40] = {.lex_state = 233},
  [41] = {.lex_state = 233},
  [42] = {.lex_state = 233},
  [43] = {.lex_state = 233},
  [44] = {.lex_state = 233},
  [45] = {.lex_state = 233},
  [46] = {.lex_state = 233},
  [47] = {.lex_state = 233},
  [48] = {.lex_state = 233},
  [49] = {.lex_state = 233},
  [50] = {.lex_state = 233},
  [51] = {.lex_state = 233},
  [52] = {.lex_state = 233},
  [53] = {.lex_state = 233},
  [54] = {.lex_state = 233},
  [55] = {.lex_state = 233},
  [56] = {.lex_state = 233},
  [57] = {.lex_state = 233},
  [58] = {.lex_state = 233},
  [59] = {.lex_state = 233},
  [60] = {.lex_state = 233},
  [61] = {.lex_state = 233},
  [62] = {.lex_state = 234},
  [63] = {.lex_state = 9},
  [64] = {.lex_state = 234},
  [65] = {.lex_state = 234},
  [66] = {.lex_state = 234},
  [67] = {.lex_state = 234},
  [68] = {.lex_state = 234},
  [69] = {.lex_state = 234},
  [70] = {.lex_state = 234},
  [71] = {.lex_state = 234},
  [72] = {.lex_state = 234},
  [73] = {.lex_state = 234},
  [74] = {.lex_state = 234},
  [75] = {.lex_state = 234},
  [76] = {.lex_state = 234},
  [77] = {.lex_state = 234},
  [78] = {.lex_state = 234},
  [79] = {.lex_state = 234},
  [80] = {.lex_state = 234},
  [81] = {.lex_state = 234},
  [82] = {.lex_state = 234},
  [83] = {.lex_state = 234},
  [84] = {.lex_state = 234},
  [85] = {.lex_state = 234},
  [86] = {.lex_state = 234},
  [87] = {.lex_state = 234},
  [88] = {.lex_state = 234},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 234},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 234},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 234},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 234},
  [100] = {.lex_state = 234},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 234},
  [103] = {.lex_state = 234},
  [104] = {.lex_state = 7},
  [105] = {.lex_state = 234},
  [106] = {.lex_state = 234},
  [107] = {.lex_state = 7},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 234},
  [110] = {.lex_state = 7},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 234},
  [113] = {.lex_state = 234},
  [114] = {.lex_state = 234},
  [115] = {.lex_state = 234},
  [116] = {.lex_state = 234},
  [117] = {.lex_state = 234},
  [118] = {.lex_state = 10},
  [119] = {.lex_state = 234},
  [120] = {.lex_state = 234},
  [121] = {.lex_state = 6},
  [122] = {.lex_state = 10},
  [123] = {.lex_state = 234},
  [124] = {.lex_state = 234},
  [125] = {.lex_state = 234},
  [126] = {.lex_state = 234},
  [127] = {.lex_state = 234},
  [128] = {.lex_state = 234},
  [129] = {.lex_state = 234},
  [130] = {.lex_state = 7},
  [131] = {.lex_state = 234},
  [132] = {.lex_state = 7},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 7},
  [135] = {.lex_state = 7},
  [136] = {.lex_state = 6},
  [137] = {.lex_state = 7},
  [138] = {.lex_state = 234},
  [139] = {.lex_state = 234},
  [140] = {.lex_state = 234},
  [141] = {.lex_state = 234},
  [142] = {.lex_state = 234},
  [143] = {.lex_state = 234},
  [144] = {.lex_state = 234},
  [145] = {.lex_state = 234},
  [146] = {.lex_state = 7},
  [147] = {.lex_state = 234},
  [148] = {.lex_state = 234},
  [149] = {.lex_state = 234},
  [150] = {.lex_state = 234},
  [151] = {.lex_state = 234},
  [152] = {.lex_state = 7},
  [153] = {.lex_state = 234},
  [154] = {.lex_state = 234},
  [155] = {.lex_state = 234},
  [156] = {.lex_state = 234},
  [157] = {.lex_state = 6},
  [158] = {.lex_state = 6},
  [159] = {.lex_state = 234},
  [160] = {.lex_state = 234},
  [161] = {.lex_state = 6},
  [162] = {.lex_state = 234},
  [163] = {.lex_state = 234},
  [164] = {.lex_state = 234},
  [165] = {.lex_state = 234},
  [166] = {.lex_state = 234},
  [167] = {.lex_state = 234},
  [168] = {.lex_state = 234},
  [169] = {.lex_state = 234},
  [170] = {.lex_state = 234},
  [171] = {.lex_state = 234},
  [172] = {.lex_state = 234},
  [173] = {.lex_state = 234},
  [174] = {.lex_state = 7},
  [175] = {.lex_state = 234},
  [176] = {.lex_state = 234},
  [177] = {.lex_state = 234},
  [178] = {.lex_state = 234},
  [179] = {.lex_state = 234},
  [180] = {.lex_state = 234},
  [181] = {.lex_state = 234},
  [182] = {.lex_state = 8},
  [183] = {.lex_state = 234},
  [184] = {.lex_state = 234},
  [185] = {.lex_state = 234},
  [186] = {.lex_state = 234},
  [187] = {.lex_state = 7},
  [188] = {.lex_state = 7},
  [189] = {.lex_state = 234},
  [190] = {.lex_state = 234},
  [191] = {.lex_state = 234},
  [192] = {.lex_state = 234},
  [193] = {.lex_state = 234},
  [194] = {.lex_state = 234},
  [195] = {.lex_state = 234},
  [196] = {.lex_state = 234},
  [197] = {.lex_state = 7},
  [198] = {.lex_state = 234},
  [199] = {.lex_state = 234},
  [200] = {.lex_state = 7},
  [201] = {.lex_state = 7},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 234},
  [204] = {.lex_state = 234},
  [205] = {.lex_state = 6},
  [206] = {.lex_state = 234},
  [207] = {.lex_state = 7},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 234},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 234},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 7},
  [214] = {.lex_state = 7},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 7},
  [217] = {.lex_state = 234},
  [218] = {.lex_state = 234},
  [219] = {.lex_state = 7},
  [220] = {.lex_state = 234},
  [221] = {.lex_state = 234},
  [222] = {.lex_state = 234},
  [223] = {.lex_state = 234},
  [224] = {.lex_state = 234},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 234},
  [227] = {.lex_state = 7},
  [228] = {.lex_state = 7},
  [229] = {.lex_state = 234},
  [230] = {.lex_state = 234},
  [231] = {.lex_state = 6},
  [232] = {.lex_state = 234},
  [233] = {.lex_state = 7},
  [234] = {.lex_state = 234},
  [235] = {.lex_state = 234},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 234},
  [238] = {.lex_state = 234},
  [239] = {.lex_state = 234},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 234},
  [242] = {.lex_state = 234},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 234},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 7},
  [247] = {.lex_state = 7},
  [248] = {.lex_state = 234},
  [249] = {.lex_state = 234},
  [250] = {.lex_state = 7},
  [251] = {.lex_state = 234},
  [252] = {.lex_state = 234},
  [253] = {.lex_state = 234},
  [254] = {.lex_state = 6},
  [255] = {.lex_state = 234},
  [256] = {.lex_state = 234},
  [257] = {.lex_state = 234},
  [258] = {.lex_state = 234},
  [259] = {.lex_state = 6},
  [260] = {.lex_state = 7},
  [261] = {.lex_state = 7},
  [262] = {.lex_state = 234},
  [263] = {.lex_state = 7},
  [264] = {.lex_state = 7},
  [265] = {.lex_state = 7},
  [266] = {.lex_state = 7},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 234},
  [269] = {.lex_state = 7},
  [270] = {.lex_state = 234},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_ws] = ACTIONS(3),
    [sym_lparen] = ACTIONS(1),
    [sym_rparen] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_datatype] = ACTIONS(1),
    [anon_sym_sort] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_COLONunextractable] = ACTIONS(1),
    [anon_sym_COLONon_merge] = ACTIONS(1),
    [anon_sym_COLONmerge] = ACTIONS(1),
    [anon_sym_COLONdefault] = ACTIONS(1),
    [anon_sym_declare] = ACTIONS(1),
    [anon_sym_relation] = ACTIONS(1),
    [anon_sym_ruleset] = ACTIONS(1),
    [anon_sym_rule] = ACTIONS(1),
    [anon_sym_COLONruleset] = ACTIONS(1),
    [anon_sym_COLONname] = ACTIONS(1),
    [anon_sym_rewrite] = ACTIONS(1),
    [anon_sym_COLONwhen] = ACTIONS(1),
    [anon_sym_birewrite] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_run] = ACTIONS(1),
    [anon_sym_COLONuntil] = ACTIONS(1),
    [anon_sym_simplify] = ACTIONS(1),
    [anon_sym_calc] = ACTIONS(1),
    [anon_sym_query_DASHextract] = ACTIONS(1),
    [anon_sym_COLONvariants] = ACTIONS(1),
    [anon_sym_check] = ACTIONS(1),
    [anon_sym_check_DASHproof] = ACTIONS(1),
    [anon_sym_run_DASHschedule] = ACTIONS(1),
    [anon_sym_print_DASHstats] = ACTIONS(1),
    [anon_sym_push] = ACTIONS(1),
    [anon_sym_pop] = ACTIONS(1),
    [anon_sym_print_DASHfunction] = ACTIONS(1),
    [anon_sym_print_DASHsize] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_fail] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_saturate] = ACTIONS(1),
    [anon_sym_seq] = ACTIONS(1),
    [anon_sym_repeat] = ACTIONS(1),
    [anon_sym_COLONcost] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_delete] = ACTIONS(1),
    [anon_sym_union] = ACTIONS(1),
    [anon_sym_panic] = ACTIONS(1),
    [anon_sym_extract] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_num] = ACTIONS(1),
    [sym_unum] = ACTIONS(1),
    [anon_sym_NaN] = ACTIONS(1),
    [aux_sym_f64_token1] = ACTIONS(1),
    [anon_sym_inf] = ACTIONS(1),
    [anon_sym_DASHinf] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(245),
    [sym_top_parens] = STATE(127),
    [sym_command] = STATE(65),
    [sym_nonletaction] = STATE(127),
    [sym_callexpr] = STATE(128),
    [aux_sym_source_file_repeat1] = STATE(65),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_ws] = ACTIONS(3),
    [sym_lparen] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 31,
    ACTIONS(9), 1,
      sym_lparen,
    ACTIONS(11), 1,
      sym_rparen,
    ACTIONS(15), 1,
      anon_sym_datatype,
    ACTIONS(17), 1,
      anon_sym_sort,
    ACTIONS(19), 1,
      anon_sym_function,
    ACTIONS(21), 1,
      anon_sym_declare,
    ACTIONS(23), 1,
      anon_sym_relation,
    ACTIONS(25), 1,
      anon_sym_ruleset,
    ACTIONS(27), 1,
      anon_sym_rule,
    ACTIONS(31), 1,
      anon_sym_run,
    ACTIONS(33), 1,
      anon_sym_simplify,
    ACTIONS(35), 1,
      anon_sym_calc,
    ACTIONS(37), 1,
      anon_sym_query_DASHextract,
    ACTIONS(39), 1,
      anon_sym_check,
    ACTIONS(43), 1,
      anon_sym_run_DASHschedule,
    ACTIONS(47), 1,
      anon_sym_print_DASHfunction,
    ACTIONS(49), 1,
      anon_sym_print_DASHsize,
    ACTIONS(51), 1,
      anon_sym_input,
    ACTIONS(53), 1,
      anon_sym_output,
    ACTIONS(55), 1,
      anon_sym_fail,
    ACTIONS(57), 1,
      anon_sym_include,
    ACTIONS(59), 1,
      anon_sym_delete,
    ACTIONS(61), 1,
      anon_sym_union,
    ACTIONS(63), 1,
      anon_sym_panic,
    ACTIONS(65), 1,
      anon_sym_extract,
    ACTIONS(67), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(13), 2,
      anon_sym_set_DASHoption,
      anon_sym_let,
    ACTIONS(29), 2,
      anon_sym_rewrite,
      anon_sym_birewrite,
    ACTIONS(41), 2,
      anon_sym_check_DASHproof,
      anon_sym_print_DASHstats,
    ACTIONS(45), 2,
      anon_sym_push,
      anon_sym_pop,
  [99] = 12,
    ACTIONS(69), 1,
      sym_lparen,
    ACTIONS(71), 1,
      sym_rparen,
    ACTIONS(75), 1,
      sym_num,
    ACTIONS(79), 1,
      aux_sym_f64_token1,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(11), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(53), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(77), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(51), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [145] = 12,
    ACTIONS(69), 1,
      sym_lparen,
    ACTIONS(75), 1,
      sym_num,
    ACTIONS(79), 1,
      aux_sym_f64_token1,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      sym_string,
    ACTIONS(85), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(8), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(53), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(77), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(51), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [191] = 12,
    ACTIONS(69), 1,
      sym_lparen,
    ACTIONS(75), 1,
      sym_num,
    ACTIONS(79), 1,
      aux_sym_f64_token1,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      sym_string,
    ACTIONS(87), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(8), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(53), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(77), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(51), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [237] = 12,
    ACTIONS(69), 1,
      sym_lparen,
    ACTIONS(75), 1,
      sym_num,
    ACTIONS(79), 1,
      aux_sym_f64_token1,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      sym_string,
    ACTIONS(89), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(8), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(53), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(77), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(51), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [283] = 12,
    ACTIONS(69), 1,
      sym_lparen,
    ACTIONS(75), 1,
      sym_num,
    ACTIONS(79), 1,
      aux_sym_f64_token1,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      sym_string,
    ACTIONS(91), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(10), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(53), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(77), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(51), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [329] = 12,
    ACTIONS(93), 1,
      sym_lparen,
    ACTIONS(96), 1,
      sym_rparen,
    ACTIONS(101), 1,
      sym_num,
    ACTIONS(107), 1,
      aux_sym_f64_token1,
    ACTIONS(110), 1,
      sym_ident,
    ACTIONS(113), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(98), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(8), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(53), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(104), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(51), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [375] = 12,
    ACTIONS(69), 1,
      sym_lparen,
    ACTIONS(75), 1,
      sym_num,
    ACTIONS(79), 1,
      aux_sym_f64_token1,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      sym_string,
    ACTIONS(116), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(8), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(53), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(77), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(51), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [421] = 12,
    ACTIONS(69), 1,
      sym_lparen,
    ACTIONS(75), 1,
      sym_num,
    ACTIONS(79), 1,
      aux_sym_f64_token1,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      sym_string,
    ACTIONS(118), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(8), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(53), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(77), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(51), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [467] = 12,
    ACTIONS(69), 1,
      sym_lparen,
    ACTIONS(75), 1,
      sym_num,
    ACTIONS(79), 1,
      aux_sym_f64_token1,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      sym_string,
    ACTIONS(120), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(8), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(53), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(77), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(51), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [513] = 12,
    ACTIONS(69), 1,
      sym_lparen,
    ACTIONS(75), 1,
      sym_num,
    ACTIONS(79), 1,
      aux_sym_f64_token1,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      sym_string,
    ACTIONS(122), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(53), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(77), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(51), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [559] = 12,
    ACTIONS(69), 1,
      sym_lparen,
    ACTIONS(75), 1,
      sym_num,
    ACTIONS(79), 1,
      aux_sym_f64_token1,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      sym_string,
    ACTIONS(124), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(8), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(53), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(77), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(51), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [605] = 12,
    ACTIONS(69), 1,
      sym_lparen,
    ACTIONS(75), 1,
      sym_num,
    ACTIONS(79), 1,
      aux_sym_f64_token1,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      sym_string,
    ACTIONS(126), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(9), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(53), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(77), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(51), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [651] = 11,
    ACTIONS(69), 1,
      sym_lparen,
    ACTIONS(75), 1,
      sym_num,
    ACTIONS(79), 1,
      aux_sym_f64_token1,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(53), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(77), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(51), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [694] = 12,
    ACTIONS(69), 1,
      sym_lparen,
    ACTIONS(75), 1,
      sym_num,
    ACTIONS(79), 1,
      aux_sym_f64_token1,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      sym_string,
    STATE(8), 1,
      aux_sym_command_repeat2,
    STATE(56), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(53), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(77), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(51), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [739] = 11,
    ACTIONS(69), 1,
      sym_lparen,
    ACTIONS(75), 1,
      sym_num,
    ACTIONS(79), 1,
      aux_sym_f64_token1,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(53), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(77), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(51), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [782] = 11,
    ACTIONS(69), 1,
      sym_lparen,
    ACTIONS(75), 1,
      sym_num,
    ACTIONS(79), 1,
      aux_sym_f64_token1,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(53), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(77), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(51), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [825] = 11,
    ACTIONS(69), 1,
      sym_lparen,
    ACTIONS(75), 1,
      sym_num,
    ACTIONS(79), 1,
      aux_sym_f64_token1,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(13), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(53), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(77), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(51), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [868] = 12,
    ACTIONS(69), 1,
      sym_lparen,
    ACTIONS(75), 1,
      sym_num,
    ACTIONS(79), 1,
      aux_sym_f64_token1,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      sym_string,
    ACTIONS(128), 1,
      sym_rparen,
    STATE(198), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(53), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(77), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(51), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [913] = 12,
    ACTIONS(69), 1,
      sym_lparen,
    ACTIONS(75), 1,
      sym_num,
    ACTIONS(79), 1,
      aux_sym_f64_token1,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      sym_string,
    ACTIONS(130), 1,
      anon_sym_COLONvariants,
    STATE(203), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(53), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(77), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(51), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [958] = 11,
    ACTIONS(69), 1,
      sym_lparen,
    ACTIONS(75), 1,
      sym_num,
    ACTIONS(79), 1,
      aux_sym_f64_token1,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      sym_string,
    STATE(221), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(53), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(77), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(51), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1000] = 11,
    ACTIONS(69), 1,
      sym_lparen,
    ACTIONS(75), 1,
      sym_num,
    ACTIONS(79), 1,
      aux_sym_f64_token1,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      sym_string,
    STATE(249), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(53), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(77), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(51), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1042] = 11,
    ACTIONS(69), 1,
      sym_lparen,
    ACTIONS(75), 1,
      sym_num,
    ACTIONS(79), 1,
      aux_sym_f64_token1,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      sym_string,
    STATE(173), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(53), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(77), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(51), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1084] = 11,
    ACTIONS(69), 1,
      sym_lparen,
    ACTIONS(75), 1,
      sym_num,
    ACTIONS(79), 1,
      aux_sym_f64_token1,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      sym_string,
    STATE(253), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(53), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(77), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(51), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1126] = 11,
    ACTIONS(69), 1,
      sym_lparen,
    ACTIONS(75), 1,
      sym_num,
    ACTIONS(79), 1,
      aux_sym_f64_token1,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      sym_string,
    STATE(230), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(53), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(77), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(51), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1168] = 11,
    ACTIONS(69), 1,
      sym_lparen,
    ACTIONS(75), 1,
      sym_num,
    ACTIONS(79), 1,
      aux_sym_f64_token1,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      sym_string,
    STATE(198), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(53), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(77), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(51), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1210] = 11,
    ACTIONS(69), 1,
      sym_lparen,
    ACTIONS(75), 1,
      sym_num,
    ACTIONS(79), 1,
      aux_sym_f64_token1,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      sym_string,
    STATE(178), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(53), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(77), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(51), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1252] = 11,
    ACTIONS(69), 1,
      sym_lparen,
    ACTIONS(75), 1,
      sym_num,
    ACTIONS(79), 1,
      aux_sym_f64_token1,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      sym_string,
    STATE(238), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(53), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(77), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(51), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1294] = 11,
    ACTIONS(69), 1,
      sym_lparen,
    ACTIONS(75), 1,
      sym_num,
    ACTIONS(79), 1,
      aux_sym_f64_token1,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      sym_string,
    STATE(224), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(53), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(77), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(51), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1336] = 11,
    ACTIONS(69), 1,
      sym_lparen,
    ACTIONS(75), 1,
      sym_num,
    ACTIONS(79), 1,
      aux_sym_f64_token1,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      sym_string,
    STATE(235), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(53), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(77), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(51), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1378] = 11,
    ACTIONS(69), 1,
      sym_lparen,
    ACTIONS(75), 1,
      sym_num,
    ACTIONS(79), 1,
      aux_sym_f64_token1,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      sym_string,
    STATE(181), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(53), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(77), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(51), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1420] = 11,
    ACTIONS(69), 1,
      sym_lparen,
    ACTIONS(75), 1,
      sym_num,
    ACTIONS(79), 1,
      aux_sym_f64_token1,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      sym_string,
    STATE(27), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(53), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(77), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(51), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1462] = 11,
    ACTIONS(69), 1,
      sym_lparen,
    ACTIONS(75), 1,
      sym_num,
    ACTIONS(79), 1,
      aux_sym_f64_token1,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      sym_string,
    STATE(190), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(53), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(77), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(51), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1504] = 11,
    ACTIONS(69), 1,
      sym_lparen,
    ACTIONS(75), 1,
      sym_num,
    ACTIONS(79), 1,
      aux_sym_f64_token1,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      sym_string,
    STATE(20), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(53), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(77), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(51), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1546] = 11,
    ACTIONS(69), 1,
      sym_lparen,
    ACTIONS(75), 1,
      sym_num,
    ACTIONS(79), 1,
      aux_sym_f64_token1,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      sym_string,
    STATE(41), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(53), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(77), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(51), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1588] = 11,
    ACTIONS(69), 1,
      sym_lparen,
    ACTIONS(75), 1,
      sym_num,
    ACTIONS(79), 1,
      aux_sym_f64_token1,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      sym_string,
    STATE(252), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(53), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(77), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(51), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1630] = 11,
    ACTIONS(69), 1,
      sym_lparen,
    ACTIONS(75), 1,
      sym_num,
    ACTIONS(79), 1,
      aux_sym_f64_token1,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      sym_string,
    STATE(244), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(53), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(77), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(51), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1672] = 11,
    ACTIONS(69), 1,
      sym_lparen,
    ACTIONS(75), 1,
      sym_num,
    ACTIONS(79), 1,
      aux_sym_f64_token1,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      sym_string,
    STATE(262), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(53), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(77), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(51), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1714] = 11,
    ACTIONS(69), 1,
      sym_lparen,
    ACTIONS(75), 1,
      sym_num,
    ACTIONS(79), 1,
      aux_sym_f64_token1,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      sym_string,
    STATE(258), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(53), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(77), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(51), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1756] = 11,
    ACTIONS(69), 1,
      sym_lparen,
    ACTIONS(75), 1,
      sym_num,
    ACTIONS(79), 1,
      aux_sym_f64_token1,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      sym_string,
    STATE(154), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(53), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(77), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(51), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1798] = 11,
    ACTIONS(69), 1,
      sym_lparen,
    ACTIONS(75), 1,
      sym_num,
    ACTIONS(79), 1,
      aux_sym_f64_token1,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      sym_string,
    STATE(172), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(53), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(77), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(51), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1840] = 11,
    ACTIONS(69), 1,
      sym_lparen,
    ACTIONS(75), 1,
      sym_num,
    ACTIONS(79), 1,
      aux_sym_f64_token1,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      sym_string,
    STATE(241), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(53), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(77), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(51), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1882] = 11,
    ACTIONS(69), 1,
      sym_lparen,
    ACTIONS(75), 1,
      sym_num,
    ACTIONS(79), 1,
      aux_sym_f64_token1,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      sym_string,
    STATE(184), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(53), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(77), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(51), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1924] = 11,
    ACTIONS(69), 1,
      sym_lparen,
    ACTIONS(75), 1,
      sym_num,
    ACTIONS(79), 1,
      aux_sym_f64_token1,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      sym_string,
    STATE(192), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(53), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(77), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(51), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1966] = 11,
    ACTIONS(69), 1,
      sym_lparen,
    ACTIONS(75), 1,
      sym_num,
    ACTIONS(79), 1,
      aux_sym_f64_token1,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      sym_string,
    STATE(226), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(53), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(77), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(51), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [2008] = 11,
    ACTIONS(69), 1,
      sym_lparen,
    ACTIONS(75), 1,
      sym_num,
    ACTIONS(79), 1,
      aux_sym_f64_token1,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      sym_string,
    STATE(211), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(53), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(77), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(51), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [2050] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(134), 7,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
    ACTIONS(132), 8,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
      aux_sym_f64_token1,
      sym_string,
  [2074] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(138), 7,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
    ACTIONS(136), 8,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
      aux_sym_f64_token1,
      sym_string,
  [2098] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(140), 7,
      sym_lparen,
      sym_rparen,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(142), 7,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [2121] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(144), 7,
      sym_lparen,
      sym_rparen,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(146), 7,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [2144] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(148), 7,
      sym_lparen,
      sym_rparen,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(150), 7,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [2167] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(152), 7,
      sym_lparen,
      sym_rparen,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(154), 7,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [2190] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(156), 7,
      sym_lparen,
      sym_rparen,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(158), 7,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [2213] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(160), 7,
      sym_lparen,
      sym_rparen,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(162), 7,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [2236] = 4,
    ACTIONS(166), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(164), 3,
      sym_lparen,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(168), 7,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [2258] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(170), 3,
      sym_lparen,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(172), 7,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [2277] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(174), 3,
      sym_lparen,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(176), 7,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [2296] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(178), 3,
      sym_lparen,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(180), 7,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [2315] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(182), 3,
      sym_lparen,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(184), 7,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [2334] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(186), 3,
      sym_lparen,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(188), 7,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [2353] = 8,
    ACTIONS(124), 1,
      sym_rparen,
    ACTIONS(190), 1,
      anon_sym_COLONunextractable,
    ACTIONS(192), 1,
      anon_sym_COLONon_merge,
    ACTIONS(194), 1,
      anon_sym_COLONmerge,
    ACTIONS(196), 1,
      anon_sym_COLONdefault,
    ACTIONS(198), 1,
      anon_sym_COLONcost,
    STATE(80), 1,
      sym_cost,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2379] = 8,
    ACTIONS(9), 1,
      sym_lparen,
    ACTIONS(59), 1,
      anon_sym_delete,
    ACTIONS(61), 1,
      anon_sym_union,
    ACTIONS(63), 1,
      anon_sym_panic,
    ACTIONS(65), 1,
      anon_sym_extract,
    ACTIONS(67), 1,
      sym_ident,
    ACTIONS(200), 1,
      anon_sym_let,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2405] = 6,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
    ACTIONS(204), 1,
      sym_lparen,
    STATE(128), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(64), 2,
      sym_command,
      aux_sym_source_file_repeat1,
    STATE(127), 2,
      sym_top_parens,
      sym_nonletaction,
  [2427] = 6,
    ACTIONS(7), 1,
      sym_lparen,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
    STATE(128), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(64), 2,
      sym_command,
      aux_sym_source_file_repeat1,
    STATE(127), 2,
      sym_top_parens,
      sym_nonletaction,
  [2449] = 6,
    ACTIONS(209), 1,
      sym_lparen,
    ACTIONS(211), 1,
      sym_rparen,
    STATE(128), 1,
      sym_callexpr,
    STATE(168), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(71), 2,
      sym_action,
      aux_sym_command_repeat3,
  [2470] = 6,
    ACTIONS(209), 1,
      sym_lparen,
    ACTIONS(213), 1,
      sym_rparen,
    STATE(128), 1,
      sym_callexpr,
    STATE(168), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(73), 2,
      sym_action,
      aux_sym_command_repeat3,
  [2491] = 6,
    ACTIONS(209), 1,
      sym_lparen,
    ACTIONS(215), 1,
      sym_rparen,
    STATE(128), 1,
      sym_callexpr,
    STATE(168), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(71), 2,
      sym_action,
      aux_sym_command_repeat3,
  [2512] = 6,
    ACTIONS(209), 1,
      sym_lparen,
    ACTIONS(211), 1,
      sym_rparen,
    STATE(128), 1,
      sym_callexpr,
    STATE(168), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(68), 2,
      sym_action,
      aux_sym_command_repeat3,
  [2533] = 6,
    ACTIONS(209), 1,
      sym_lparen,
    ACTIONS(217), 1,
      sym_rparen,
    STATE(128), 1,
      sym_callexpr,
    STATE(168), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(71), 2,
      sym_action,
      aux_sym_command_repeat3,
  [2554] = 6,
    ACTIONS(219), 1,
      sym_lparen,
    ACTIONS(222), 1,
      sym_rparen,
    STATE(128), 1,
      sym_callexpr,
    STATE(168), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(71), 2,
      sym_action,
      aux_sym_command_repeat3,
  [2575] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(224), 6,
      sym_rparen,
      anon_sym_COLONunextractable,
      anon_sym_COLONon_merge,
      anon_sym_COLONmerge,
      anon_sym_COLONdefault,
      anon_sym_COLONcost,
  [2588] = 6,
    ACTIONS(209), 1,
      sym_lparen,
    ACTIONS(226), 1,
      sym_rparen,
    STATE(128), 1,
      sym_callexpr,
    STATE(168), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(71), 2,
      sym_action,
      aux_sym_command_repeat3,
  [2609] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(228), 6,
      sym_rparen,
      anon_sym_COLONunextractable,
      anon_sym_COLONon_merge,
      anon_sym_COLONmerge,
      anon_sym_COLONdefault,
      anon_sym_COLONcost,
  [2622] = 6,
    ACTIONS(209), 1,
      sym_lparen,
    ACTIONS(230), 1,
      sym_rparen,
    STATE(128), 1,
      sym_callexpr,
    STATE(168), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(77), 2,
      sym_action,
      aux_sym_command_repeat3,
  [2643] = 6,
    ACTIONS(209), 1,
      sym_lparen,
    ACTIONS(232), 1,
      sym_rparen,
    STATE(128), 1,
      sym_callexpr,
    STATE(168), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(70), 2,
      sym_action,
      aux_sym_command_repeat3,
  [2664] = 6,
    ACTIONS(209), 1,
      sym_lparen,
    ACTIONS(232), 1,
      sym_rparen,
    STATE(128), 1,
      sym_callexpr,
    STATE(168), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(71), 2,
      sym_action,
      aux_sym_command_repeat3,
  [2685] = 6,
    ACTIONS(209), 1,
      sym_lparen,
    ACTIONS(226), 1,
      sym_rparen,
    STATE(128), 1,
      sym_callexpr,
    STATE(168), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(66), 2,
      sym_action,
      aux_sym_command_repeat3,
  [2706] = 5,
    ACTIONS(85), 1,
      sym_rparen,
    ACTIONS(234), 1,
      sym_lparen,
    STATE(177), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(103), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [2724] = 6,
    ACTIONS(85), 1,
      sym_rparen,
    ACTIONS(236), 1,
      anon_sym_COLONunextractable,
    ACTIONS(238), 1,
      anon_sym_COLONon_merge,
    ACTIONS(240), 1,
      anon_sym_COLONmerge,
    ACTIONS(242), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2744] = 5,
    ACTIONS(234), 1,
      sym_lparen,
    ACTIONS(244), 1,
      sym_rparen,
    STATE(177), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(95), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [2762] = 5,
    ACTIONS(234), 1,
      sym_lparen,
    ACTIONS(246), 1,
      sym_rparen,
    STATE(177), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(93), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [2780] = 5,
    ACTIONS(234), 1,
      sym_lparen,
    ACTIONS(248), 1,
      sym_rparen,
    STATE(177), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(97), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [2798] = 5,
    ACTIONS(234), 1,
      sym_lparen,
    ACTIONS(250), 1,
      sym_rparen,
    STATE(177), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(97), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [2816] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(252), 5,
      sym_rparen,
      anon_sym_COLONunextractable,
      anon_sym_COLONon_merge,
      anon_sym_COLONmerge,
      anon_sym_COLONdefault,
  [2828] = 5,
    ACTIONS(234), 1,
      sym_lparen,
    ACTIONS(254), 1,
      sym_rparen,
    STATE(177), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(97), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [2846] = 5,
    ACTIONS(124), 1,
      sym_rparen,
    ACTIONS(234), 1,
      sym_lparen,
    STATE(177), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(100), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [2864] = 5,
    ACTIONS(234), 1,
      sym_lparen,
    ACTIONS(256), 1,
      sym_rparen,
    STATE(177), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(86), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [2882] = 5,
    ACTIONS(258), 1,
      sym_lparen,
    ACTIONS(260), 1,
      sym_rparen,
    ACTIONS(262), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(98), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [2900] = 5,
    ACTIONS(258), 1,
      sym_lparen,
    ACTIONS(262), 1,
      sym_ident,
    ACTIONS(264), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(92), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [2918] = 5,
    ACTIONS(250), 1,
      sym_rparen,
    ACTIONS(258), 1,
      sym_lparen,
    ACTIONS(262), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(98), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [2936] = 5,
    ACTIONS(246), 1,
      sym_rparen,
    ACTIONS(258), 1,
      sym_lparen,
    ACTIONS(262), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(98), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [2954] = 5,
    ACTIONS(234), 1,
      sym_lparen,
    ACTIONS(266), 1,
      sym_rparen,
    STATE(177), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(97), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [2972] = 5,
    ACTIONS(246), 1,
      sym_rparen,
    ACTIONS(258), 1,
      sym_lparen,
    ACTIONS(262), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(96), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [2990] = 5,
    ACTIONS(234), 1,
      sym_lparen,
    ACTIONS(268), 1,
      sym_rparen,
    STATE(177), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(97), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [3008] = 5,
    ACTIONS(258), 1,
      sym_lparen,
    ACTIONS(262), 1,
      sym_ident,
    ACTIONS(266), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(98), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [3026] = 5,
    ACTIONS(270), 1,
      sym_lparen,
    ACTIONS(273), 1,
      sym_rparen,
    STATE(177), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(97), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [3044] = 5,
    ACTIONS(275), 1,
      sym_lparen,
    ACTIONS(278), 1,
      sym_rparen,
    ACTIONS(280), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(98), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [3062] = 5,
    ACTIONS(234), 1,
      sym_lparen,
    ACTIONS(283), 1,
      sym_rparen,
    STATE(177), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(97), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [3080] = 5,
    ACTIONS(85), 1,
      sym_rparen,
    ACTIONS(234), 1,
      sym_lparen,
    STATE(177), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(97), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [3098] = 6,
    ACTIONS(198), 1,
      anon_sym_COLONcost,
    ACTIONS(285), 1,
      sym_rparen,
    ACTIONS(287), 1,
      sym_type,
    STATE(121), 1,
      aux_sym_command_repeat4,
    STATE(229), 1,
      sym_cost,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3118] = 5,
    ACTIONS(7), 1,
      sym_lparen,
    STATE(128), 1,
      sym_callexpr,
    STATE(203), 1,
      sym_command,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(127), 2,
      sym_top_parens,
      sym_nonletaction,
  [3136] = 5,
    ACTIONS(87), 1,
      sym_rparen,
    ACTIONS(234), 1,
      sym_lparen,
    STATE(177), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(97), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [3154] = 5,
    ACTIONS(258), 1,
      sym_lparen,
    ACTIONS(262), 1,
      sym_ident,
    ACTIONS(289), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(91), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [3172] = 5,
    ACTIONS(234), 1,
      sym_lparen,
    ACTIONS(289), 1,
      sym_rparen,
    STATE(177), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(84), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [3190] = 5,
    ACTIONS(234), 1,
      sym_lparen,
    ACTIONS(266), 1,
      sym_rparen,
    STATE(177), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(99), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [3208] = 5,
    ACTIONS(258), 1,
      sym_lparen,
    ACTIONS(262), 1,
      sym_ident,
    ACTIONS(291), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(110), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [3226] = 6,
    ACTIONS(198), 1,
      anon_sym_COLONcost,
    ACTIONS(293), 1,
      sym_rparen,
    ACTIONS(295), 1,
      sym_type,
    STATE(101), 1,
      aux_sym_command_repeat4,
    STATE(248), 1,
      sym_cost,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3246] = 5,
    ACTIONS(234), 1,
      sym_lparen,
    ACTIONS(297), 1,
      sym_rparen,
    STATE(177), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(112), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [3264] = 5,
    ACTIONS(258), 1,
      sym_lparen,
    ACTIONS(262), 1,
      sym_ident,
    ACTIONS(297), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(98), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [3282] = 5,
    ACTIONS(258), 1,
      sym_lparen,
    ACTIONS(262), 1,
      sym_ident,
    ACTIONS(297), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(89), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [3300] = 5,
    ACTIONS(234), 1,
      sym_lparen,
    ACTIONS(260), 1,
      sym_rparen,
    STATE(177), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(97), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [3318] = 5,
    ACTIONS(234), 1,
      sym_lparen,
    ACTIONS(260), 1,
      sym_rparen,
    STATE(177), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(83), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [3336] = 5,
    ACTIONS(87), 1,
      sym_rparen,
    ACTIONS(299), 1,
      anon_sym_COLONon_merge,
    ACTIONS(301), 1,
      anon_sym_COLONmerge,
    ACTIONS(303), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3353] = 4,
    ACTIONS(305), 1,
      sym_lparen,
    ACTIONS(308), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(115), 2,
      sym_identsort,
      aux_sym_command_repeat6,
  [3368] = 5,
    ACTIONS(85), 1,
      sym_rparen,
    ACTIONS(238), 1,
      anon_sym_COLONon_merge,
    ACTIONS(240), 1,
      anon_sym_COLONmerge,
    ACTIONS(242), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3385] = 4,
    ACTIONS(310), 1,
      sym_lparen,
    ACTIONS(313), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(117), 2,
      sym_variant,
      aux_sym_command_repeat1,
  [3400] = 4,
    ACTIONS(315), 1,
      anon_sym_run,
    ACTIONS(319), 1,
      anon_sym_repeat,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(317), 2,
      anon_sym_saturate,
      anon_sym_seq,
  [3415] = 4,
    ACTIONS(250), 1,
      sym_rparen,
    ACTIONS(321), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(124), 2,
      sym_variant,
      aux_sym_command_repeat1,
  [3430] = 4,
    ACTIONS(323), 1,
      sym_lparen,
    ACTIONS(325), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(115), 2,
      sym_identsort,
      aux_sym_command_repeat6,
  [3445] = 4,
    ACTIONS(329), 1,
      sym_type,
    STATE(121), 1,
      aux_sym_command_repeat4,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(327), 2,
      sym_rparen,
      anon_sym_COLONcost,
  [3460] = 4,
    ACTIONS(332), 1,
      anon_sym_run,
    ACTIONS(336), 1,
      anon_sym_repeat,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(334), 2,
      anon_sym_saturate,
      anon_sym_seq,
  [3475] = 4,
    ACTIONS(323), 1,
      sym_lparen,
    ACTIONS(338), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(120), 2,
      sym_identsort,
      aux_sym_command_repeat6,
  [3490] = 4,
    ACTIONS(124), 1,
      sym_rparen,
    ACTIONS(321), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(117), 2,
      sym_variant,
      aux_sym_command_repeat1,
  [3505] = 4,
    ACTIONS(340), 1,
      sym_rparen,
    ACTIONS(342), 1,
      anon_sym_COLONmerge,
    ACTIONS(344), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3519] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(346), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3529] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(348), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3539] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(350), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3549] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(352), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3559] = 4,
    ACTIONS(291), 1,
      sym_rparen,
    ACTIONS(354), 1,
      anon_sym_COLONuntil,
    ACTIONS(356), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3573] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(358), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3583] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(182), 3,
      sym_lparen,
      sym_rparen,
      sym_ident,
  [3593] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(170), 3,
      sym_lparen,
      sym_rparen,
      sym_ident,
  [3603] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(186), 3,
      sym_lparen,
      sym_rparen,
      sym_ident,
  [3613] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(178), 3,
      sym_lparen,
      sym_rparen,
      sym_ident,
  [3623] = 4,
    ACTIONS(287), 1,
      sym_type,
    ACTIONS(360), 1,
      sym_rparen,
    STATE(121), 1,
      aux_sym_command_repeat4,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3637] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(174), 3,
      sym_lparen,
      sym_rparen,
      sym_ident,
  [3647] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(362), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3657] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(364), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3667] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(366), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3677] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(368), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3687] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(370), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3697] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(372), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3707] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(374), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3717] = 4,
    ACTIONS(376), 1,
      sym_rparen,
    ACTIONS(378), 1,
      anon_sym_COLONmerge,
    ACTIONS(380), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3731] = 4,
    ACTIONS(382), 1,
      sym_lparen,
    ACTIONS(384), 1,
      sym_ident,
    STATE(39), 1,
      sym_schedule,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3745] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(386), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3755] = 4,
    ACTIONS(388), 1,
      sym_rparen,
    ACTIONS(390), 1,
      anon_sym_COLONmerge,
    ACTIONS(392), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3769] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(394), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3779] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(396), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3789] = 4,
    ACTIONS(340), 1,
      sym_rparen,
    ACTIONS(398), 1,
      anon_sym_COLONruleset,
    ACTIONS(400), 1,
      anon_sym_COLONname,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3803] = 4,
    ACTIONS(264), 1,
      sym_rparen,
    ACTIONS(402), 1,
      anon_sym_COLONuntil,
    ACTIONS(404), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3817] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(406), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3827] = 4,
    ACTIONS(124), 1,
      sym_rparen,
    ACTIONS(408), 1,
      anon_sym_COLONruleset,
    ACTIONS(410), 1,
      anon_sym_COLONwhen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3841] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(412), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3851] = 4,
    ACTIONS(414), 1,
      sym_rparen,
    ACTIONS(416), 1,
      anon_sym_COLONruleset,
    ACTIONS(418), 1,
      anon_sym_COLONname,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3865] = 4,
    ACTIONS(420), 1,
      sym_rparen,
    ACTIONS(422), 1,
      sym_type,
    STATE(161), 1,
      aux_sym_command_repeat4,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3879] = 4,
    ACTIONS(424), 1,
      sym_rparen,
    ACTIONS(426), 1,
      sym_type,
    STATE(136), 1,
      aux_sym_command_repeat4,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3893] = 4,
    ACTIONS(87), 1,
      sym_rparen,
    ACTIONS(428), 1,
      anon_sym_COLONruleset,
    ACTIONS(430), 1,
      anon_sym_COLONname,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3907] = 4,
    ACTIONS(414), 1,
      sym_rparen,
    ACTIONS(432), 1,
      anon_sym_COLONmerge,
    ACTIONS(434), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3921] = 4,
    ACTIONS(71), 1,
      sym_rparen,
    ACTIONS(287), 1,
      sym_type,
    STATE(121), 1,
      aux_sym_command_repeat4,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3935] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(436), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3945] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(438), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3955] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(440), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3965] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(442), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3975] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(444), 2,
      sym_lparen,
      sym_rparen,
  [3984] = 3,
    ACTIONS(250), 1,
      sym_rparen,
    ACTIONS(446), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3995] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(448), 2,
      sym_lparen,
      sym_rparen,
  [4004] = 3,
    ACTIONS(246), 1,
      sym_rparen,
    ACTIONS(450), 1,
      anon_sym_COLONuntil,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4015] = 3,
    ACTIONS(297), 1,
      sym_rparen,
    ACTIONS(452), 1,
      anon_sym_COLONuntil,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4026] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(454), 2,
      sym_lparen,
      sym_rparen,
  [4035] = 3,
    ACTIONS(456), 1,
      sym_rparen,
    ACTIONS(458), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4046] = 3,
    ACTIONS(460), 1,
      sym_rparen,
    ACTIONS(462), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4057] = 3,
    ACTIONS(464), 1,
      sym_unum,
    ACTIONS(466), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4068] = 3,
    ACTIONS(376), 1,
      sym_rparen,
    ACTIONS(468), 1,
      anon_sym_COLONname,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4079] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(470), 2,
      sym_lparen,
      sym_rparen,
  [4088] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(472), 2,
      sym_lparen,
      sym_rparen,
  [4097] = 3,
    ACTIONS(376), 1,
      sym_rparen,
    ACTIONS(380), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4108] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(474), 2,
      sym_lparen,
      sym_rparen,
  [4117] = 3,
    ACTIONS(388), 1,
      sym_rparen,
    ACTIONS(476), 1,
      anon_sym_COLONname,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4128] = 3,
    ACTIONS(388), 1,
      sym_rparen,
    ACTIONS(392), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4139] = 3,
    ACTIONS(67), 1,
      sym_ident,
    ACTIONS(478), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4150] = 3,
    ACTIONS(289), 1,
      sym_rparen,
    ACTIONS(480), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4161] = 3,
    ACTIONS(414), 1,
      sym_rparen,
    ACTIONS(434), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4172] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(482), 2,
      sym_lparen,
      sym_rparen,
  [4181] = 3,
    ACTIONS(250), 1,
      sym_rparen,
    ACTIONS(484), 1,
      anon_sym_COLONuntil,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4192] = 3,
    ACTIONS(289), 1,
      sym_rparen,
    ACTIONS(480), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4203] = 3,
    ACTIONS(486), 1,
      sym_rparen,
    ACTIONS(488), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4214] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(490), 2,
      sym_lparen,
      sym_rparen,
  [4223] = 3,
    ACTIONS(87), 1,
      sym_rparen,
    ACTIONS(303), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4234] = 3,
    ACTIONS(340), 1,
      sym_rparen,
    ACTIONS(492), 1,
      anon_sym_COLONruleset,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4245] = 3,
    ACTIONS(340), 1,
      sym_rparen,
    ACTIONS(344), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4256] = 3,
    ACTIONS(124), 1,
      sym_rparen,
    ACTIONS(494), 1,
      anon_sym_COLONuntil,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4267] = 3,
    ACTIONS(414), 1,
      sym_rparen,
    ACTIONS(496), 1,
      anon_sym_COLONruleset,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4278] = 3,
    ACTIONS(340), 1,
      sym_rparen,
    ACTIONS(400), 1,
      anon_sym_COLONname,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4289] = 3,
    ACTIONS(498), 1,
      sym_lparen,
    STATE(62), 1,
      sym_schema,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4300] = 2,
    ACTIONS(500), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4308] = 2,
    ACTIONS(502), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4316] = 2,
    ACTIONS(504), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4324] = 2,
    ACTIONS(506), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4332] = 2,
    ACTIONS(508), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4340] = 2,
    ACTIONS(510), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4348] = 2,
    ACTIONS(250), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4356] = 2,
    ACTIONS(512), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4364] = 2,
    ACTIONS(514), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4372] = 2,
    ACTIONS(516), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4380] = 2,
    ACTIONS(518), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4388] = 2,
    ACTIONS(520), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4396] = 2,
    ACTIONS(522), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4404] = 2,
    ACTIONS(480), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4412] = 2,
    ACTIONS(340), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4420] = 2,
    ACTIONS(524), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4428] = 2,
    ACTIONS(526), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4436] = 2,
    ACTIONS(528), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4444] = 2,
    ACTIONS(530), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4452] = 2,
    ACTIONS(530), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4460] = 2,
    ACTIONS(532), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4468] = 2,
    ACTIONS(534), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4476] = 2,
    ACTIONS(536), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4484] = 2,
    ACTIONS(538), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4492] = 2,
    ACTIONS(388), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4500] = 2,
    ACTIONS(540), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4508] = 2,
    ACTIONS(289), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4516] = 2,
    ACTIONS(542), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4524] = 2,
    ACTIONS(544), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4532] = 2,
    ACTIONS(414), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4540] = 2,
    ACTIONS(546), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4548] = 2,
    ACTIONS(544), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4556] = 2,
    ACTIONS(548), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4564] = 2,
    ACTIONS(376), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4572] = 2,
    ACTIONS(550), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4580] = 2,
    ACTIONS(552), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4588] = 2,
    ACTIONS(554), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4596] = 2,
    ACTIONS(556), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4604] = 2,
    ACTIONS(558), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4612] = 2,
    ACTIONS(560), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4620] = 2,
    ACTIONS(562), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4628] = 2,
    ACTIONS(87), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4636] = 2,
    ACTIONS(514), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4644] = 2,
    ACTIONS(514), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4652] = 2,
    ACTIONS(460), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4660] = 2,
    ACTIONS(564), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4668] = 2,
    ACTIONS(566), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4676] = 2,
    ACTIONS(456), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4684] = 2,
    ACTIONS(568), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4692] = 2,
    ACTIONS(480), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4700] = 2,
    ACTIONS(570), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4708] = 2,
    ACTIONS(285), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4716] = 2,
    ACTIONS(572), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4724] = 2,
    ACTIONS(574), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4732] = 2,
    ACTIONS(128), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4740] = 2,
    ACTIONS(576), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4748] = 2,
    ACTIONS(578), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4756] = 2,
    ACTIONS(580), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4764] = 2,
    ACTIONS(582), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4772] = 2,
    ACTIONS(584), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4780] = 2,
    ACTIONS(586), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4788] = 2,
    ACTIONS(85), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4796] = 2,
    ACTIONS(588), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4804] = 2,
    ACTIONS(590), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4812] = 2,
    ACTIONS(592), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4820] = 2,
    ACTIONS(124), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4828] = 2,
    ACTIONS(594), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4836] = 2,
    ACTIONS(596), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4844] = 2,
    ACTIONS(598), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4852] = 2,
    ACTIONS(600), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4860] = 2,
    ACTIONS(602), 1,
      anon_sym_set,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4868] = 2,
    ACTIONS(604), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4876] = 2,
    ACTIONS(71), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4884] = 2,
    ACTIONS(606), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 99,
  [SMALL_STATE(4)] = 145,
  [SMALL_STATE(5)] = 191,
  [SMALL_STATE(6)] = 237,
  [SMALL_STATE(7)] = 283,
  [SMALL_STATE(8)] = 329,
  [SMALL_STATE(9)] = 375,
  [SMALL_STATE(10)] = 421,
  [SMALL_STATE(11)] = 467,
  [SMALL_STATE(12)] = 513,
  [SMALL_STATE(13)] = 559,
  [SMALL_STATE(14)] = 605,
  [SMALL_STATE(15)] = 651,
  [SMALL_STATE(16)] = 694,
  [SMALL_STATE(17)] = 739,
  [SMALL_STATE(18)] = 782,
  [SMALL_STATE(19)] = 825,
  [SMALL_STATE(20)] = 868,
  [SMALL_STATE(21)] = 913,
  [SMALL_STATE(22)] = 958,
  [SMALL_STATE(23)] = 1000,
  [SMALL_STATE(24)] = 1042,
  [SMALL_STATE(25)] = 1084,
  [SMALL_STATE(26)] = 1126,
  [SMALL_STATE(27)] = 1168,
  [SMALL_STATE(28)] = 1210,
  [SMALL_STATE(29)] = 1252,
  [SMALL_STATE(30)] = 1294,
  [SMALL_STATE(31)] = 1336,
  [SMALL_STATE(32)] = 1378,
  [SMALL_STATE(33)] = 1420,
  [SMALL_STATE(34)] = 1462,
  [SMALL_STATE(35)] = 1504,
  [SMALL_STATE(36)] = 1546,
  [SMALL_STATE(37)] = 1588,
  [SMALL_STATE(38)] = 1630,
  [SMALL_STATE(39)] = 1672,
  [SMALL_STATE(40)] = 1714,
  [SMALL_STATE(41)] = 1756,
  [SMALL_STATE(42)] = 1798,
  [SMALL_STATE(43)] = 1840,
  [SMALL_STATE(44)] = 1882,
  [SMALL_STATE(45)] = 1924,
  [SMALL_STATE(46)] = 1966,
  [SMALL_STATE(47)] = 2008,
  [SMALL_STATE(48)] = 2050,
  [SMALL_STATE(49)] = 2074,
  [SMALL_STATE(50)] = 2098,
  [SMALL_STATE(51)] = 2121,
  [SMALL_STATE(52)] = 2144,
  [SMALL_STATE(53)] = 2167,
  [SMALL_STATE(54)] = 2190,
  [SMALL_STATE(55)] = 2213,
  [SMALL_STATE(56)] = 2236,
  [SMALL_STATE(57)] = 2258,
  [SMALL_STATE(58)] = 2277,
  [SMALL_STATE(59)] = 2296,
  [SMALL_STATE(60)] = 2315,
  [SMALL_STATE(61)] = 2334,
  [SMALL_STATE(62)] = 2353,
  [SMALL_STATE(63)] = 2379,
  [SMALL_STATE(64)] = 2405,
  [SMALL_STATE(65)] = 2427,
  [SMALL_STATE(66)] = 2449,
  [SMALL_STATE(67)] = 2470,
  [SMALL_STATE(68)] = 2491,
  [SMALL_STATE(69)] = 2512,
  [SMALL_STATE(70)] = 2533,
  [SMALL_STATE(71)] = 2554,
  [SMALL_STATE(72)] = 2575,
  [SMALL_STATE(73)] = 2588,
  [SMALL_STATE(74)] = 2609,
  [SMALL_STATE(75)] = 2622,
  [SMALL_STATE(76)] = 2643,
  [SMALL_STATE(77)] = 2664,
  [SMALL_STATE(78)] = 2685,
  [SMALL_STATE(79)] = 2706,
  [SMALL_STATE(80)] = 2724,
  [SMALL_STATE(81)] = 2744,
  [SMALL_STATE(82)] = 2762,
  [SMALL_STATE(83)] = 2780,
  [SMALL_STATE(84)] = 2798,
  [SMALL_STATE(85)] = 2816,
  [SMALL_STATE(86)] = 2828,
  [SMALL_STATE(87)] = 2846,
  [SMALL_STATE(88)] = 2864,
  [SMALL_STATE(89)] = 2882,
  [SMALL_STATE(90)] = 2900,
  [SMALL_STATE(91)] = 2918,
  [SMALL_STATE(92)] = 2936,
  [SMALL_STATE(93)] = 2954,
  [SMALL_STATE(94)] = 2972,
  [SMALL_STATE(95)] = 2990,
  [SMALL_STATE(96)] = 3008,
  [SMALL_STATE(97)] = 3026,
  [SMALL_STATE(98)] = 3044,
  [SMALL_STATE(99)] = 3062,
  [SMALL_STATE(100)] = 3080,
  [SMALL_STATE(101)] = 3098,
  [SMALL_STATE(102)] = 3118,
  [SMALL_STATE(103)] = 3136,
  [SMALL_STATE(104)] = 3154,
  [SMALL_STATE(105)] = 3172,
  [SMALL_STATE(106)] = 3190,
  [SMALL_STATE(107)] = 3208,
  [SMALL_STATE(108)] = 3226,
  [SMALL_STATE(109)] = 3246,
  [SMALL_STATE(110)] = 3264,
  [SMALL_STATE(111)] = 3282,
  [SMALL_STATE(112)] = 3300,
  [SMALL_STATE(113)] = 3318,
  [SMALL_STATE(114)] = 3336,
  [SMALL_STATE(115)] = 3353,
  [SMALL_STATE(116)] = 3368,
  [SMALL_STATE(117)] = 3385,
  [SMALL_STATE(118)] = 3400,
  [SMALL_STATE(119)] = 3415,
  [SMALL_STATE(120)] = 3430,
  [SMALL_STATE(121)] = 3445,
  [SMALL_STATE(122)] = 3460,
  [SMALL_STATE(123)] = 3475,
  [SMALL_STATE(124)] = 3490,
  [SMALL_STATE(125)] = 3505,
  [SMALL_STATE(126)] = 3519,
  [SMALL_STATE(127)] = 3529,
  [SMALL_STATE(128)] = 3539,
  [SMALL_STATE(129)] = 3549,
  [SMALL_STATE(130)] = 3559,
  [SMALL_STATE(131)] = 3573,
  [SMALL_STATE(132)] = 3583,
  [SMALL_STATE(133)] = 3593,
  [SMALL_STATE(134)] = 3603,
  [SMALL_STATE(135)] = 3613,
  [SMALL_STATE(136)] = 3623,
  [SMALL_STATE(137)] = 3637,
  [SMALL_STATE(138)] = 3647,
  [SMALL_STATE(139)] = 3657,
  [SMALL_STATE(140)] = 3667,
  [SMALL_STATE(141)] = 3677,
  [SMALL_STATE(142)] = 3687,
  [SMALL_STATE(143)] = 3697,
  [SMALL_STATE(144)] = 3707,
  [SMALL_STATE(145)] = 3717,
  [SMALL_STATE(146)] = 3731,
  [SMALL_STATE(147)] = 3745,
  [SMALL_STATE(148)] = 3755,
  [SMALL_STATE(149)] = 3769,
  [SMALL_STATE(150)] = 3779,
  [SMALL_STATE(151)] = 3789,
  [SMALL_STATE(152)] = 3803,
  [SMALL_STATE(153)] = 3817,
  [SMALL_STATE(154)] = 3827,
  [SMALL_STATE(155)] = 3841,
  [SMALL_STATE(156)] = 3851,
  [SMALL_STATE(157)] = 3865,
  [SMALL_STATE(158)] = 3879,
  [SMALL_STATE(159)] = 3893,
  [SMALL_STATE(160)] = 3907,
  [SMALL_STATE(161)] = 3921,
  [SMALL_STATE(162)] = 3935,
  [SMALL_STATE(163)] = 3945,
  [SMALL_STATE(164)] = 3955,
  [SMALL_STATE(165)] = 3965,
  [SMALL_STATE(166)] = 3975,
  [SMALL_STATE(167)] = 3984,
  [SMALL_STATE(168)] = 3995,
  [SMALL_STATE(169)] = 4004,
  [SMALL_STATE(170)] = 4015,
  [SMALL_STATE(171)] = 4026,
  [SMALL_STATE(172)] = 4035,
  [SMALL_STATE(173)] = 4046,
  [SMALL_STATE(174)] = 4057,
  [SMALL_STATE(175)] = 4068,
  [SMALL_STATE(176)] = 4079,
  [SMALL_STATE(177)] = 4088,
  [SMALL_STATE(178)] = 4097,
  [SMALL_STATE(179)] = 4108,
  [SMALL_STATE(180)] = 4117,
  [SMALL_STATE(181)] = 4128,
  [SMALL_STATE(182)] = 4139,
  [SMALL_STATE(183)] = 4150,
  [SMALL_STATE(184)] = 4161,
  [SMALL_STATE(185)] = 4172,
  [SMALL_STATE(186)] = 4181,
  [SMALL_STATE(187)] = 4192,
  [SMALL_STATE(188)] = 4203,
  [SMALL_STATE(189)] = 4214,
  [SMALL_STATE(190)] = 4223,
  [SMALL_STATE(191)] = 4234,
  [SMALL_STATE(192)] = 4245,
  [SMALL_STATE(193)] = 4256,
  [SMALL_STATE(194)] = 4267,
  [SMALL_STATE(195)] = 4278,
  [SMALL_STATE(196)] = 4289,
  [SMALL_STATE(197)] = 4300,
  [SMALL_STATE(198)] = 4308,
  [SMALL_STATE(199)] = 4316,
  [SMALL_STATE(200)] = 4324,
  [SMALL_STATE(201)] = 4332,
  [SMALL_STATE(202)] = 4340,
  [SMALL_STATE(203)] = 4348,
  [SMALL_STATE(204)] = 4356,
  [SMALL_STATE(205)] = 4364,
  [SMALL_STATE(206)] = 4372,
  [SMALL_STATE(207)] = 4380,
  [SMALL_STATE(208)] = 4388,
  [SMALL_STATE(209)] = 4396,
  [SMALL_STATE(210)] = 4404,
  [SMALL_STATE(211)] = 4412,
  [SMALL_STATE(212)] = 4420,
  [SMALL_STATE(213)] = 4428,
  [SMALL_STATE(214)] = 4436,
  [SMALL_STATE(215)] = 4444,
  [SMALL_STATE(216)] = 4452,
  [SMALL_STATE(217)] = 4460,
  [SMALL_STATE(218)] = 4468,
  [SMALL_STATE(219)] = 4476,
  [SMALL_STATE(220)] = 4484,
  [SMALL_STATE(221)] = 4492,
  [SMALL_STATE(222)] = 4500,
  [SMALL_STATE(223)] = 4508,
  [SMALL_STATE(224)] = 4516,
  [SMALL_STATE(225)] = 4524,
  [SMALL_STATE(226)] = 4532,
  [SMALL_STATE(227)] = 4540,
  [SMALL_STATE(228)] = 4548,
  [SMALL_STATE(229)] = 4556,
  [SMALL_STATE(230)] = 4564,
  [SMALL_STATE(231)] = 4572,
  [SMALL_STATE(232)] = 4580,
  [SMALL_STATE(233)] = 4588,
  [SMALL_STATE(234)] = 4596,
  [SMALL_STATE(235)] = 4604,
  [SMALL_STATE(236)] = 4612,
  [SMALL_STATE(237)] = 4620,
  [SMALL_STATE(238)] = 4628,
  [SMALL_STATE(239)] = 4636,
  [SMALL_STATE(240)] = 4644,
  [SMALL_STATE(241)] = 4652,
  [SMALL_STATE(242)] = 4660,
  [SMALL_STATE(243)] = 4668,
  [SMALL_STATE(244)] = 4676,
  [SMALL_STATE(245)] = 4684,
  [SMALL_STATE(246)] = 4692,
  [SMALL_STATE(247)] = 4700,
  [SMALL_STATE(248)] = 4708,
  [SMALL_STATE(249)] = 4716,
  [SMALL_STATE(250)] = 4724,
  [SMALL_STATE(251)] = 4732,
  [SMALL_STATE(252)] = 4740,
  [SMALL_STATE(253)] = 4748,
  [SMALL_STATE(254)] = 4756,
  [SMALL_STATE(255)] = 4764,
  [SMALL_STATE(256)] = 4772,
  [SMALL_STATE(257)] = 4780,
  [SMALL_STATE(258)] = 4788,
  [SMALL_STATE(259)] = 4796,
  [SMALL_STATE(260)] = 4804,
  [SMALL_STATE(261)] = 4812,
  [SMALL_STATE(262)] = 4820,
  [SMALL_STATE(263)] = 4828,
  [SMALL_STATE(264)] = 4836,
  [SMALL_STATE(265)] = 4844,
  [SMALL_STATE(266)] = 4852,
  [SMALL_STATE(267)] = 4860,
  [SMALL_STATE(268)] = 4868,
  [SMALL_STATE(269)] = 4876,
  [SMALL_STATE(270)] = 4884,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2, 0, 0), SHIFT_REPEAT(188),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2, 0, 0),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2, 0, 0), SHIFT_REPEAT(50),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2, 0, 0), SHIFT_REPEAT(51),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2, 0, 0), SHIFT_REPEAT(52),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2, 0, 0), SHIFT_REPEAT(52),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2, 0, 0), SHIFT_REPEAT(53),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2, 0, 0), SHIFT_REPEAT(54),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callexpr, 3, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callexpr, 3, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callexpr, 4, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callexpr, 4, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_f64, 1, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_f64, 1, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symstring, 1, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symstring, 1, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 2, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 2, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 1, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 1, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 5, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 5, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 1, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 1, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 3, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 3, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 6, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 6, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 4, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 4, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat3, 2, 0, 0), SHIFT_REPEAT(63),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat3, 2, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema, 3, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema, 4, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost, 2, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat5, 2, 0, 0), SHIFT_REPEAT(182),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat5, 2, 0, 0),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat7, 2, 0, 0), SHIFT_REPEAT(118),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat7, 2, 0, 0),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat7, 2, 0, 0), SHIFT_REPEAT(137),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat6, 2, 0, 0), SHIFT_REPEAT(233),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat6, 2, 0, 0),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0), SHIFT_REPEAT(266),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat4, 2, 0, 0),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat4, 2, 0, 0), SHIFT_REPEAT(121),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 7, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, 0, 0),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 1, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top_parens, 2, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 4, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 15, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 5, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 14, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 5, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 13, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 12, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 11, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 10, 0, 0),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 9, 0, 0),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 6, 0, 0),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 8, 0, 0),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 8, 0, 0),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4, 0, 0),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 7, 0, 0),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, 0, 0),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 6, 0, 0),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identsort, 4, 0, 0),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1, 0, 0),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 3, 0, 0),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 5, 0, 0),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 1, 0, 0),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 4, 0, 0),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 5, 0, 0),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 5, 0, 0),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [568] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_egglog(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
