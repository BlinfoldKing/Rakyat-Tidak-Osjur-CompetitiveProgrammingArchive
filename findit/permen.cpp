/*
    Author = ehardi19
    Team = SubscriberVayuHalilintar
    Problem = Makn Permen
    Status = Wrong Answer
*/


#include <bits/stdc++.h>
#define endl '\n';

typedef unsigned long long ull;

using namespace std;

int main() {
    // ardy fist
    string win;
    ull t, x, y;
    int a, r;
    cin >> t;
    for (int idx = 0; idx < t; idx++) {
        cin >> x >> y;
        int i = 1;
        while (x > 0) {
            if (i % 2 == 1) { //ardy's turn
                if (x%y == 0) {
                    x-=y;
                } else {
                    x-=1;
                }
            } else {    //reyhan's turn
                if (x%y == 0) {
                    x-=y;
                } else {
                    x-=1;
                }
            }

            //cout << "Turn: " << i << endl;
            //cout << "Rem: " << x << endl;
            
            if (x == 0) {
                if (i % 2 == 1)
                    win = "Ardy";
                else
                    win = "Reyhan";
            }
            i++;
        }
        cout << win;
        if (idx < t-1) cout << endl;
    }
}