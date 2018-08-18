/* author: Ganesha Danu Enastika[github.com/blinfoldking] */
/* status: Wrong Answer (probably due to unhandled cases) */
#include <bits/stdc++.h>

using namespace std;

vector<string> makePoli(string s) {
	vector<string> res;
	int r = sqrt(s.length());
	for (int i = 0; i < r; i++) {
		string tmp;
		for (int j = 0; j < s.length() / r; j++) {
			tmp.push_back(s[(i * r) + j]);
		}
		res.push_back(tmp);
	}
	return res;
}

void debugPrint(vector<string> ss) {
	for (int i = 0; i < ss.size(); i++) cout << ss[i] << '\n';
	cout << '\n';
}

int main() {
	int C;
	cin >> C;
	cin.ignore();
	for (int k = 0; k < C; k++) {
		string tmp;
		getline(cin, tmp);

		string s;
		for (int j = 0; j < tmp.length(); j++) {
			if ((tmp[j] >= 'a' && tmp[j] <= 'z') ||
			    (tmp[j] >= 'A' && tmp[j] <= 'Z')) {
				s.push_back(tolower(tmp[j]));
			}
		}
		vector<string> poli = makePoli(s);
		/* debugPrint(poli); */
		/* ngehandle dimensi ngaco */
		if (poli.size() < 1) {
			cout << "seriously?"
			     << "\n";
			continue;
		}
		/* cout << s << '\n'; */
		string c1r;
		string c1b;
		string cgr;
		string cgb;

		for (int i = 0; i < poli.size(); i++) {
			for (int j = 0; j < poli.size(); j++) {
				c1r.push_back(poli[i][j]);
				c1b.push_back(poli[j][i]);
				cgr.push_back(poli[poli.size() - 1 - i]
						  [poli.size() - 1 - j]);
				cgb.push_back(poli[poli.size() - 1 - j]
						  [poli.size() - 1 - i]);
			}
		}

		/* cout << */
		/* 				c1r << '\n' << */
		/* 				c1b << '\n' << */
		/* 				cgb << '\n' << */
		/* 				cgr << '\n'; */

		if (c1r == s && c1b == s && cgr == s && cgb == s)
			cout << poli.size();
		else
			cout << "seriously?";

		cout << '\n';
	}
	return 0;
}
