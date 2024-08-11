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
#define STATE_COUNT 281
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 93
#define ALIAS_COUNT 0
#define TOKEN_COUNT 67
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
  anon_sym_COLONsubsume = 21,
  anon_sym_COLONwhen = 22,
  anon_sym_birewrite = 23,
  anon_sym_let = 24,
  anon_sym_run = 25,
  anon_sym_COLONuntil = 26,
  anon_sym_simplify = 27,
  anon_sym_calc = 28,
  anon_sym_query_DASHextract = 29,
  anon_sym_COLONvariants = 30,
  anon_sym_check = 31,
  anon_sym_check_DASHproof = 32,
  anon_sym_run_DASHschedule = 33,
  anon_sym_print_DASHstats = 34,
  anon_sym_push = 35,
  anon_sym_pop = 36,
  anon_sym_print_DASHfunction = 37,
  anon_sym_print_DASHsize = 38,
  anon_sym_input = 39,
  anon_sym_output = 40,
  anon_sym_fail = 41,
  anon_sym_include = 42,
  anon_sym_saturate = 43,
  anon_sym_seq = 44,
  anon_sym_repeat = 45,
  anon_sym_COLONcost = 46,
  anon_sym_set = 47,
  anon_sym_delete = 48,
  anon_sym_subsume = 49,
  anon_sym_union = 50,
  anon_sym_panic = 51,
  anon_sym_extract = 52,
  anon_sym_LBRACK = 53,
  anon_sym_RBRACK = 54,
  anon_sym_EQ = 55,
  sym_type = 56,
  anon_sym_true = 57,
  anon_sym_false = 58,
  sym_num = 59,
  sym_unum = 60,
  anon_sym_NaN = 61,
  aux_sym_f64_token1 = 62,
  anon_sym_inf = 63,
  anon_sym_DASHinf = 64,
  sym_ident = 65,
  sym_string = 66,
  sym_source_file = 67,
  sym_top_parens = 68,
  sym_command = 69,
  sym_schedule = 70,
  sym_cost = 71,
  sym_nonletaction = 72,
  sym_action = 73,
  sym_fact = 74,
  sym_schema = 75,
  sym_expr = 76,
  sym_literal = 77,
  sym_callexpr = 78,
  sym_variant = 79,
  sym_identsort = 80,
  sym_unit = 81,
  sym_bool = 82,
  sym_f64 = 83,
  sym_symstring = 84,
  aux_sym_source_file_repeat1 = 85,
  aux_sym_command_repeat1 = 86,
  aux_sym_command_repeat2 = 87,
  aux_sym_command_repeat3 = 88,
  aux_sym_command_repeat4 = 89,
  aux_sym_command_repeat5 = 90,
  aux_sym_command_repeat6 = 91,
  aux_sym_command_repeat7 = 92,
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
  [anon_sym_COLONsubsume] = ":subsume",
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
  [anon_sym_subsume] = "subsume",
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
  [anon_sym_COLONsubsume] = anon_sym_COLONsubsume,
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
  [anon_sym_subsume] = anon_sym_subsume,
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
  [anon_sym_COLONsubsume] = {
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
  [anon_sym_subsume] = {
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
  [83] = 82,
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
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 100,
  [104] = 81,
  [105] = 96,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 94,
  [114] = 112,
  [115] = 115,
  [116] = 111,
  [117] = 90,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 126,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 133,
  [135] = 59,
  [136] = 63,
  [137] = 62,
  [138] = 138,
  [139] = 139,
  [140] = 60,
  [141] = 141,
  [142] = 61,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
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
  [170] = 170,
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
  [185] = 180,
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
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 269,
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
      if (eof) ADVANCE(246);
      ADVANCE_MAP(
        '"', 1,
        '(', 249,
        ')', 250,
        ',', 251,
        '-', 103,
        ':', 38,
        ';', 247,
        '=', 333,
        'N', 13,
        '[', 331,
        ']', 332,
        'b', 101,
        'c', 14,
        'd', 15,
        'e', 235,
        'f', 16,
        'i', 133,
        'l', 77,
        'o', 221,
        'p', 27,
        'q', 228,
        'r', 54,
        's', 20,
        't', 176,
        'u', 143,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(341);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '+') ADVANCE(4);
      if (lookahead == '-') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(346);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(94);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(346);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(89);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(37);
      if (lookahead == ';') ADVANCE(247);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(250);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(248);
      if ((set_contains(sym_type_character_set_1, 10, lookahead)) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(336);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(230);
      if (lookahead == ';') ADVANCE(247);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(249);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(250);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 8:
      if (lookahead == ';') ADVANCE(247);
      if (lookahead == '=') ADVANCE(334);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(248);
      if ((set_contains(sym_type_character_set_1, 10, lookahead)) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        ';', 247,
        'd', 400,
        'e', 513,
        'l', 397,
        'p', 364,
        's', 502,
        'u', 446,
        '(', 249,
        '[', 249,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(248);
      if ((set_contains(sym_type_character_set_1, 10, lookahead)) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 10:
      if (lookahead == ';') ADVANCE(247);
      if (lookahead == 'r') ADVANCE(86);
      if (lookahead == 's') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(248);
      END_STATE();
    case 11:
      if (lookahead == 'N') ADVANCE(343);
      END_STATE();
    case 12:
      if (lookahead == '_') ADVANCE(132);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(116);
      if (lookahead == 'h') ADVANCE(75);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(203);
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(105);
      if (lookahead == 'u') ADVANCE(144);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(205);
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead == 'i') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(170);
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(205);
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(223);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(202);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(145);
      if (lookahead == 'o') ADVANCE(157);
      if (lookahead == 'r') ADVANCE(107);
      if (lookahead == 'u') ADVANCE(182);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(216);
      END_STATE();
    case 34:
      if (lookahead == 'b') ADVANCE(184);
      END_STATE();
    case 35:
      if (lookahead == 'b') ADVANCE(126);
      END_STATE();
    case 36:
      if (lookahead == 'b') ADVANCE(188);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(150);
      END_STATE();
    case 38:
      ADVANCE_MAP(
        'c', 150,
        'd', 74,
        'm', 78,
        'n', 17,
        'o', 135,
        'r', 220,
        's', 233,
        'u', 136,
        'v', 19,
        'w', 98,
      );
      END_STATE();
    case 39:
      ADVANCE_MAP(
        'c', 150,
        'd', 74,
        'm', 78,
        'n', 17,
        'o', 135,
        'r', 220,
        's', 233,
        'u', 136,
        'w', 98,
      );
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(287);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(327);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(119);
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(120);
      if (lookahead == 'f') ADVANCE(347);
      if (lookahead == 'p') ADVANCE(225);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(214);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(196);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(200);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(99);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(209);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(217);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(74);
      if (lookahead == 'r') ADVANCE(220);
      if (lookahead == 's') ADVANCE(233);
      if (lookahead == 'v') ADVANCE(19);
      if (lookahead == 'w') ADVANCE(98);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(63);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(227);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(314);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(323);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == 'u') ADVANCE(142);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(236);
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 90:
      if (lookahead == 'f') ADVANCE(349);
      END_STATE();
    case 91:
      if (lookahead == 'f') ADVANCE(294);
      END_STATE();
    case 92:
      if (lookahead == 'f') ADVANCE(238);
      END_STATE();
    case 93:
      if (lookahead == 'f') ADVANCE(23);
      END_STATE();
    case 94:
      if (lookahead == 'f') ADVANCE(232);
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 95:
      if (lookahead == 'g') ADVANCE(60);
      END_STATE();
    case 96:
      if (lookahead == 'g') ADVANCE(69);
      END_STATE();
    case 97:
      if (lookahead == 'h') ADVANCE(300);
      END_STATE();
    case 98:
      if (lookahead == 'h') ADVANCE(81);
      END_STATE();
    case 99:
      if (lookahead == 'h') ADVANCE(76);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(241);
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(341);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(117);
      if (lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 115:
      if (lookahead == 'k') ADVANCE(292);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(312);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(284);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(219);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(56);
      if (lookahead == 'n') ADVANCE(283);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(33);
      if (lookahead == 'p') ADVANCE(87);
      if (lookahead == 'w') ADVANCE(172);
      END_STATE();
    case 128:
      if (lookahead == 'm') ADVANCE(158);
      END_STATE();
    case 129:
      if (lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 130:
      if (lookahead == 'm') ADVANCE(65);
      END_STATE();
    case 131:
      if (lookahead == 'm') ADVANCE(66);
      END_STATE();
    case 132:
      if (lookahead == 'm') ADVANCE(85);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(276);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(325);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(257);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(265);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(304);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(281);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(207);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 149:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 150:
      if (lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 151:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 152:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 153:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 154:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 155:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 156:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 157:
      if (lookahead == 'p') ADVANCE(302);
      END_STATE();
    case 158:
      if (lookahead == 'p') ADVANCE(121);
      END_STATE();
    case 159:
      if (lookahead == 'p') ADVANCE(87);
      END_STATE();
    case 160:
      if (lookahead == 'p') ADVANCE(167);
      END_STATE();
    case 161:
      if (lookahead == 'p') ADVANCE(67);
      END_STATE();
    case 162:
      if (lookahead == 'p') ADVANCE(226);
      END_STATE();
    case 163:
      if (lookahead == 'q') ADVANCE(317);
      END_STATE();
    case 164:
      if (lookahead == 'q') ADVANCE(317);
      if (lookahead == 't') ADVANCE(320);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 176:
      if (lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 177:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 178:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 179:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 180:
      if (lookahead == 's') ADVANCE(291);
      END_STATE();
    case 181:
      if (lookahead == 's') ADVANCE(298);
      END_STATE();
    case 182:
      if (lookahead == 's') ADVANCE(97);
      END_STATE();
    case 183:
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 184:
      if (lookahead == 's') ADVANCE(229);
      END_STATE();
    case 185:
      if (lookahead == 's') ADVANCE(191);
      END_STATE();
    case 186:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 187:
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 188:
      if (lookahead == 's') ADVANCE(231);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(279);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(319);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(308);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(3);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(310);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(318);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(329);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(267);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(271);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(289);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(240);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(180);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 219:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 220:
      if (lookahead == 'u') ADVANCE(123);
      END_STATE();
    case 221:
      if (lookahead == 'u') ADVANCE(201);
      END_STATE();
    case 222:
      if (lookahead == 'u') ADVANCE(177);
      END_STATE();
    case 223:
      if (lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 224:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 225:
      if (lookahead == 'u') ADVANCE(192);
      END_STATE();
    case 226:
      if (lookahead == 'u') ADVANCE(194);
      END_STATE();
    case 227:
      if (lookahead == 'u') ADVANCE(125);
      END_STATE();
    case 228:
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 229:
      if (lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 230:
      if (lookahead == 'u') ADVANCE(148);
      END_STATE();
    case 231:
      if (lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 232:
      if (lookahead == 'u') ADVANCE(149);
      END_STATE();
    case 233:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 234:
      if (lookahead == 'w') ADVANCE(179);
      END_STATE();
    case 235:
      if (lookahead == 'x') ADVANCE(206);
      END_STATE();
    case 236:
      if (lookahead == 'x') ADVANCE(215);
      END_STATE();
    case 237:
      if (lookahead == 'x') ADVANCE(218);
      END_STATE();
    case 238:
      if (lookahead == 'y') ADVANCE(285);
      END_STATE();
    case 239:
      if (lookahead == 'y') ADVANCE(5);
      END_STATE();
    case 240:
      if (lookahead == 'y') ADVANCE(161);
      END_STATE();
    case 241:
      if (lookahead == 'z') ADVANCE(71);
      END_STATE();
    case 242:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      END_STATE();
    case 243:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(346);
      END_STATE();
    case 244:
      if (eof) ADVANCE(246);
      ADVANCE_MAP(
        '"', 1,
        '-', 418,
        ':', 51,
        ';', 247,
        'N', 357,
        'f', 359,
        'i', 445,
        't', 472,
        '(', 249,
        '[', 249,
        ')', 250,
        ']', 250,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(341);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 245:
      if (eof) ADVANCE(246);
      ADVANCE_MAP(
        ':', 39,
        ';', 247,
        'b', 411,
        'c', 355,
        'd', 356,
        'e', 513,
        'f', 358,
        'i', 438,
        'l', 397,
        'o', 506,
        'p', 363,
        'q', 505,
        'r', 381,
        's', 399,
        'u', 446,
        '(', 249,
        '[', 249,
        ')', 250,
        ']', 250,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_ws);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_lparen);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_rparen);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_set_DASHoption);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_datatype);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_datatype);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_sort);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_sort);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_function);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_COLONunextractable);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_COLONon_merge);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_COLONmerge);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_COLONdefault);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_declare);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_relation);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_relation);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_ruleset);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_ruleset);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_rule);
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_rule);
      if (lookahead == 's') ADVANCE(402);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_COLONruleset);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_COLONname);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_rewrite);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_rewrite);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_COLONsubsume);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_COLONwhen);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_birewrite);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_birewrite);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_run);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '-') ADVANCE(478);
      if (lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '-') ADVANCE(183);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_COLONuntil);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_simplify);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_simplify);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_calc);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_calc);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_query_DASHextract);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_query_DASHextract);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_COLONvariants);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_check);
      if (lookahead == '-') ADVANCE(160);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_check);
      if (lookahead == '-') ADVANCE(461);
      if (lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_check_DASHproof);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_check_DASHproof);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_run_DASHschedule);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_run_DASHschedule);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_print_DASHstats);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_print_DASHstats);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_push);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_push);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_pop);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_pop);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_print_DASHfunction);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_print_DASHfunction);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_print_DASHsize);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_print_DASHsize);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_input);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_output);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_fail);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_fail);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_saturate);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_seq);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_repeat);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_COLONcost);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_subsume);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_subsume);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_union);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_panic);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_panic);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_extract);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_extract);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_EQ);
      if ((set_contains(sym_type_character_set_1, 10, lookahead)) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_type);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(336);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_type);
      if ((set_contains(sym_type_character_set_1, 10, lookahead)) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(336);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '.') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(341);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_unum);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_NaN);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_NaN);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_f64_token1);
      if (lookahead == 'e') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_f64_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(346);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_inf);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_inf);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_DASHinf);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_DASHinf);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(408);
      if (lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(452);
      if (lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(403);
      if (lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'N') ADVANCE(344);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(426);
      if (lookahead == 'h') ADVANCE(395);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(480);
      if (lookahead == 'e') ADVANCE(372);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(354);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(415);
      if (lookahead == 'u') ADVANCE(444);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(431);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(491);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(493);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(471);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(448);
      if (lookahead == 'o') ADVANCE(459);
      if (lookahead == 'r') ADVANCE(416);
      if (lookahead == 'u') ADVANCE(475);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(448);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(376);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(377);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(498);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'b') ADVANCE(477);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(425);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(328);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(428);
      if (lookahead == 'l') ADVANCE(401);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(410);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(429);
      if (lookahead == 'p') ADVANCE(508);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(497);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(486);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(488);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(500);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(507);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(386);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(435);
      if (lookahead == 'u') ADVANCE(430);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(512);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(270);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(322);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(264);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(315);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(274);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(324);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(254);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(278);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(307);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(297);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(338);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(340);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(370);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(379);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(481);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(465);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(482);
      if (lookahead == 'i') ADVANCE(436);
      if (lookahead == 'o') ADVANCE(470);
      if (lookahead == 'u') ADVANCE(368);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(434);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(494);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(487);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(514);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(295);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(348);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(350);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(515);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(511);
      if (lookahead == 's') ADVANCE(414);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(301);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(396);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(468);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(454);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(407);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(518);
      if (lookahead == 't') ADVANCE(361);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(427);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(449);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(371);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(341);
      if ((set_contains(sym_type_character_set_2, 10, lookahead)) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(495);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(496);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(455);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(456);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(457);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(458);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'k') ADVANCE(293);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(369);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(313);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(362);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(503);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(282);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(479);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(413);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(392);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(401);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(367);
      if (lookahead == 'w') ADVANCE(469);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(460);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(388);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(374);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(326);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(258);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(252);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(305);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(375);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(405);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(412);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(406);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(417);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(490);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(378);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(404);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(464);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(451);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(439);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(440);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(441);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(442);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(443);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(303);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(432);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(467);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(389);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(509);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(499);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(516);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(365);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(453);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(382);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(419);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(483);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(385);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(510);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(420);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(366);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(409);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(299);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(504);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(373);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(394);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(360);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(280);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(352);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(256);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(309);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(311);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(330);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(268);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(290);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(463);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(351);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(517);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(466);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(476);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(384);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(387);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(390);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(421);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(422);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(423);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(424);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(474);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(368);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(380);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(437);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(398);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(489);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(433);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(484);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(485);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(393);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(450);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'w') ADVANCE(473);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(492);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(501);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(286);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(353);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(462);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'z') ADVANCE(391);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(519);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_ident);
      if ((set_contains(sym_type_character_set_1, 10, lookahead)) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 245},
  [2] = {.lex_state = 245},
  [3] = {.lex_state = 244},
  [4] = {.lex_state = 244},
  [5] = {.lex_state = 244},
  [6] = {.lex_state = 244},
  [7] = {.lex_state = 244},
  [8] = {.lex_state = 244},
  [9] = {.lex_state = 244},
  [10] = {.lex_state = 244},
  [11] = {.lex_state = 244},
  [12] = {.lex_state = 244},
  [13] = {.lex_state = 244},
  [14] = {.lex_state = 244},
  [15] = {.lex_state = 244},
  [16] = {.lex_state = 244},
  [17] = {.lex_state = 244},
  [18] = {.lex_state = 244},
  [19] = {.lex_state = 244},
  [20] = {.lex_state = 244},
  [21] = {.lex_state = 244},
  [22] = {.lex_state = 244},
  [23] = {.lex_state = 244},
  [24] = {.lex_state = 244},
  [25] = {.lex_state = 244},
  [26] = {.lex_state = 244},
  [27] = {.lex_state = 244},
  [28] = {.lex_state = 244},
  [29] = {.lex_state = 244},
  [30] = {.lex_state = 244},
  [31] = {.lex_state = 244},
  [32] = {.lex_state = 244},
  [33] = {.lex_state = 244},
  [34] = {.lex_state = 244},
  [35] = {.lex_state = 244},
  [36] = {.lex_state = 244},
  [37] = {.lex_state = 244},
  [38] = {.lex_state = 244},
  [39] = {.lex_state = 244},
  [40] = {.lex_state = 244},
  [41] = {.lex_state = 244},
  [42] = {.lex_state = 244},
  [43] = {.lex_state = 244},
  [44] = {.lex_state = 244},
  [45] = {.lex_state = 244},
  [46] = {.lex_state = 244},
  [47] = {.lex_state = 244},
  [48] = {.lex_state = 244},
  [49] = {.lex_state = 244},
  [50] = {.lex_state = 244},
  [51] = {.lex_state = 244},
  [52] = {.lex_state = 244},
  [53] = {.lex_state = 244},
  [54] = {.lex_state = 244},
  [55] = {.lex_state = 244},
  [56] = {.lex_state = 244},
  [57] = {.lex_state = 244},
  [58] = {.lex_state = 244},
  [59] = {.lex_state = 244},
  [60] = {.lex_state = 244},
  [61] = {.lex_state = 244},
  [62] = {.lex_state = 244},
  [63] = {.lex_state = 244},
  [64] = {.lex_state = 9},
  [65] = {.lex_state = 245},
  [66] = {.lex_state = 245},
  [67] = {.lex_state = 245},
  [68] = {.lex_state = 245},
  [69] = {.lex_state = 245},
  [70] = {.lex_state = 245},
  [71] = {.lex_state = 245},
  [72] = {.lex_state = 245},
  [73] = {.lex_state = 245},
  [74] = {.lex_state = 245},
  [75] = {.lex_state = 245},
  [76] = {.lex_state = 245},
  [77] = {.lex_state = 245},
  [78] = {.lex_state = 245},
  [79] = {.lex_state = 245},
  [80] = {.lex_state = 245},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 245},
  [83] = {.lex_state = 245},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 245},
  [86] = {.lex_state = 245},
  [87] = {.lex_state = 245},
  [88] = {.lex_state = 245},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 245},
  [91] = {.lex_state = 245},
  [92] = {.lex_state = 245},
  [93] = {.lex_state = 245},
  [94] = {.lex_state = 245},
  [95] = {.lex_state = 245},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 245},
  [99] = {.lex_state = 245},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 245},
  [102] = {.lex_state = 245},
  [103] = {.lex_state = 7},
  [104] = {.lex_state = 7},
  [105] = {.lex_state = 7},
  [106] = {.lex_state = 245},
  [107] = {.lex_state = 245},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 245},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 245},
  [113] = {.lex_state = 245},
  [114] = {.lex_state = 245},
  [115] = {.lex_state = 245},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 245},
  [118] = {.lex_state = 245},
  [119] = {.lex_state = 245},
  [120] = {.lex_state = 245},
  [121] = {.lex_state = 245},
  [122] = {.lex_state = 245},
  [123] = {.lex_state = 245},
  [124] = {.lex_state = 6},
  [125] = {.lex_state = 245},
  [126] = {.lex_state = 10},
  [127] = {.lex_state = 245},
  [128] = {.lex_state = 245},
  [129] = {.lex_state = 10},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 6},
  [132] = {.lex_state = 245},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 7},
  [135] = {.lex_state = 7},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 7},
  [138] = {.lex_state = 245},
  [139] = {.lex_state = 245},
  [140] = {.lex_state = 7},
  [141] = {.lex_state = 6},
  [142] = {.lex_state = 7},
  [143] = {.lex_state = 245},
  [144] = {.lex_state = 245},
  [145] = {.lex_state = 245},
  [146] = {.lex_state = 245},
  [147] = {.lex_state = 245},
  [148] = {.lex_state = 245},
  [149] = {.lex_state = 245},
  [150] = {.lex_state = 245},
  [151] = {.lex_state = 245},
  [152] = {.lex_state = 245},
  [153] = {.lex_state = 245},
  [154] = {.lex_state = 245},
  [155] = {.lex_state = 245},
  [156] = {.lex_state = 245},
  [157] = {.lex_state = 245},
  [158] = {.lex_state = 245},
  [159] = {.lex_state = 245},
  [160] = {.lex_state = 245},
  [161] = {.lex_state = 245},
  [162] = {.lex_state = 7},
  [163] = {.lex_state = 245},
  [164] = {.lex_state = 245},
  [165] = {.lex_state = 245},
  [166] = {.lex_state = 245},
  [167] = {.lex_state = 245},
  [168] = {.lex_state = 6},
  [169] = {.lex_state = 245},
  [170] = {.lex_state = 245},
  [171] = {.lex_state = 245},
  [172] = {.lex_state = 245},
  [173] = {.lex_state = 245},
  [174] = {.lex_state = 245},
  [175] = {.lex_state = 7},
  [176] = {.lex_state = 7},
  [177] = {.lex_state = 245},
  [178] = {.lex_state = 245},
  [179] = {.lex_state = 245},
  [180] = {.lex_state = 245},
  [181] = {.lex_state = 8},
  [182] = {.lex_state = 245},
  [183] = {.lex_state = 245},
  [184] = {.lex_state = 245},
  [185] = {.lex_state = 245},
  [186] = {.lex_state = 245},
  [187] = {.lex_state = 245},
  [188] = {.lex_state = 245},
  [189] = {.lex_state = 245},
  [190] = {.lex_state = 245},
  [191] = {.lex_state = 245},
  [192] = {.lex_state = 245},
  [193] = {.lex_state = 245},
  [194] = {.lex_state = 245},
  [195] = {.lex_state = 245},
  [196] = {.lex_state = 245},
  [197] = {.lex_state = 245},
  [198] = {.lex_state = 245},
  [199] = {.lex_state = 245},
  [200] = {.lex_state = 245},
  [201] = {.lex_state = 7},
  [202] = {.lex_state = 245},
  [203] = {.lex_state = 245},
  [204] = {.lex_state = 7},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 7},
  [208] = {.lex_state = 245},
  [209] = {.lex_state = 245},
  [210] = {.lex_state = 7},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 245},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 245},
  [215] = {.lex_state = 245},
  [216] = {.lex_state = 245},
  [217] = {.lex_state = 7},
  [218] = {.lex_state = 245},
  [219] = {.lex_state = 245},
  [220] = {.lex_state = 7},
  [221] = {.lex_state = 7},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 7},
  [224] = {.lex_state = 7},
  [225] = {.lex_state = 245},
  [226] = {.lex_state = 7},
  [227] = {.lex_state = 6},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 245},
  [230] = {.lex_state = 245},
  [231] = {.lex_state = 245},
  [232] = {.lex_state = 245},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 7},
  [235] = {.lex_state = 7},
  [236] = {.lex_state = 7},
  [237] = {.lex_state = 245},
  [238] = {.lex_state = 245},
  [239] = {.lex_state = 245},
  [240] = {.lex_state = 245},
  [241] = {.lex_state = 7},
  [242] = {.lex_state = 7},
  [243] = {.lex_state = 7},
  [244] = {.lex_state = 7},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 245},
  [247] = {.lex_state = 7},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 6},
  [250] = {.lex_state = 245},
  [251] = {.lex_state = 245},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 245},
  [255] = {.lex_state = 245},
  [256] = {.lex_state = 7},
  [257] = {.lex_state = 245},
  [258] = {.lex_state = 245},
  [259] = {.lex_state = 245},
  [260] = {.lex_state = 7},
  [261] = {.lex_state = 245},
  [262] = {.lex_state = 245},
  [263] = {.lex_state = 245},
  [264] = {.lex_state = 245},
  [265] = {.lex_state = 245},
  [266] = {.lex_state = 6},
  [267] = {.lex_state = 245},
  [268] = {.lex_state = 7},
  [269] = {.lex_state = 245},
  [270] = {.lex_state = 245},
  [271] = {.lex_state = 245},
  [272] = {.lex_state = 245},
  [273] = {.lex_state = 245},
  [274] = {.lex_state = 7},
  [275] = {.lex_state = 7},
  [276] = {.lex_state = 245},
  [277] = {.lex_state = 245},
  [278] = {.lex_state = 6},
  [279] = {.lex_state = 7},
  [280] = {.lex_state = 245},
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
    [anon_sym_COLONsubsume] = ACTIONS(1),
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
    [anon_sym_subsume] = ACTIONS(1),
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
    [sym_source_file] = STATE(248),
    [sym_top_parens] = STATE(145),
    [sym_command] = STATE(66),
    [sym_nonletaction] = STATE(145),
    [sym_callexpr] = STATE(148),
    [aux_sym_source_file_repeat1] = STATE(66),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_ws] = ACTIONS(3),
    [sym_lparen] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 32,
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
    ACTIONS(29), 1,
      anon_sym_rewrite,
    ACTIONS(31), 1,
      anon_sym_birewrite,
    ACTIONS(33), 1,
      anon_sym_run,
    ACTIONS(35), 1,
      anon_sym_simplify,
    ACTIONS(37), 1,
      anon_sym_calc,
    ACTIONS(39), 1,
      anon_sym_query_DASHextract,
    ACTIONS(41), 1,
      anon_sym_check,
    ACTIONS(45), 1,
      anon_sym_run_DASHschedule,
    ACTIONS(49), 1,
      anon_sym_print_DASHfunction,
    ACTIONS(51), 1,
      anon_sym_print_DASHsize,
    ACTIONS(53), 1,
      anon_sym_input,
    ACTIONS(55), 1,
      anon_sym_output,
    ACTIONS(57), 1,
      anon_sym_fail,
    ACTIONS(59), 1,
      anon_sym_include,
    ACTIONS(63), 1,
      anon_sym_union,
    ACTIONS(65), 1,
      anon_sym_panic,
    ACTIONS(67), 1,
      anon_sym_extract,
    ACTIONS(69), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(13), 2,
      anon_sym_set_DASHoption,
      anon_sym_let,
    ACTIONS(43), 2,
      anon_sym_check_DASHproof,
      anon_sym_print_DASHstats,
    ACTIONS(47), 2,
      anon_sym_push,
      anon_sym_pop,
    ACTIONS(61), 2,
      anon_sym_delete,
      anon_sym_subsume,
  [102] = 12,
    ACTIONS(71), 1,
      sym_lparen,
    ACTIONS(73), 1,
      sym_rparen,
    ACTIONS(77), 1,
      sym_num,
    ACTIONS(81), 1,
      aux_sym_f64_token1,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(54), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(79), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(52), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [148] = 12,
    ACTIONS(87), 1,
      sym_lparen,
    ACTIONS(90), 1,
      sym_rparen,
    ACTIONS(95), 1,
      sym_num,
    ACTIONS(101), 1,
      aux_sym_f64_token1,
    ACTIONS(104), 1,
      sym_ident,
    ACTIONS(107), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(54), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(98), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(52), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [194] = 12,
    ACTIONS(71), 1,
      sym_lparen,
    ACTIONS(77), 1,
      sym_num,
    ACTIONS(81), 1,
      aux_sym_f64_token1,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      sym_string,
    ACTIONS(110), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(14), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(54), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(79), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(52), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [240] = 12,
    ACTIONS(71), 1,
      sym_lparen,
    ACTIONS(77), 1,
      sym_num,
    ACTIONS(81), 1,
      aux_sym_f64_token1,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      sym_string,
    ACTIONS(112), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(11), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(54), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(79), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(52), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [286] = 12,
    ACTIONS(71), 1,
      sym_lparen,
    ACTIONS(77), 1,
      sym_num,
    ACTIONS(81), 1,
      aux_sym_f64_token1,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      sym_string,
    ACTIONS(114), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(54), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(79), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(52), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [332] = 12,
    ACTIONS(71), 1,
      sym_lparen,
    ACTIONS(77), 1,
      sym_num,
    ACTIONS(81), 1,
      aux_sym_f64_token1,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      sym_string,
    ACTIONS(116), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(13), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(54), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(79), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(52), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [378] = 12,
    ACTIONS(71), 1,
      sym_lparen,
    ACTIONS(77), 1,
      sym_num,
    ACTIONS(81), 1,
      aux_sym_f64_token1,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      sym_string,
    ACTIONS(118), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(7), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(54), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(79), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(52), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [424] = 12,
    ACTIONS(71), 1,
      sym_lparen,
    ACTIONS(77), 1,
      sym_num,
    ACTIONS(81), 1,
      aux_sym_f64_token1,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      sym_string,
    ACTIONS(120), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(54), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(79), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(52), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [470] = 12,
    ACTIONS(71), 1,
      sym_lparen,
    ACTIONS(77), 1,
      sym_num,
    ACTIONS(81), 1,
      aux_sym_f64_token1,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      sym_string,
    ACTIONS(122), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(54), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(79), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(52), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [516] = 12,
    ACTIONS(71), 1,
      sym_lparen,
    ACTIONS(77), 1,
      sym_num,
    ACTIONS(81), 1,
      aux_sym_f64_token1,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      sym_string,
    ACTIONS(124), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(54), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(79), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(52), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [562] = 12,
    ACTIONS(71), 1,
      sym_lparen,
    ACTIONS(77), 1,
      sym_num,
    ACTIONS(81), 1,
      aux_sym_f64_token1,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      sym_string,
    ACTIONS(126), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(54), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(79), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(52), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [608] = 12,
    ACTIONS(71), 1,
      sym_lparen,
    ACTIONS(77), 1,
      sym_num,
    ACTIONS(81), 1,
      aux_sym_f64_token1,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      sym_string,
    ACTIONS(128), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(54), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(79), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(52), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [654] = 11,
    ACTIONS(71), 1,
      sym_lparen,
    ACTIONS(77), 1,
      sym_num,
    ACTIONS(81), 1,
      aux_sym_f64_token1,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(10), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(54), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(79), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(52), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [697] = 12,
    ACTIONS(71), 1,
      sym_lparen,
    ACTIONS(77), 1,
      sym_num,
    ACTIONS(81), 1,
      aux_sym_f64_token1,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      sym_string,
    ACTIONS(130), 1,
      sym_rparen,
    STATE(267), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(54), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(79), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(52), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [742] = 12,
    ACTIONS(71), 1,
      sym_lparen,
    ACTIONS(77), 1,
      sym_num,
    ACTIONS(81), 1,
      aux_sym_f64_token1,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      sym_string,
    ACTIONS(132), 1,
      anon_sym_COLONvariants,
    STATE(276), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(54), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(79), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(52), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [787] = 11,
    ACTIONS(71), 1,
      sym_lparen,
    ACTIONS(77), 1,
      sym_num,
    ACTIONS(81), 1,
      aux_sym_f64_token1,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(3), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(54), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(79), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(52), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [830] = 12,
    ACTIONS(71), 1,
      sym_lparen,
    ACTIONS(77), 1,
      sym_num,
    ACTIONS(81), 1,
      aux_sym_f64_token1,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      sym_string,
    STATE(4), 1,
      aux_sym_command_repeat2,
    STATE(58), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(54), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(79), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(52), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [875] = 11,
    ACTIONS(71), 1,
      sym_lparen,
    ACTIONS(77), 1,
      sym_num,
    ACTIONS(81), 1,
      aux_sym_f64_token1,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(19), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(54), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(79), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(52), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [918] = 11,
    ACTIONS(71), 1,
      sym_lparen,
    ACTIONS(77), 1,
      sym_num,
    ACTIONS(81), 1,
      aux_sym_f64_token1,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(12), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(54), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(79), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(52), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [961] = 11,
    ACTIONS(71), 1,
      sym_lparen,
    ACTIONS(77), 1,
      sym_num,
    ACTIONS(81), 1,
      aux_sym_f64_token1,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      sym_string,
    STATE(49), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(54), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(79), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(52), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1003] = 11,
    ACTIONS(71), 1,
      sym_lparen,
    ACTIONS(77), 1,
      sym_num,
    ACTIONS(81), 1,
      aux_sym_f64_token1,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      sym_string,
    STATE(239), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(54), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(79), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(52), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1045] = 11,
    ACTIONS(71), 1,
      sym_lparen,
    ACTIONS(77), 1,
      sym_num,
    ACTIONS(81), 1,
      aux_sym_f64_token1,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      sym_string,
    STATE(46), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(54), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(79), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(52), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1087] = 11,
    ACTIONS(71), 1,
      sym_lparen,
    ACTIONS(77), 1,
      sym_num,
    ACTIONS(81), 1,
      aux_sym_f64_token1,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      sym_string,
    STATE(259), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(54), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(79), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(52), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1129] = 11,
    ACTIONS(71), 1,
      sym_lparen,
    ACTIONS(77), 1,
      sym_num,
    ACTIONS(81), 1,
      aux_sym_f64_token1,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      sym_string,
    STATE(199), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(54), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(79), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(52), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1171] = 11,
    ACTIONS(71), 1,
      sym_lparen,
    ACTIONS(77), 1,
      sym_num,
    ACTIONS(81), 1,
      aux_sym_f64_token1,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      sym_string,
    STATE(218), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(54), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(79), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(52), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1213] = 11,
    ACTIONS(71), 1,
      sym_lparen,
    ACTIONS(77), 1,
      sym_num,
    ACTIONS(81), 1,
      aux_sym_f64_token1,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      sym_string,
    STATE(263), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(54), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(79), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(52), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1255] = 11,
    ACTIONS(71), 1,
      sym_lparen,
    ACTIONS(77), 1,
      sym_num,
    ACTIONS(81), 1,
      aux_sym_f64_token1,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      sym_string,
    STATE(225), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(54), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(79), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(52), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1297] = 11,
    ACTIONS(71), 1,
      sym_lparen,
    ACTIONS(77), 1,
      sym_num,
    ACTIONS(81), 1,
      aux_sym_f64_token1,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      sym_string,
    STATE(183), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(54), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(79), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(52), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1339] = 11,
    ACTIONS(71), 1,
      sym_lparen,
    ACTIONS(77), 1,
      sym_num,
    ACTIONS(81), 1,
      aux_sym_f64_token1,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      sym_string,
    STATE(246), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(54), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(79), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(52), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1381] = 11,
    ACTIONS(71), 1,
      sym_lparen,
    ACTIONS(77), 1,
      sym_num,
    ACTIONS(81), 1,
      aux_sym_f64_token1,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      sym_string,
    STATE(190), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(54), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(79), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(52), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1423] = 11,
    ACTIONS(71), 1,
      sym_lparen,
    ACTIONS(77), 1,
      sym_num,
    ACTIONS(81), 1,
      aux_sym_f64_token1,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      sym_string,
    STATE(255), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(54), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(79), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(52), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1465] = 11,
    ACTIONS(71), 1,
      sym_lparen,
    ACTIONS(77), 1,
      sym_num,
    ACTIONS(81), 1,
      aux_sym_f64_token1,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      sym_string,
    STATE(43), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(54), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(79), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(52), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1507] = 11,
    ACTIONS(71), 1,
      sym_lparen,
    ACTIONS(77), 1,
      sym_num,
    ACTIONS(81), 1,
      aux_sym_f64_token1,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      sym_string,
    STATE(262), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(54), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(79), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(52), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1549] = 11,
    ACTIONS(71), 1,
      sym_lparen,
    ACTIONS(77), 1,
      sym_num,
    ACTIONS(81), 1,
      aux_sym_f64_token1,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      sym_string,
    STATE(16), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(54), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(79), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(52), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1591] = 11,
    ACTIONS(71), 1,
      sym_lparen,
    ACTIONS(77), 1,
      sym_num,
    ACTIONS(81), 1,
      aux_sym_f64_token1,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      sym_string,
    STATE(194), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(54), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(79), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(52), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1633] = 11,
    ACTIONS(71), 1,
      sym_lparen,
    ACTIONS(77), 1,
      sym_num,
    ACTIONS(81), 1,
      aux_sym_f64_token1,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      sym_string,
    STATE(214), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(54), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(79), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(52), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1675] = 11,
    ACTIONS(71), 1,
      sym_lparen,
    ACTIONS(77), 1,
      sym_num,
    ACTIONS(81), 1,
      aux_sym_f64_token1,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      sym_string,
    STATE(177), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(54), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(79), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(52), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1717] = 11,
    ACTIONS(71), 1,
      sym_lparen,
    ACTIONS(77), 1,
      sym_num,
    ACTIONS(81), 1,
      aux_sym_f64_token1,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      sym_string,
    STATE(208), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(54), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(79), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(52), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1759] = 11,
    ACTIONS(71), 1,
      sym_lparen,
    ACTIONS(77), 1,
      sym_num,
    ACTIONS(81), 1,
      aux_sym_f64_token1,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      sym_string,
    STATE(232), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(54), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(79), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(52), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1801] = 11,
    ACTIONS(71), 1,
      sym_lparen,
    ACTIONS(77), 1,
      sym_num,
    ACTIONS(81), 1,
      aux_sym_f64_token1,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      sym_string,
    STATE(254), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(54), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(79), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(52), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1843] = 11,
    ACTIONS(71), 1,
      sym_lparen,
    ACTIONS(77), 1,
      sym_num,
    ACTIONS(81), 1,
      aux_sym_f64_token1,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      sym_string,
    STATE(267), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(54), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(79), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(52), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1885] = 11,
    ACTIONS(71), 1,
      sym_lparen,
    ACTIONS(77), 1,
      sym_num,
    ACTIONS(81), 1,
      aux_sym_f64_token1,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      sym_string,
    STATE(191), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(54), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(79), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(52), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1927] = 11,
    ACTIONS(71), 1,
      sym_lparen,
    ACTIONS(77), 1,
      sym_num,
    ACTIONS(81), 1,
      aux_sym_f64_token1,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      sym_string,
    STATE(229), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(54), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(79), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(52), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [1969] = 11,
    ACTIONS(71), 1,
      sym_lparen,
    ACTIONS(77), 1,
      sym_num,
    ACTIONS(81), 1,
      aux_sym_f64_token1,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      sym_string,
    STATE(132), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(54), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(79), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(52), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [2011] = 11,
    ACTIONS(71), 1,
      sym_lparen,
    ACTIONS(77), 1,
      sym_num,
    ACTIONS(81), 1,
      aux_sym_f64_token1,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      sym_string,
    STATE(186), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(54), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(79), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(52), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [2053] = 11,
    ACTIONS(71), 1,
      sym_lparen,
    ACTIONS(77), 1,
      sym_num,
    ACTIONS(81), 1,
      aux_sym_f64_token1,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      sym_string,
    STATE(251), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(54), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(79), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(52), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [2095] = 11,
    ACTIONS(71), 1,
      sym_lparen,
    ACTIONS(77), 1,
      sym_num,
    ACTIONS(81), 1,
      aux_sym_f64_token1,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      sym_string,
    STATE(122), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(54), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(79), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
    STATE(52), 4,
      sym_unit,
      sym_bool,
      sym_f64,
      sym_symstring,
  [2137] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(136), 7,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
    ACTIONS(134), 9,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONsubsume,
      anon_sym_COLONwhen,
      aux_sym_f64_token1,
      sym_string,
  [2162] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(140), 7,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
    ACTIONS(138), 9,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONsubsume,
      anon_sym_COLONwhen,
      aux_sym_f64_token1,
      sym_string,
  [2187] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(144), 7,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
    ACTIONS(142), 8,
      sym_lparen,
      sym_rparen,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONsubsume,
      anon_sym_COLONwhen,
      aux_sym_f64_token1,
      sym_string,
  [2211] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(148), 7,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
    ACTIONS(146), 8,
      sym_lparen,
      sym_rparen,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONsubsume,
      anon_sym_COLONwhen,
      aux_sym_f64_token1,
      sym_string,
  [2235] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(152), 7,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
    ACTIONS(150), 8,
      sym_lparen,
      sym_rparen,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONsubsume,
      anon_sym_COLONwhen,
      aux_sym_f64_token1,
      sym_string,
  [2259] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(156), 7,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
    ACTIONS(154), 8,
      sym_lparen,
      sym_rparen,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONsubsume,
      anon_sym_COLONwhen,
      aux_sym_f64_token1,
      sym_string,
  [2283] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(160), 7,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
    ACTIONS(158), 8,
      sym_lparen,
      sym_rparen,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONsubsume,
      anon_sym_COLONwhen,
      aux_sym_f64_token1,
      sym_string,
  [2307] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(164), 7,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
    ACTIONS(162), 8,
      sym_lparen,
      sym_rparen,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONsubsume,
      anon_sym_COLONwhen,
      aux_sym_f64_token1,
      sym_string,
  [2331] = 4,
    ACTIONS(168), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(166), 3,
      sym_lparen,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(170), 7,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [2353] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(172), 3,
      sym_lparen,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(174), 7,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [2372] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(176), 3,
      sym_lparen,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(178), 7,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [2391] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(180), 3,
      sym_lparen,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(182), 7,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [2410] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(184), 3,
      sym_lparen,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(186), 7,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [2429] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(188), 3,
      sym_lparen,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(190), 7,
      anon_sym_true,
      anon_sym_false,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [2448] = 8,
    ACTIONS(9), 1,
      sym_lparen,
    ACTIONS(63), 1,
      anon_sym_union,
    ACTIONS(65), 1,
      anon_sym_panic,
    ACTIONS(67), 1,
      anon_sym_extract,
    ACTIONS(69), 1,
      sym_ident,
    ACTIONS(192), 1,
      anon_sym_let,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(61), 2,
      anon_sym_delete,
      anon_sym_subsume,
  [2475] = 6,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
    ACTIONS(196), 1,
      sym_lparen,
    STATE(148), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(65), 2,
      sym_command,
      aux_sym_source_file_repeat1,
    STATE(145), 2,
      sym_top_parens,
      sym_nonletaction,
  [2497] = 6,
    ACTIONS(7), 1,
      sym_lparen,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    STATE(148), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(65), 2,
      sym_command,
      aux_sym_source_file_repeat1,
    STATE(145), 2,
      sym_top_parens,
      sym_nonletaction,
  [2519] = 8,
    ACTIONS(73), 1,
      sym_rparen,
    ACTIONS(201), 1,
      anon_sym_COLONunextractable,
    ACTIONS(203), 1,
      anon_sym_COLONon_merge,
    ACTIONS(205), 1,
      anon_sym_COLONmerge,
    ACTIONS(207), 1,
      anon_sym_COLONdefault,
    ACTIONS(209), 1,
      anon_sym_COLONcost,
    STATE(115), 1,
      sym_cost,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2545] = 6,
    ACTIONS(211), 1,
      sym_lparen,
    ACTIONS(213), 1,
      sym_rparen,
    STATE(148), 1,
      sym_callexpr,
    STATE(179), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(80), 2,
      sym_action,
      aux_sym_command_repeat3,
  [2566] = 6,
    ACTIONS(211), 1,
      sym_lparen,
    ACTIONS(215), 1,
      sym_rparen,
    STATE(148), 1,
      sym_callexpr,
    STATE(179), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(80), 2,
      sym_action,
      aux_sym_command_repeat3,
  [2587] = 6,
    ACTIONS(211), 1,
      sym_lparen,
    ACTIONS(217), 1,
      sym_rparen,
    STATE(148), 1,
      sym_callexpr,
    STATE(179), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(73), 2,
      sym_action,
      aux_sym_command_repeat3,
  [2608] = 6,
    ACTIONS(211), 1,
      sym_lparen,
    ACTIONS(219), 1,
      sym_rparen,
    STATE(148), 1,
      sym_callexpr,
    STATE(179), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(69), 2,
      sym_action,
      aux_sym_command_repeat3,
  [2629] = 6,
    ACTIONS(211), 1,
      sym_lparen,
    ACTIONS(221), 1,
      sym_rparen,
    STATE(148), 1,
      sym_callexpr,
    STATE(179), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(78), 2,
      sym_action,
      aux_sym_command_repeat3,
  [2650] = 6,
    ACTIONS(211), 1,
      sym_lparen,
    ACTIONS(221), 1,
      sym_rparen,
    STATE(148), 1,
      sym_callexpr,
    STATE(179), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(80), 2,
      sym_action,
      aux_sym_command_repeat3,
  [2671] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(223), 6,
      sym_rparen,
      anon_sym_COLONunextractable,
      anon_sym_COLONon_merge,
      anon_sym_COLONmerge,
      anon_sym_COLONdefault,
      anon_sym_COLONcost,
  [2684] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(225), 6,
      sym_rparen,
      anon_sym_COLONunextractable,
      anon_sym_COLONon_merge,
      anon_sym_COLONmerge,
      anon_sym_COLONdefault,
      anon_sym_COLONcost,
  [2697] = 6,
    ACTIONS(211), 1,
      sym_lparen,
    ACTIONS(215), 1,
      sym_rparen,
    STATE(148), 1,
      sym_callexpr,
    STATE(179), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(68), 2,
      sym_action,
      aux_sym_command_repeat3,
  [2718] = 6,
    ACTIONS(211), 1,
      sym_lparen,
    ACTIONS(227), 1,
      sym_rparen,
    STATE(148), 1,
      sym_callexpr,
    STATE(179), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(80), 2,
      sym_action,
      aux_sym_command_repeat3,
  [2739] = 6,
    ACTIONS(211), 1,
      sym_lparen,
    ACTIONS(229), 1,
      sym_rparen,
    STATE(148), 1,
      sym_callexpr,
    STATE(179), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(80), 2,
      sym_action,
      aux_sym_command_repeat3,
  [2760] = 6,
    ACTIONS(211), 1,
      sym_lparen,
    ACTIONS(213), 1,
      sym_rparen,
    STATE(148), 1,
      sym_callexpr,
    STATE(179), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(77), 2,
      sym_action,
      aux_sym_command_repeat3,
  [2781] = 6,
    ACTIONS(231), 1,
      sym_lparen,
    ACTIONS(234), 1,
      sym_rparen,
    STATE(148), 1,
      sym_callexpr,
    STATE(179), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(80), 2,
      sym_action,
      aux_sym_command_repeat3,
  [2802] = 5,
    ACTIONS(236), 1,
      sym_lparen,
    ACTIONS(238), 1,
      sym_rparen,
    ACTIONS(240), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(100), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [2820] = 5,
    ACTIONS(242), 1,
      sym_lparen,
    ACTIONS(244), 1,
      sym_rparen,
    STATE(198), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(114), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [2838] = 5,
    ACTIONS(242), 1,
      sym_lparen,
    ACTIONS(246), 1,
      sym_rparen,
    STATE(198), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(112), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [2856] = 6,
    ACTIONS(209), 1,
      anon_sym_COLONcost,
    ACTIONS(248), 1,
      sym_rparen,
    ACTIONS(250), 1,
      sym_type,
    STATE(124), 1,
      aux_sym_command_repeat4,
    STATE(250), 1,
      sym_cost,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [2876] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(252), 5,
      sym_rparen,
      anon_sym_COLONunextractable,
      anon_sym_COLONon_merge,
      anon_sym_COLONmerge,
      anon_sym_COLONdefault,
  [2888] = 5,
    ACTIONS(7), 1,
      sym_lparen,
    STATE(148), 1,
      sym_callexpr,
    STATE(276), 1,
      sym_command,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(145), 2,
      sym_top_parens,
      sym_nonletaction,
  [2906] = 5,
    ACTIONS(242), 1,
      sym_lparen,
    ACTIONS(254), 1,
      sym_rparen,
    STATE(198), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(107), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [2924] = 5,
    ACTIONS(242), 1,
      sym_lparen,
    ACTIONS(256), 1,
      sym_rparen,
    STATE(198), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(107), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [2942] = 5,
    ACTIONS(236), 1,
      sym_lparen,
    ACTIONS(240), 1,
      sym_ident,
    ACTIONS(256), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(108), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [2960] = 5,
    ACTIONS(242), 1,
      sym_lparen,
    ACTIONS(258), 1,
      sym_rparen,
    STATE(198), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(107), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [2978] = 5,
    ACTIONS(242), 1,
      sym_lparen,
    ACTIONS(260), 1,
      sym_rparen,
    STATE(198), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(107), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [2996] = 5,
    ACTIONS(242), 1,
      sym_lparen,
    ACTIONS(260), 1,
      sym_rparen,
    STATE(198), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(87), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [3014] = 5,
    ACTIONS(242), 1,
      sym_lparen,
    ACTIONS(262), 1,
      sym_rparen,
    STATE(198), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(88), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [3032] = 5,
    ACTIONS(242), 1,
      sym_lparen,
    ACTIONS(264), 1,
      sym_rparen,
    STATE(198), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(90), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [3050] = 5,
    ACTIONS(120), 1,
      sym_rparen,
    ACTIONS(242), 1,
      sym_lparen,
    STATE(198), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(107), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [3068] = 5,
    ACTIONS(236), 1,
      sym_lparen,
    ACTIONS(240), 1,
      sym_ident,
    ACTIONS(246), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(116), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [3086] = 5,
    ACTIONS(236), 1,
      sym_lparen,
    ACTIONS(240), 1,
      sym_ident,
    ACTIONS(262), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(89), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [3104] = 5,
    ACTIONS(120), 1,
      sym_rparen,
    ACTIONS(242), 1,
      sym_lparen,
    STATE(198), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(109), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [3122] = 5,
    ACTIONS(242), 1,
      sym_lparen,
    ACTIONS(266), 1,
      sym_rparen,
    STATE(198), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(107), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [3140] = 5,
    ACTIONS(236), 1,
      sym_lparen,
    ACTIONS(240), 1,
      sym_ident,
    ACTIONS(246), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(108), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [3158] = 5,
    ACTIONS(73), 1,
      sym_rparen,
    ACTIONS(242), 1,
      sym_lparen,
    STATE(198), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(95), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [3176] = 5,
    ACTIONS(242), 1,
      sym_lparen,
    ACTIONS(268), 1,
      sym_rparen,
    STATE(198), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(91), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [3194] = 5,
    ACTIONS(236), 1,
      sym_lparen,
    ACTIONS(240), 1,
      sym_ident,
    ACTIONS(244), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(108), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [3212] = 5,
    ACTIONS(236), 1,
      sym_lparen,
    ACTIONS(240), 1,
      sym_ident,
    ACTIONS(270), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(103), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [3230] = 5,
    ACTIONS(236), 1,
      sym_lparen,
    ACTIONS(240), 1,
      sym_ident,
    ACTIONS(244), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(111), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [3248] = 5,
    ACTIONS(242), 1,
      sym_lparen,
    ACTIONS(272), 1,
      sym_rparen,
    STATE(198), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(99), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [3266] = 5,
    ACTIONS(274), 1,
      sym_lparen,
    ACTIONS(277), 1,
      sym_rparen,
    STATE(198), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(107), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [3284] = 5,
    ACTIONS(279), 1,
      sym_lparen,
    ACTIONS(282), 1,
      sym_rparen,
    ACTIONS(284), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(108), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [3302] = 5,
    ACTIONS(124), 1,
      sym_rparen,
    ACTIONS(242), 1,
      sym_lparen,
    STATE(198), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(107), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [3320] = 6,
    ACTIONS(209), 1,
      anon_sym_COLONcost,
    ACTIONS(287), 1,
      sym_rparen,
    ACTIONS(289), 1,
      sym_type,
    STATE(84), 1,
      aux_sym_command_repeat4,
    STATE(215), 1,
      sym_cost,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3340] = 5,
    ACTIONS(236), 1,
      sym_lparen,
    ACTIONS(240), 1,
      sym_ident,
    ACTIONS(264), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(108), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [3358] = 5,
    ACTIONS(242), 1,
      sym_lparen,
    ACTIONS(291), 1,
      sym_rparen,
    STATE(198), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(107), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [3376] = 5,
    ACTIONS(242), 1,
      sym_lparen,
    ACTIONS(291), 1,
      sym_rparen,
    STATE(198), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(117), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [3394] = 5,
    ACTIONS(242), 1,
      sym_lparen,
    ACTIONS(264), 1,
      sym_rparen,
    STATE(198), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(107), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [3412] = 6,
    ACTIONS(120), 1,
      sym_rparen,
    ACTIONS(293), 1,
      anon_sym_COLONunextractable,
    ACTIONS(295), 1,
      anon_sym_COLONon_merge,
    ACTIONS(297), 1,
      anon_sym_COLONmerge,
    ACTIONS(299), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3432] = 5,
    ACTIONS(236), 1,
      sym_lparen,
    ACTIONS(240), 1,
      sym_ident,
    ACTIONS(291), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(108), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [3450] = 5,
    ACTIONS(242), 1,
      sym_lparen,
    ACTIONS(301), 1,
      sym_rparen,
    STATE(198), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(107), 2,
      sym_fact,
      aux_sym_command_repeat5,
  [3468] = 5,
    ACTIONS(124), 1,
      sym_rparen,
    ACTIONS(303), 1,
      anon_sym_COLONon_merge,
    ACTIONS(305), 1,
      anon_sym_COLONmerge,
    ACTIONS(307), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3485] = 4,
    ACTIONS(309), 1,
      sym_lparen,
    ACTIONS(312), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(119), 2,
      sym_identsort,
      aux_sym_command_repeat6,
  [3500] = 4,
    ACTIONS(314), 1,
      sym_lparen,
    ACTIONS(316), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(119), 2,
      sym_identsort,
      aux_sym_command_repeat6,
  [3515] = 4,
    ACTIONS(318), 1,
      sym_lparen,
    ACTIONS(321), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(121), 2,
      sym_variant,
      aux_sym_command_repeat1,
  [3530] = 5,
    ACTIONS(73), 1,
      sym_rparen,
    ACTIONS(323), 1,
      anon_sym_COLONruleset,
    ACTIONS(325), 1,
      anon_sym_COLONsubsume,
    ACTIONS(327), 1,
      anon_sym_COLONwhen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3547] = 4,
    ACTIONS(256), 1,
      sym_rparen,
    ACTIONS(329), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(127), 2,
      sym_variant,
      aux_sym_command_repeat1,
  [3562] = 4,
    ACTIONS(333), 1,
      sym_type,
    STATE(124), 1,
      aux_sym_command_repeat4,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(331), 2,
      sym_rparen,
      anon_sym_COLONcost,
  [3577] = 5,
    ACTIONS(120), 1,
      sym_rparen,
    ACTIONS(295), 1,
      anon_sym_COLONon_merge,
    ACTIONS(297), 1,
      anon_sym_COLONmerge,
    ACTIONS(299), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3594] = 4,
    ACTIONS(336), 1,
      anon_sym_run,
    ACTIONS(340), 1,
      anon_sym_repeat,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(338), 2,
      anon_sym_saturate,
      anon_sym_seq,
  [3609] = 4,
    ACTIONS(73), 1,
      sym_rparen,
    ACTIONS(329), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(121), 2,
      sym_variant,
      aux_sym_command_repeat1,
  [3624] = 4,
    ACTIONS(314), 1,
      sym_lparen,
    ACTIONS(342), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(120), 2,
      sym_identsort,
      aux_sym_command_repeat6,
  [3639] = 4,
    ACTIONS(344), 1,
      anon_sym_run,
    ACTIONS(348), 1,
      anon_sym_repeat,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(346), 2,
      anon_sym_saturate,
      anon_sym_seq,
  [3654] = 4,
    ACTIONS(116), 1,
      sym_rparen,
    ACTIONS(250), 1,
      sym_type,
    STATE(124), 1,
      aux_sym_command_repeat4,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3668] = 4,
    ACTIONS(350), 1,
      sym_rparen,
    ACTIONS(352), 1,
      sym_type,
    STATE(141), 1,
      aux_sym_command_repeat4,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3682] = 4,
    ACTIONS(73), 1,
      sym_rparen,
    ACTIONS(323), 1,
      anon_sym_COLONruleset,
    ACTIONS(327), 1,
      anon_sym_COLONwhen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3696] = 4,
    ACTIONS(238), 1,
      sym_rparen,
    ACTIONS(354), 1,
      anon_sym_COLONuntil,
    ACTIONS(356), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3710] = 4,
    ACTIONS(270), 1,
      sym_rparen,
    ACTIONS(358), 1,
      anon_sym_COLONuntil,
    ACTIONS(360), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3724] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(172), 3,
      sym_lparen,
      sym_rparen,
      sym_ident,
  [3734] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(188), 3,
      sym_lparen,
      sym_rparen,
      sym_ident,
  [3744] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(184), 3,
      sym_lparen,
      sym_rparen,
      sym_ident,
  [3754] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(362), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3764] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(364), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3774] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(176), 3,
      sym_lparen,
      sym_rparen,
      sym_ident,
  [3784] = 4,
    ACTIONS(250), 1,
      sym_type,
    ACTIONS(366), 1,
      sym_rparen,
    STATE(124), 1,
      aux_sym_command_repeat4,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3798] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(180), 3,
      sym_lparen,
      sym_rparen,
      sym_ident,
  [3808] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(368), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3818] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(370), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3828] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(372), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3838] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(374), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3848] = 4,
    ACTIONS(120), 1,
      sym_rparen,
    ACTIONS(376), 1,
      anon_sym_COLONruleset,
    ACTIONS(378), 1,
      anon_sym_COLONwhen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3862] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(380), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3872] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(382), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3882] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(384), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3892] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(386), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3902] = 4,
    ACTIONS(388), 1,
      sym_rparen,
    ACTIONS(390), 1,
      anon_sym_COLONmerge,
    ACTIONS(392), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3916] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(394), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3926] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(396), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3936] = 4,
    ACTIONS(398), 1,
      sym_rparen,
    ACTIONS(400), 1,
      anon_sym_COLONmerge,
    ACTIONS(402), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3950] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(404), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3960] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(406), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [3970] = 4,
    ACTIONS(408), 1,
      sym_rparen,
    ACTIONS(410), 1,
      anon_sym_COLONruleset,
    ACTIONS(412), 1,
      anon_sym_COLONname,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3984] = 4,
    ACTIONS(408), 1,
      sym_rparen,
    ACTIONS(414), 1,
      anon_sym_COLONmerge,
    ACTIONS(416), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [3998] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(418), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4008] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(420), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4018] = 4,
    ACTIONS(422), 1,
      sym_lparen,
    ACTIONS(424), 1,
      sym_ident,
    STATE(40), 1,
      sym_schedule,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4032] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(426), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4042] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(428), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4052] = 4,
    ACTIONS(430), 1,
      sym_rparen,
    ACTIONS(432), 1,
      anon_sym_COLONmerge,
    ACTIONS(434), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4066] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(436), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4076] = 4,
    ACTIONS(430), 1,
      sym_rparen,
    ACTIONS(438), 1,
      anon_sym_COLONruleset,
    ACTIONS(440), 1,
      anon_sym_COLONname,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4090] = 4,
    ACTIONS(442), 1,
      sym_rparen,
    ACTIONS(444), 1,
      sym_type,
    STATE(130), 1,
      aux_sym_command_repeat4,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4104] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(446), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4114] = 4,
    ACTIONS(124), 1,
      sym_rparen,
    ACTIONS(448), 1,
      anon_sym_COLONruleset,
    ACTIONS(450), 1,
      anon_sym_COLONname,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4128] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(452), 3,
      ts_builtin_sym_end,
      sym_lparen,
      sym_rparen,
  [4138] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(454), 2,
      sym_lparen,
      sym_rparen,
  [4147] = 3,
    ACTIONS(408), 1,
      sym_rparen,
    ACTIONS(412), 1,
      anon_sym_COLONname,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4158] = 3,
    ACTIONS(456), 1,
      sym_lparen,
    STATE(67), 1,
      sym_schema,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4169] = 3,
    ACTIONS(458), 1,
      sym_rparen,
    ACTIONS(460), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4180] = 3,
    ACTIONS(262), 1,
      sym_rparen,
    ACTIONS(462), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4191] = 3,
    ACTIONS(124), 1,
      sym_rparen,
    ACTIONS(307), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4202] = 3,
    ACTIONS(256), 1,
      sym_rparen,
    ACTIONS(464), 1,
      anon_sym_COLONuntil,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4213] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(466), 2,
      sym_lparen,
      sym_rparen,
  [4222] = 3,
    ACTIONS(246), 1,
      sym_rparen,
    ACTIONS(468), 1,
      anon_sym_COLONuntil,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4233] = 3,
    ACTIONS(69), 1,
      sym_ident,
    ACTIONS(470), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4244] = 3,
    ACTIONS(262), 1,
      sym_rparen,
    ACTIONS(462), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4255] = 3,
    ACTIONS(472), 1,
      sym_rparen,
    ACTIONS(474), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4266] = 3,
    ACTIONS(256), 1,
      sym_rparen,
    ACTIONS(476), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4277] = 3,
    ACTIONS(244), 1,
      sym_rparen,
    ACTIONS(478), 1,
      anon_sym_COLONuntil,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4288] = 3,
    ACTIONS(480), 1,
      sym_rparen,
    ACTIONS(482), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4299] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(484), 2,
      sym_lparen,
      sym_rparen,
  [4308] = 3,
    ACTIONS(388), 1,
      sym_rparen,
    ACTIONS(486), 1,
      anon_sym_COLONname,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4319] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(488), 2,
      sym_lparen,
      sym_rparen,
  [4328] = 3,
    ACTIONS(430), 1,
      sym_rparen,
    ACTIONS(434), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4339] = 3,
    ACTIONS(388), 1,
      sym_rparen,
    ACTIONS(392), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4350] = 3,
    ACTIONS(398), 1,
      sym_rparen,
    ACTIONS(490), 1,
      anon_sym_COLONruleset,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4361] = 3,
    ACTIONS(398), 1,
      sym_rparen,
    ACTIONS(492), 1,
      anon_sym_COLONname,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4372] = 3,
    ACTIONS(398), 1,
      sym_rparen,
    ACTIONS(402), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4383] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(494), 2,
      sym_lparen,
      sym_rparen,
  [4392] = 3,
    ACTIONS(408), 1,
      sym_rparen,
    ACTIONS(496), 1,
      anon_sym_COLONruleset,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4403] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(498), 2,
      sym_lparen,
      sym_rparen,
  [4412] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(500), 2,
      sym_lparen,
      sym_rparen,
  [4421] = 3,
    ACTIONS(408), 1,
      sym_rparen,
    ACTIONS(416), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4432] = 3,
    ACTIONS(430), 1,
      sym_rparen,
    ACTIONS(502), 1,
      anon_sym_COLONruleset,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4443] = 3,
    ACTIONS(504), 1,
      sym_unum,
    ACTIONS(506), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4454] = 3,
    ACTIONS(73), 1,
      sym_rparen,
    ACTIONS(508), 1,
      anon_sym_COLONuntil,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4465] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(510), 2,
      sym_lparen,
      sym_rparen,
  [4474] = 2,
    ACTIONS(512), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4482] = 2,
    ACTIONS(514), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4490] = 2,
    ACTIONS(516), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4498] = 2,
    ACTIONS(518), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4506] = 2,
    ACTIONS(73), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4514] = 2,
    ACTIONS(130), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4522] = 2,
    ACTIONS(520), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4530] = 2,
    ACTIONS(522), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4538] = 2,
    ACTIONS(524), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4546] = 2,
    ACTIONS(526), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4554] = 2,
    ACTIONS(124), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4562] = 2,
    ACTIONS(248), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4570] = 2,
    ACTIONS(528), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4578] = 2,
    ACTIONS(462), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4586] = 2,
    ACTIONS(408), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4594] = 2,
    ACTIONS(522), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4602] = 2,
    ACTIONS(530), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4610] = 2,
    ACTIONS(532), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4618] = 2,
    ACTIONS(534), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4626] = 2,
    ACTIONS(534), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4634] = 2,
    ACTIONS(536), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4642] = 2,
    ACTIONS(538), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4650] = 2,
    ACTIONS(540), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4658] = 2,
    ACTIONS(542), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4666] = 2,
    ACTIONS(462), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4674] = 2,
    ACTIONS(398), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4682] = 2,
    ACTIONS(544), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4690] = 2,
    ACTIONS(546), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4698] = 2,
    ACTIONS(548), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4706] = 2,
    ACTIONS(550), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4714] = 2,
    ACTIONS(552), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4722] = 2,
    ACTIONS(554), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4730] = 2,
    ACTIONS(550), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4738] = 2,
    ACTIONS(556), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4746] = 2,
    ACTIONS(558), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4754] = 2,
    ACTIONS(388), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4762] = 2,
    ACTIONS(560), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4770] = 2,
    ACTIONS(562), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4778] = 2,
    ACTIONS(564), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4786] = 2,
    ACTIONS(566), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4794] = 2,
    ACTIONS(568), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4802] = 2,
    ACTIONS(570), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4810] = 2,
    ACTIONS(430), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4818] = 2,
    ACTIONS(570), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4826] = 2,
    ACTIONS(572), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4834] = 2,
    ACTIONS(574), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4842] = 2,
    ACTIONS(576), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4850] = 2,
    ACTIONS(480), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4858] = 2,
    ACTIONS(578), 1,
      anon_sym_set,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4866] = 2,
    ACTIONS(580), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4874] = 2,
    ACTIONS(472), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4882] = 2,
    ACTIONS(582), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4890] = 2,
    ACTIONS(584), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4898] = 2,
    ACTIONS(262), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4906] = 2,
    ACTIONS(586), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4914] = 2,
    ACTIONS(588), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4922] = 2,
    ACTIONS(116), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4930] = 2,
    ACTIONS(590), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4938] = 2,
    ACTIONS(592), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4946] = 2,
    ACTIONS(120), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4954] = 2,
    ACTIONS(594), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4962] = 2,
    ACTIONS(596), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4970] = 2,
    ACTIONS(598), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4978] = 2,
    ACTIONS(600), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4986] = 2,
    ACTIONS(602), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4994] = 2,
    ACTIONS(604), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5002] = 2,
    ACTIONS(606), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5010] = 2,
    ACTIONS(608), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5018] = 2,
    ACTIONS(610), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5026] = 2,
    ACTIONS(612), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5034] = 2,
    ACTIONS(126), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5042] = 2,
    ACTIONS(614), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5050] = 2,
    ACTIONS(256), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5058] = 2,
    ACTIONS(616), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5066] = 2,
    ACTIONS(522), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5074] = 2,
    ACTIONS(618), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5082] = 2,
    ACTIONS(620), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 102,
  [SMALL_STATE(4)] = 148,
  [SMALL_STATE(5)] = 194,
  [SMALL_STATE(6)] = 240,
  [SMALL_STATE(7)] = 286,
  [SMALL_STATE(8)] = 332,
  [SMALL_STATE(9)] = 378,
  [SMALL_STATE(10)] = 424,
  [SMALL_STATE(11)] = 470,
  [SMALL_STATE(12)] = 516,
  [SMALL_STATE(13)] = 562,
  [SMALL_STATE(14)] = 608,
  [SMALL_STATE(15)] = 654,
  [SMALL_STATE(16)] = 697,
  [SMALL_STATE(17)] = 742,
  [SMALL_STATE(18)] = 787,
  [SMALL_STATE(19)] = 830,
  [SMALL_STATE(20)] = 875,
  [SMALL_STATE(21)] = 918,
  [SMALL_STATE(22)] = 961,
  [SMALL_STATE(23)] = 1003,
  [SMALL_STATE(24)] = 1045,
  [SMALL_STATE(25)] = 1087,
  [SMALL_STATE(26)] = 1129,
  [SMALL_STATE(27)] = 1171,
  [SMALL_STATE(28)] = 1213,
  [SMALL_STATE(29)] = 1255,
  [SMALL_STATE(30)] = 1297,
  [SMALL_STATE(31)] = 1339,
  [SMALL_STATE(32)] = 1381,
  [SMALL_STATE(33)] = 1423,
  [SMALL_STATE(34)] = 1465,
  [SMALL_STATE(35)] = 1507,
  [SMALL_STATE(36)] = 1549,
  [SMALL_STATE(37)] = 1591,
  [SMALL_STATE(38)] = 1633,
  [SMALL_STATE(39)] = 1675,
  [SMALL_STATE(40)] = 1717,
  [SMALL_STATE(41)] = 1759,
  [SMALL_STATE(42)] = 1801,
  [SMALL_STATE(43)] = 1843,
  [SMALL_STATE(44)] = 1885,
  [SMALL_STATE(45)] = 1927,
  [SMALL_STATE(46)] = 1969,
  [SMALL_STATE(47)] = 2011,
  [SMALL_STATE(48)] = 2053,
  [SMALL_STATE(49)] = 2095,
  [SMALL_STATE(50)] = 2137,
  [SMALL_STATE(51)] = 2162,
  [SMALL_STATE(52)] = 2187,
  [SMALL_STATE(53)] = 2211,
  [SMALL_STATE(54)] = 2235,
  [SMALL_STATE(55)] = 2259,
  [SMALL_STATE(56)] = 2283,
  [SMALL_STATE(57)] = 2307,
  [SMALL_STATE(58)] = 2331,
  [SMALL_STATE(59)] = 2353,
  [SMALL_STATE(60)] = 2372,
  [SMALL_STATE(61)] = 2391,
  [SMALL_STATE(62)] = 2410,
  [SMALL_STATE(63)] = 2429,
  [SMALL_STATE(64)] = 2448,
  [SMALL_STATE(65)] = 2475,
  [SMALL_STATE(66)] = 2497,
  [SMALL_STATE(67)] = 2519,
  [SMALL_STATE(68)] = 2545,
  [SMALL_STATE(69)] = 2566,
  [SMALL_STATE(70)] = 2587,
  [SMALL_STATE(71)] = 2608,
  [SMALL_STATE(72)] = 2629,
  [SMALL_STATE(73)] = 2650,
  [SMALL_STATE(74)] = 2671,
  [SMALL_STATE(75)] = 2684,
  [SMALL_STATE(76)] = 2697,
  [SMALL_STATE(77)] = 2718,
  [SMALL_STATE(78)] = 2739,
  [SMALL_STATE(79)] = 2760,
  [SMALL_STATE(80)] = 2781,
  [SMALL_STATE(81)] = 2802,
  [SMALL_STATE(82)] = 2820,
  [SMALL_STATE(83)] = 2838,
  [SMALL_STATE(84)] = 2856,
  [SMALL_STATE(85)] = 2876,
  [SMALL_STATE(86)] = 2888,
  [SMALL_STATE(87)] = 2906,
  [SMALL_STATE(88)] = 2924,
  [SMALL_STATE(89)] = 2942,
  [SMALL_STATE(90)] = 2960,
  [SMALL_STATE(91)] = 2978,
  [SMALL_STATE(92)] = 2996,
  [SMALL_STATE(93)] = 3014,
  [SMALL_STATE(94)] = 3032,
  [SMALL_STATE(95)] = 3050,
  [SMALL_STATE(96)] = 3068,
  [SMALL_STATE(97)] = 3086,
  [SMALL_STATE(98)] = 3104,
  [SMALL_STATE(99)] = 3122,
  [SMALL_STATE(100)] = 3140,
  [SMALL_STATE(101)] = 3158,
  [SMALL_STATE(102)] = 3176,
  [SMALL_STATE(103)] = 3194,
  [SMALL_STATE(104)] = 3212,
  [SMALL_STATE(105)] = 3230,
  [SMALL_STATE(106)] = 3248,
  [SMALL_STATE(107)] = 3266,
  [SMALL_STATE(108)] = 3284,
  [SMALL_STATE(109)] = 3302,
  [SMALL_STATE(110)] = 3320,
  [SMALL_STATE(111)] = 3340,
  [SMALL_STATE(112)] = 3358,
  [SMALL_STATE(113)] = 3376,
  [SMALL_STATE(114)] = 3394,
  [SMALL_STATE(115)] = 3412,
  [SMALL_STATE(116)] = 3432,
  [SMALL_STATE(117)] = 3450,
  [SMALL_STATE(118)] = 3468,
  [SMALL_STATE(119)] = 3485,
  [SMALL_STATE(120)] = 3500,
  [SMALL_STATE(121)] = 3515,
  [SMALL_STATE(122)] = 3530,
  [SMALL_STATE(123)] = 3547,
  [SMALL_STATE(124)] = 3562,
  [SMALL_STATE(125)] = 3577,
  [SMALL_STATE(126)] = 3594,
  [SMALL_STATE(127)] = 3609,
  [SMALL_STATE(128)] = 3624,
  [SMALL_STATE(129)] = 3639,
  [SMALL_STATE(130)] = 3654,
  [SMALL_STATE(131)] = 3668,
  [SMALL_STATE(132)] = 3682,
  [SMALL_STATE(133)] = 3696,
  [SMALL_STATE(134)] = 3710,
  [SMALL_STATE(135)] = 3724,
  [SMALL_STATE(136)] = 3734,
  [SMALL_STATE(137)] = 3744,
  [SMALL_STATE(138)] = 3754,
  [SMALL_STATE(139)] = 3764,
  [SMALL_STATE(140)] = 3774,
  [SMALL_STATE(141)] = 3784,
  [SMALL_STATE(142)] = 3798,
  [SMALL_STATE(143)] = 3808,
  [SMALL_STATE(144)] = 3818,
  [SMALL_STATE(145)] = 3828,
  [SMALL_STATE(146)] = 3838,
  [SMALL_STATE(147)] = 3848,
  [SMALL_STATE(148)] = 3862,
  [SMALL_STATE(149)] = 3872,
  [SMALL_STATE(150)] = 3882,
  [SMALL_STATE(151)] = 3892,
  [SMALL_STATE(152)] = 3902,
  [SMALL_STATE(153)] = 3916,
  [SMALL_STATE(154)] = 3926,
  [SMALL_STATE(155)] = 3936,
  [SMALL_STATE(156)] = 3950,
  [SMALL_STATE(157)] = 3960,
  [SMALL_STATE(158)] = 3970,
  [SMALL_STATE(159)] = 3984,
  [SMALL_STATE(160)] = 3998,
  [SMALL_STATE(161)] = 4008,
  [SMALL_STATE(162)] = 4018,
  [SMALL_STATE(163)] = 4032,
  [SMALL_STATE(164)] = 4042,
  [SMALL_STATE(165)] = 4052,
  [SMALL_STATE(166)] = 4066,
  [SMALL_STATE(167)] = 4076,
  [SMALL_STATE(168)] = 4090,
  [SMALL_STATE(169)] = 4104,
  [SMALL_STATE(170)] = 4114,
  [SMALL_STATE(171)] = 4128,
  [SMALL_STATE(172)] = 4138,
  [SMALL_STATE(173)] = 4147,
  [SMALL_STATE(174)] = 4158,
  [SMALL_STATE(175)] = 4169,
  [SMALL_STATE(176)] = 4180,
  [SMALL_STATE(177)] = 4191,
  [SMALL_STATE(178)] = 4202,
  [SMALL_STATE(179)] = 4213,
  [SMALL_STATE(180)] = 4222,
  [SMALL_STATE(181)] = 4233,
  [SMALL_STATE(182)] = 4244,
  [SMALL_STATE(183)] = 4255,
  [SMALL_STATE(184)] = 4266,
  [SMALL_STATE(185)] = 4277,
  [SMALL_STATE(186)] = 4288,
  [SMALL_STATE(187)] = 4299,
  [SMALL_STATE(188)] = 4308,
  [SMALL_STATE(189)] = 4319,
  [SMALL_STATE(190)] = 4328,
  [SMALL_STATE(191)] = 4339,
  [SMALL_STATE(192)] = 4350,
  [SMALL_STATE(193)] = 4361,
  [SMALL_STATE(194)] = 4372,
  [SMALL_STATE(195)] = 4383,
  [SMALL_STATE(196)] = 4392,
  [SMALL_STATE(197)] = 4403,
  [SMALL_STATE(198)] = 4412,
  [SMALL_STATE(199)] = 4421,
  [SMALL_STATE(200)] = 4432,
  [SMALL_STATE(201)] = 4443,
  [SMALL_STATE(202)] = 4454,
  [SMALL_STATE(203)] = 4465,
  [SMALL_STATE(204)] = 4474,
  [SMALL_STATE(205)] = 4482,
  [SMALL_STATE(206)] = 4490,
  [SMALL_STATE(207)] = 4498,
  [SMALL_STATE(208)] = 4506,
  [SMALL_STATE(209)] = 4514,
  [SMALL_STATE(210)] = 4522,
  [SMALL_STATE(211)] = 4530,
  [SMALL_STATE(212)] = 4538,
  [SMALL_STATE(213)] = 4546,
  [SMALL_STATE(214)] = 4554,
  [SMALL_STATE(215)] = 4562,
  [SMALL_STATE(216)] = 4570,
  [SMALL_STATE(217)] = 4578,
  [SMALL_STATE(218)] = 4586,
  [SMALL_STATE(219)] = 4594,
  [SMALL_STATE(220)] = 4602,
  [SMALL_STATE(221)] = 4610,
  [SMALL_STATE(222)] = 4618,
  [SMALL_STATE(223)] = 4626,
  [SMALL_STATE(224)] = 4634,
  [SMALL_STATE(225)] = 4642,
  [SMALL_STATE(226)] = 4650,
  [SMALL_STATE(227)] = 4658,
  [SMALL_STATE(228)] = 4666,
  [SMALL_STATE(229)] = 4674,
  [SMALL_STATE(230)] = 4682,
  [SMALL_STATE(231)] = 4690,
  [SMALL_STATE(232)] = 4698,
  [SMALL_STATE(233)] = 4706,
  [SMALL_STATE(234)] = 4714,
  [SMALL_STATE(235)] = 4722,
  [SMALL_STATE(236)] = 4730,
  [SMALL_STATE(237)] = 4738,
  [SMALL_STATE(238)] = 4746,
  [SMALL_STATE(239)] = 4754,
  [SMALL_STATE(240)] = 4762,
  [SMALL_STATE(241)] = 4770,
  [SMALL_STATE(242)] = 4778,
  [SMALL_STATE(243)] = 4786,
  [SMALL_STATE(244)] = 4794,
  [SMALL_STATE(245)] = 4802,
  [SMALL_STATE(246)] = 4810,
  [SMALL_STATE(247)] = 4818,
  [SMALL_STATE(248)] = 4826,
  [SMALL_STATE(249)] = 4834,
  [SMALL_STATE(250)] = 4842,
  [SMALL_STATE(251)] = 4850,
  [SMALL_STATE(252)] = 4858,
  [SMALL_STATE(253)] = 4866,
  [SMALL_STATE(254)] = 4874,
  [SMALL_STATE(255)] = 4882,
  [SMALL_STATE(256)] = 4890,
  [SMALL_STATE(257)] = 4898,
  [SMALL_STATE(258)] = 4906,
  [SMALL_STATE(259)] = 4914,
  [SMALL_STATE(260)] = 4922,
  [SMALL_STATE(261)] = 4930,
  [SMALL_STATE(262)] = 4938,
  [SMALL_STATE(263)] = 4946,
  [SMALL_STATE(264)] = 4954,
  [SMALL_STATE(265)] = 4962,
  [SMALL_STATE(266)] = 4970,
  [SMALL_STATE(267)] = 4978,
  [SMALL_STATE(268)] = 4986,
  [SMALL_STATE(269)] = 4994,
  [SMALL_STATE(270)] = 5002,
  [SMALL_STATE(271)] = 5010,
  [SMALL_STATE(272)] = 5018,
  [SMALL_STATE(273)] = 5026,
  [SMALL_STATE(274)] = 5034,
  [SMALL_STATE(275)] = 5042,
  [SMALL_STATE(276)] = 5050,
  [SMALL_STATE(277)] = 5058,
  [SMALL_STATE(278)] = 5066,
  [SMALL_STATE(279)] = 5074,
  [SMALL_STATE(280)] = 5082,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2, 0, 0), SHIFT_REPEAT(175),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2, 0, 0),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2, 0, 0), SHIFT_REPEAT(56),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2, 0, 0), SHIFT_REPEAT(52),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2, 0, 0), SHIFT_REPEAT(53),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2, 0, 0), SHIFT_REPEAT(53),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2, 0, 0), SHIFT_REPEAT(54),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2, 0, 0), SHIFT_REPEAT(55),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callexpr, 3, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callexpr, 3, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callexpr, 4, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callexpr, 4, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_f64, 1, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_f64, 1, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symstring, 1, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symstring, 1, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 2, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 2, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 1, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 1, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 6, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 6, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 3, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 3, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 1, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 1, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 4, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 4, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 5, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 5, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema, 3, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema, 4, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat3, 2, 0, 0), SHIFT_REPEAT(64),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat3, 2, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost, 2, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat5, 2, 0, 0), SHIFT_REPEAT(181),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat5, 2, 0, 0),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat7, 2, 0, 0), SHIFT_REPEAT(126),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat7, 2, 0, 0),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat7, 2, 0, 0), SHIFT_REPEAT(142),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat6, 2, 0, 0), SHIFT_REPEAT(268),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat6, 2, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0), SHIFT_REPEAT(207),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat4, 2, 0, 0),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat4, 2, 0, 0), SHIFT_REPEAT(124),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 4, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 5, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 15, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 14, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 13, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 1, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 12, 0, 0),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top_parens, 2, 0, 0),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 11, 0, 0),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 10, 0, 0),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, 0, 0),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 9, 0, 0),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 5, 0, 0),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 8, 0, 0),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 8, 0, 0),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4, 0, 0),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 6, 0, 0),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 7, 0, 0),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 6, 0, 0),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 7, 0, 0),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identsort, 4, 0, 0),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1, 0, 0),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 4, 0, 0),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 5, 0, 0),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 5, 0, 0),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 5, 0, 0),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 1, 0, 0),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 3, 0, 0),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [572] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
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
