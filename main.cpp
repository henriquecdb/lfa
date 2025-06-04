#include <bits/stdc++.h>
#include "analyzer.h"

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ifstream input("input.txt");
    ofstream output("output.txt");

    if (!input.is_open() || !output.is_open()) {
        cerr << "Error" << endl;
        return 0;
    }

    processTokens(input, output);

    return 0;
}
