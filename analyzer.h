#ifndef ANALYZER
#define ANALYZER

#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

namespace Tokens {
    extern const unordered_map<string, string> mp;
}

bool handleInt(string s);
bool handleFloat(string s);
void processTokens(ifstream& input, ofstream& output);

#endif
