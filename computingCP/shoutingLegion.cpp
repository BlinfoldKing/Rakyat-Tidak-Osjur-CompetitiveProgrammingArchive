#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    for (int i = 1; i <= N; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            if (i % 3 == 0)
                cout << "HEYA";
            if (i % 5 == 0)
                cout << "HOOO";
        } else {
            cout << i;
        }
        
        if (i != N) {
            cout << " ";
        }
    }
    
    cout << '\n';
    return 0;
}
