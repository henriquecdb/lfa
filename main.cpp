#include <bits/stdc++.h>
#include "analyzer.h"

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main(int argc, char *argv[])
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    if (argc < 2) {
        cout << "É necessário um arquivo de entrada ao rodar o código." << endl;
        return 0;
    }

    ifstream input(argv[1]);
    ofstream output("output.txt");

    if (!input.is_open() || !output.is_open()) {
        cerr << "Error" << endl;
        return 0;
    }

    processTokens(input, output);

    return 0;
}
