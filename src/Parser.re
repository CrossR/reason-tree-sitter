/*
    Parser.re

    Stubs for bindings to the `TSParser` object
*/

type t;

// Parsers for particular syntaxes
external json: unit => t = "rets_parser_new_json";

// General parser methods
external parseString: (t, string) => Tree.t = "rets_parser_parse_string";
