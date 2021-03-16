#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> cardList(N);

  for (int i = 0; i < N; i++) {
    cin >> cardList.at(i);
  }

  sort(cardList.begin(), cardList.end());
  reverse(cardList.begin(), cardList.end());

  int AlicePoint = 0;
  int BobPoint = 0;

  for (int i = 0; i < cardList.size(); i++) {
    if (i % 2 == 0) {
      AlicePoint += cardList.at(i);
    }
    else {
      BobPoint += cardList.at(i);
    }
  }

  cout << AlicePoint - BobPoint << endl;
}
