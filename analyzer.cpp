#include <bits/stdc++.h>
#include "analyzer.h"

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

const unordered_map<string, string> Tokens::mp = {
    {"(", "LParenteses"},
    {")", "RParenteses"},
    {"{", "LChave"},
    {"}", "RChave"},
    {"[", "Lcolchete"},
    {"]", "Rcolchete"},
    {"==", "EQ"},
    {"=", "Atribuicao"},
    {">=", "GEQ"},
    {"<=", "LEQ"},
    {">", "GT"},
    {"<", "LT"},
    {"!", "NEG"},
    {",", "Virgula"},
    {";", "PVirgula"},
    {"If", "IF"},
    {"+", "SUM"},
    {"-", "SUB"},
    {"*", "MULT"},
    {"/", "DIV"},
    {"%", "RESTO"},
    {"int", "INTDEF"},
    {"float", "FLOATDEF"},
    {"&&", "AND"},
    {"||", "OR"},
    {"NUM_INT", "NUM_INT"},
    {"NUM_FLOAT", "NUM_FLOAT"},
    {"!=", "DIF"},
    {"char", "CHAR_TYPE"},
    {"bool", "BOLL_TYPE"},
    {"return", "RETURN"},
    {"VAR", "VAR"}
};

void processTokens(ifstream &input, ofstream &output) {
    string s;
    while (input >> s) {
        auto it = Tokens::mp.find(s);
        if (it != Tokens::mp.end()) {
            output << it->second << ' ';
        }
    }
}
