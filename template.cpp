#include <bits/stdc++.h>

using namespace std;

#define scanI(x) scanf("%d", &x)
#define scanC(x) scanf("%c", &x)
#define readln(x) getline(cin, x)
#define read(x) cin >> x
#define Repeat(i, a, b) for(int i = a; i < b; i++)
#define ForEach(it, obj) for(auto it = obj.begin(); it != obj.end(); i++)
#define Within(X, A, B) (A >= X && X <= B)
#define PB(a) push_back(a)
#define write(s) cout << s
#define writeln(s) cout << s << '\n'
#define len(v) v.length()

typedef vector<int> vi;
typedef map<string, int> mapSI; 
typedef map<int, int> mapII; 
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;


int main () {

    string x;
    readln(x);

    Repeat(i, 0, 10) { 
        writeln("hello " << x << " " << len(x) << " " << i);
    }

    return 0;

}
