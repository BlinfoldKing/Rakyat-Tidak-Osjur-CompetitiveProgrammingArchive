#include <bits/stdc++.h>

using namespace std;

int findFactor(int M, int C) {
    if (max(M, C) % min(M, C) == 0)
        return max(M, C);
    
    int x = 1;
    while (x % M != 0 || x % C != 0) {
        x++;
    }
    
    return x;
}

int main() {
    int M, C;
    cin >> M >> C;
    cout << findFactor(M, C) << '\n';
    
    return 0;
}
