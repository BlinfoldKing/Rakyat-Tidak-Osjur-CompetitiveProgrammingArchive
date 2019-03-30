#include <bits/stdc++.h>

// status: segvault
// cause: o(n^2) memory complexity

using namespace std;

int main() {
  int T;
  cin >> T;
 while (T--) {
    long N, B, K;
    cin >> N  >> B >> K;
    long long map[N][N];
    long i = 0;
    long j = 0;
    long count = 1;
    // for (int i = 0; i < N; i++) {
    //   for (int j = 0; j < N; j++) {
    //     map[i][j] = 0;
    //   }
    // }
    bool mode = false;
    map[i][j++] = count++;

    while (i != B || j != K) {
      if (i - 1 >= 0 && j + 1 < N && mode) {
        map[i--][j++] = count++;
      } else if (i + 1 < N && j - 1 >= 0 && !mode) {
        map[i++][j--] = count++;
      } else {
        if (mode) {
          if (j + 1 < N) {
            map[i][j++] = count++;
          } else {
            map[i++][j] = count++;
          }
          mode = false;
        } else {
          if (i + 1 < N) {
            map[i++][j] = count++;
          } else {
            map[i][j++] = count++;
          }
          mode = true;
        }
      }
    }
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        cout << map[i][j] << ' ';
      }
      cout << '\n';
    }

    cout << map[B-1][K-1] << '\n';

  }
  return 0;
}
