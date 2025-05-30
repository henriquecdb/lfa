#include <bits/stdc++.h>
#include "analyzer.h"

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    auto it = Tokens::mp.find("LParenteses");
    if (it != Tokens::mp.end()) {
        cout << "Valor: " << it->first << " -> " << it->second << endl;
    } else {
        cout << "Not found" << endl;
    }

    return 0;
}
