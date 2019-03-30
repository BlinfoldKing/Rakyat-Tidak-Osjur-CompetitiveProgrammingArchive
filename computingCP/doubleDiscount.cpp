#include <bits/stdc++.h>

using namespace std;

int main() {
    int id;
    cin >> id;
    
    int a, b;
    cin >> a >> b;
    
    if (id % a == 0 && id % b == 0) {
        cout << "double discount\n";
    } else if (id % a == 0) {
        cout << "drinks only\n";
    } else if (id % b == 0) {
        cout << "foods only\n";
    } else {
        cout << "no discount\n";
    }
    
    return 0;
}
