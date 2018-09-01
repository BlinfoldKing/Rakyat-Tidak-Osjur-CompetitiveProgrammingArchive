/* author: Ganesha Danu Enastika (github.com/blinfoldking) */
/* status: Correct/Accepted */

#include <bits/stdc++.h>

using namespace std;

struct Journal {
    string title;
    string subtitle;
    string name;
    int volume;
    int issue;
    int year;
};

int compareStr(string a, string b) {
    /* -1 = less than */
    /* 0  = equal to */
    /* 1  = larger than */

	if (a == b) {
		return 0;
	} else {
        for (int i = 0; i < min(a.length(), b.length()); i++) {
                if (a[i] < b[i])
                    return -1;
                if (a[i] > b[i])
                    return 1;
        }
        if (min(a.length(), b.length()) == a.length())
            return -1;
        else
            return 1;
    }
	
};

void showJournal(struct Journal j) {
    cout << "title: " << j.title << '\n'
	 << "subtitle: " << j.subtitle << '\n'
	 << "journal info\n"
	 << "_name: " << j.name << '\n'
	 << "_volume: " << j.volume << '\n'
	 << "_issue: " << j.issue << '\n'
	 << "_publication year: " << j.year << "\n";
}

int main() {

    int N;
    cin >> N;
	

    vector<struct Journal> journals;
    for (int n = 0; n < N; n++) {
	    struct Journal j;
	    cin.ignore(numeric_limits<streamsize>::max(), '\n');
	    getline(cin, j.title);
	    getline(cin, j.subtitle);
	    getline(cin, j.name);
	    cin >> j.volume;
	    cin >> j.issue;
	    cin >> j.year;
	    journals.push_back(j);
    }


    sort(journals.begin(), journals.end(),
	    [](const Journal lhs, const Journal rhs) {
            if (compareStr(lhs.name, rhs.name) == 0) {
                if (lhs.year == rhs.year) {
                    if (lhs.volume == rhs.volume) {
                        if (lhs.issue == rhs.issue) {
                            if (compareStr(lhs.title, rhs.title) == 0) {
                                return (compareStr(lhs.subtitle, rhs.subtitle) == -1);
                            } else {
                                return compareStr(lhs.title, rhs.title) == -1;
                            }
                        } else {
                            return lhs.issue < rhs.issue;
                        }
                    } else {
                        return lhs.volume < rhs.volume;
                    }
                } else {
                    return lhs.year < rhs.year;
                }
            }
            return compareStr(lhs.name, rhs.name) == -1;
	    }
    );

    for (int n = 0; n < N; n++) {
	    showJournal(journals[n]);
        if (n < N - 1)
            cout << '\n';
    }
}
