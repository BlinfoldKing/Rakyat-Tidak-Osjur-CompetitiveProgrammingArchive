#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    if (n == 2) {
        cout << "prime\n";     
    } else {
        bool isPrime = true;
        int fac = 0;
        for (int i = 2; i <= sqrt(n); i++) {
           if (n % i == 0) {
               isPrime = false;
               fac = i;
               break;
           }
        }
        
        if (isPrime) {
            cout << "prime\n";
        } else {
            cout << "composite smallest factor: " << fac << '\n';
        }
    }
    
    return 0;
}
