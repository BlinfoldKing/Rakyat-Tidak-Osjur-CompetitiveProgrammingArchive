#include <bits/stdc++.h>

using namespace std;

int main () {
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        if (n == 2)
            cout << "Case #" << i+1 << ": 3 5" << endl;
        else
            cout << "Case #" << i+1 << ": " <<  (n * (1 - (log2(n)-2)/4) + 3) <<
             ' ' << (n + (2 * log2(n) + 1) + 5) << '\n';
    }
    return 0;
}