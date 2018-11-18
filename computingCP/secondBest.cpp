#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int res = 0;
    int currBest = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        
        if (x > currBest || i == 0) {
            res = currBest;
            currBest = x;
        } else if (x != currBest && x > res) {
            res = x;
        }
    }
    
    cout << res << '\n';
    
}
