#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    string detect[n];
    for(int i = 0; i < n; i++) {
        cin >> detect[i];
    }
    
    for(int i = n - 2; i >= 0; i--) {
        detect[i] = detect[i + 1] == "TRUTH" ? detect[i] 
              : (detect[i] == "TRUTH" ? "LIE" : "TRUTH");
    }
    
    cout << detect[0] << '\n';
    return 0;
}
