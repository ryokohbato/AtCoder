#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> circleList(N);
  int addCount = 0;

  for (int i = 0; i < N; i++) {
    int newSize;
    cin >> newSize;
    if (count(circleList.begin(), circleList.end(), newSize) == 0) {
      circleList.at(addCount) = newSize;
      addCount++;
    }
  }

  cout << addCount << endl;
}
