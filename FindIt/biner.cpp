#include <bits/stdc++.h>

// status: AC

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  string solutionRoom[k];

  unsigned int i = 0;
  unsigned int x = 0;
  while (i < k) {
    bitset<20> binary(x);
    if (binary.count() % n == 0 && binary.count() > 0) {
      solutionRoom[i++] = binary.to_string();
    }
    x++;
  }

  for (int i = 20 - (n * 2); i < 20; i++) {
    cout << solutionRoom[k - 1][i];
  }
  cout << '\n';

  return 0;
}
