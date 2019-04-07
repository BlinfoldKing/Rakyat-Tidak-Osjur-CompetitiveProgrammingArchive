/*
    Author = ehardi19
    Team = RakyatTidakOsjur
    Problem = FiPrima
    Status = Wrong-Answer
*/

#include<bits/stdc++.h>

using namespace std;

vector<int> first;
vector<int> second;
int n;

bool may(int prob) {
    for (auto e: first) {
        if (e > prob) return 1;
    }
    return 0;
}

void solve() {
    vector<int> v(first.size()*2);
    vector<int>::iterator it;

    sort(first.begin(), first.end());
    sort(second.begin(), second.end());

    it = std::set_intersection(first.begin(), first.end(), second.begin(), second.end(), v.begin());

    v.resize(it-v.begin());
    if (v.size() == 0)
        cout << "NOT EXIST" << endl;
    else if (v.size() > 1) {
        cout << "EXIST" << endl;
    } else if (v.size() == 1){
        if(may(v[0]))
            cout << "MAY EXIST" << endl;
    }

    first.clear();
    second.clear();
}
int main() {
    int t;
    cin >> t;
    for (int i= 0; i < t; i++) {
        cin >> n;
        for (int j = 0; j < n; j++) {
            int tmp;
            cin >> tmp;
            first.push_back(tmp);
        }
        for (int j = 0; j < n; j++) {
          int tmp;
          cin >> tmp;
          second.push_back(tmp);
        }
        cout << "Case #"<< i+1 <<": ";
        solve();
    }
    return 0;
}