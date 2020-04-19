/*
     JsonScopeConverter.re

     JSON scope converter.
 */

let json = {|
{
  "name": "JSON",
  "scopeName": "source.json",
  "type": "tree-sitter",
  "parser": "tree-sitter-json",
  "fileTypes": [
    "avsc",
    "babelrc",
    "bowerrc",
    "composer.lock",
    "geojson",
    "gltf",
    "htmlhintrc",
    "ipynb",
    "jscsrc",
    "jshintrc",
    "jslintrc",
    "json",
    "jsonl",
    "jsonld",
    "languagebabel",
    "ldj",
    "ldjson",
    "Pipfile.lock",
    "schema",
    "stylintrc",
    "template",
    "tern-config",
    "tern-project",
    "tfstate",
    "tfstate.backup",
    "topojson",
    "webapp",
    "webmanifest"
  ],
  "folds": [
    {
      "start": {
        "index": 0,
        "type": "{"
      },
      "end": {
        "index": -1,
        "type": "}"
      }
    },
    {
      "start": {
        "index": 0,
        "type": "["
      },
      "end": {
        "index": -1,
        "type": "]"
      }
    }
  ],
  "scopes": {
    "value": "source.json",
    "object": "meta.structure.dictionary.json",
    "string": "string.quoted.double",
    "string_content": [
      {
        "match": "^http://",
        "scopes": "markup.underline.link.http.hyperlink"
      },
      {
        "match": "^https://",
        "scopes": "markup.underline.link.https.hyperlink"
      }
    ],
    "pair > string:nth-child(0)": "support.type.property-name.json",
    "escape_sequence": "constant.character.escape",
    "number": "constant.numeric",
    "true": "constant.language",
    "false": "constant.language",
    "null": "constant.language",
    "\"{\"": "punctuation.definition.dictionary.begin",
    "\"}\"": "punctuation.definition.dictionary.end",
    "\":\"": "punctuation.separator.dictionary.key-value",
    "object > \",\"": "punctuation.separator.dictionary.pair",
    "array > \",\"": "punctuation.separator.array",
    "\"[\"": "punctuation.definition.array.begin",
    "\"]\"": "punctuation.definition.array.end",
    "\"\\\"\"": "punctuation.definition.string.json"
  }
}
|};
