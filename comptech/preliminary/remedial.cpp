/* author: Ganesha Danu Enastika (github.com/blinfoldking) */
/* status: Accepted */

#include <iostream>

using namespace std;

int main() {
				int T;
				cin >> T;

				for (int i = 0; i < T; i++) {
								int N;
								cin >> N;
								
								int res = 0;
								for (int j = 0; j < N; j++) {
												int tmp;
												cin >> tmp;

												if (tmp < 60)
																res++;
								}

								cout << res << '\n';
				}
				return 0;
}

