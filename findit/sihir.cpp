/*
    Author = ehardi19
    Team = SubscriberVayuHalilintar
    Problem = Serbuk Sihir
    Status = Wrong Answer
*/

#include<bits/stdc++.h>

typedef unsigned long long ull;

using namespace std;

void doit (ull x, ull p, ull s, ull u) {
    ull tot_s, sisa;
    for (ull i = p; i >= 1; i--) {
        tot_s = i*s;

        sisa = tot_s - u;

        if (sisa % x == 0) {
            cout << "YA " << i;
            return;
        }
    }
    
    cout << "TIDAK";
}

int main() {
    ull t;
    ull x, p, s, u;

    cin >> t;
    for (ull i = 0; i < t; i++) {
        cin >> x >> p >> s >> u;
        doit(x, p, s, u);
        if (i < t-1) cout << endl;
    }
    return 0;
}