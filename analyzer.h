#ifndef ANALYZER
#define ANALYZER

#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

namespace Tokens {
    extern const unordered_map<string, string> mp;
}

void processTokens(ifstream& input, ofstream& output);

#endif
