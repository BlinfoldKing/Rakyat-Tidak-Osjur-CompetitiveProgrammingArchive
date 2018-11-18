#include <bits/stdc++.h>

using namespace std;

int main() {
    int F0, F1, N;
    cin >> F0 >> F1 >> N;
    int F[N + 1];
    F[0] = F0;
    F[1] = F1;
    
    
    for (int i = 2; i <= N; i++) {
        F[i] = F[i - 1] + F[i - 2];
    }
    
    cout << F[N] << '\n';
    
}
