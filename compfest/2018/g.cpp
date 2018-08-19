/* status = time limit exceeded (TLE) */
/* possible solution = implementing dynamic programming (DP) */

#include <bits/stdc++.h>
#define ll unsigned long long

using namespace std;

ll fpb (vector <ll> arr, vector <bool> notVisited)
{
    ll res = __gcd (arr[0], arr[1]);
    ll idx1, idx2;
    for (idx1 = 0; idx1 < arr.size(); idx1 ++) {
        for (idx2 = idx1 + 1; idx2 < arr.size(); idx2 ++) {
            ll temp = __gcd(arr[idx1], arr[idx2]);
            if ((temp > res) && ( !(notVisited[idx1]) && !(notVisited[idx2])))
                res = temp;
        }
    }
    notVisited[idx1] = false; notVisited[idx2] = false;
    return res;
}

ll fpbGreater (vector <ll> arr, ll prev, vector <bool> notVisited) {
    vector <ll> temp = arr;
    temp.push_back(prev);
    return fpb(temp, notVisited);
}

ll solution (vector<ll> arr, ll m, vector <bool> notVisited) {
    switch(m) {
        case 1 : return arr[0];
        case 2 : return fpb(arr, notVisited);
        default : {
            ll prev = fpb(arr, notVisited);
            for (ll i = 2; i < m; i++) {
                prev = fpbGreater(arr, prev, notVisited);
            }
            return prev;
        }
    }
}

int main() {
    ll t;
    cin >> t;
    ll n, m;
    for (ll i = 0; i < t; i++) {
        cin >> n >> m;
        vector <ll> arr;
        vector <bool> notVisited;
        ll temp;
        for (ll j = 0; j < n; j++) {
            cin >> temp;
            arr.push_back(temp);
            notVisited.push_back(true);
        }
        sort(arr.begin(), arr.end(), greater<ll>());
        cout << solution (arr, m, notVisited) << endl;
    }

    return 0;
}