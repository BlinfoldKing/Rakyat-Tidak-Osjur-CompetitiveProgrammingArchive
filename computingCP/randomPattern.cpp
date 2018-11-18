#include <bits/stdc++.h>

using namespace std;

int main() {
    int m, a, c, x0;
    cin >> m >> a >> c >> x0;
    
    cout << x0 << ' '; 
    int prev = x0;
    int curr = (a * prev + c) % m;
    while (curr != x0) {
       cout << curr << ' ';
        
        prev = curr;
        curr = (a * prev + c) % m;
    }
    
    return 0;
}
