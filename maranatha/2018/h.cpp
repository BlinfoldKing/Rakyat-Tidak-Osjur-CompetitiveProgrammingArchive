/* status = time limit exceeded (TLE) */
/* possible soulution = ? */

#include <bits/stdc++.h>

using namespace std;

map <string, int> cards = {{"AS", 0}, {"2S", 0}, {"3S", 0}, {"4S", 0}, {"5S", 0}, {"6S", 0}, {"7S", 0}, {"8S", 0}, {"9S", 0}, {"10S", 0}, {"JS", 0}, {"QS", 0}, {"KS", 0},
                            {"AH", 0}, {"2H", 0}, {"3H", 0}, {"4H", 0}, {"5H", 0}, {"6H", 0}, {"7H", 0}, {"8H", 0}, {"9H", 0}, {"10H", 0}, {"JH", 0}, {"QH", 0}, {"KH", 0},
                            {"AD", 0}, {"2D", 0}, {"3D", 0}, {"4D", 0}, {"5D", 0}, {"6D", 0}, {"7D", 0}, {"8D", 0}, {"9D", 0}, {"10D", 0}, {"JD", 0}, {"QD", 0}, {"KD", 0},
                            {"AC", 0}, {"2C", 0}, {"3C", 0}, {"4C", 0}, {"5C", 0}, {"6C", 0}, {"7C", 0}, {"8C", 0}, {"9C", 0}, {"10C", 0}, {"JC", 0}, {"QC", 0}, {"KC", 0},};


template <typename Map>
bool isEqual(const Map& i_map)
  {
  return std::count_if(i_map.cbegin(), i_map.cend(), 
      [&i_map] (typename Map::const_reference v)
      { 
      return v.second == i_map.cbegin()->second; 
      }) == i_map.size();
  }


void cleanCards(map <string, int> &cards) {
    cards = {{"AS", 0}, {"2S", 0}, {"3S", 0}, {"4S", 0}, {"5S", 0}, {"6S", 0}, {"7S", 0}, {"8S", 0}, {"9S", 0}, {"10S", 0}, {"JS", 0}, {"QS", 0}, {"KS", 0},
            {"AH", 0}, {"2H", 0}, {"3H", 0}, {"4H", 0}, {"5H", 0}, {"6H", 0}, {"7H", 0}, {"8H", 0}, {"9H", 0}, {"10H", 0}, {"JH", 0}, {"QH", 0}, {"KH", 0},
            {"AD", 0}, {"2D", 0}, {"3D", 0}, {"4D", 0}, {"5D", 0}, {"6D", 0}, {"7D", 0}, {"8D", 0}, {"9D", 0}, {"10D", 0}, {"JD", 0}, {"QD", 0}, {"KD", 0},
            {"AC", 0}, {"2C", 0}, {"3C", 0}, {"4C", 0}, {"5C", 0}, {"6C", 0}, {"7C", 0}, {"8C", 0}, {"9C", 0}, {"10C", 0}, {"JC", 0}, {"QC", 0}, {"KC", 0},};
}

int main (){
    int t, n;
    string temp;

    cin >> t;
    int discard = 0;
    for (int i = 0; i < t; i++) {
        cin >> n;
        for (int j = 0; j < n; j++) {
            cin >> temp;
            if (cards[temp] == 0) {
                cards[temp] = 1;
            }
            else
                discard++;
        }
        if (isEqual(cards) && n > 0) 
            cout << "FULLHOUSE " << discard  << '\n';
        else
            cout << "INCOMPLETE" << '\n';
        cleanCards(cards);
        discard = 0;
    }

    return 0;
}