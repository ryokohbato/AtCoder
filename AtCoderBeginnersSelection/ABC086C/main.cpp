#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<vector<int>> location(N, vector<int>(2));
  vector<int> timeList(N);

  for (int i = 0; i < 3 * N; i++) {
    if (i % 3 == 0) cin >> timeList.at(i / 3);
    if (i % 3 == 1) cin >> location.at(i / 3).at(0);
    if (i % 3 == 2) cin >> location.at(i / 3).at(1);
  }

  for (int i = 0;  i < N; i++) {
    int moveLength;
    int moveTime;
    if (i == 0) {
      moveLength = abs(location.at(i).at(0)) + abs(location.at(i).at(1));
      moveTime = timeList.at(i);
    }
    else {
      moveLength
        = abs(location.at(i).at(0) - location.at(i - 1).at(0)) + abs(location.at(i).at(1) - location.at(i - 1).at(1));
      moveTime = timeList.at(i) - timeList.at(i - 1);
    }

    // unable to reach
    if (moveLength > moveTime) {
      cout << "No" << endl;
      return 0;
    }

    if (moveLength % 2 != moveTime % 2) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  return 0;
}
