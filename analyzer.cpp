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

bool handleFloat(string s) {
    if (s.empty()) return false;
    
    bool hasDot = false;
    
    for (auto c : s) {
        if (c == '.') {
            if (hasDot) return false;
            hasDot = true;
        } else if (!isdigit(c)) {
            return false;
        }
    }
    
    return hasDot && s.length() > 1;
}

bool handleInt(string s) {
    if (s.empty()) return false;
    
    for (auto c : s)
        if (!isdigit(c)) return false;
    
    return true;
}

bool handleVar(string s) {
    if (s.empty() || s.size() < 3) return false;

    return s.substr(0, 3) == "VAR";
}

void processTokens(ifstream &input, ofstream &output) {
    string s;
    while (input >> s) {
        if (handleInt(s)) {
            output << "NUM_INT" << ' ';
        } else if (handleFloat(s)) {
            output << "NUM_FLOAT" << ' ';
        } else if (handleVar(s)) {
            output << "VAR" << ' ';
        } else {
            auto it = Tokens::mp.find(s);
            if (it != Tokens::mp.end()) {
                output << it->second << ' ';
            }
        }
    }
}
