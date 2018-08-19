#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll doit (ll a, ll b) {
    string res;
    map <ll, ll> mp;
    mp.clear();
    
    ll rem = a%b;

    while ( (rem != 0) && (mp.find(rem) == mp.end()) ) {
        mp[rem] = res.length();

        rem = rem*10;

        ll res_part = rem / b;

        res += to_string(res_part);

        rem = rem % b;
    } 
    
    return (rem == 0) ? 0 : (res.substr(mp[rem])).length();

}

int main () {
    int t;
    ll a, b;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> a >> b;
        cout << doit (a, b) << endl;
    }
    return 0;
}