#include <bits/stdc++.h>
using namespace std;

struct Point {
  int h;
  int w;
};

void fillReachable(vector<vector<char>> &townMap, vector<vector<bool>> &reachable, int startH, int startW) {
  if (startH < 0 || townMap.size() - 1 < startH || startW < 0 || townMap.at(0).size() - 1 < startW) return;
  if (reachable[startH][startW]) return;
  if (townMap[startH][startW] == '#') return;

  reachable[startH][startW] = true;

  fillReachable(townMap, reachable, startH - 1, startW);
  fillReachable(townMap, reachable, startH + 1, startW);
  fillReachable(townMap, reachable, startH, startW - 1);
  fillReachable(townMap, reachable, startH, startW + 1);
}

int main() {
  int H, W;
  cin >> H >> W;

  vector<vector<char>> townMap(H, vector<char>(W));
  Point startPoint, goalPoint;

  for (int hi = 0; hi < H; hi ++) {
    for (int wi = 0; wi < W; wi ++) {
      cin >> townMap[hi][wi];
      if (townMap[hi][wi] == 's') {
        startPoint.h = hi;
        startPoint.w = wi;
      }
      else if (townMap[hi][wi] == 'g') {
        goalPoint.h = hi;
        goalPoint.w = wi;
      }
    }
  }

  vector<vector<bool>> reachable(H, vector<bool>(W, false));
  fillReachable(townMap, reachable, startPoint.h, startPoint.w);

  if (reachable[goalPoint.h][goalPoint.w] == true) {
    cout << "Yes" << endl;
    return 0;
  }

  cout << "No" << endl;
}
