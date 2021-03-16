#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, Y;
  cin >> N >> Y;

  Y = Y / 1000;

  for (int oti = 0; oti <= N; oti++) {
    for (int fti = 0; fti <= N - oti; fti++) {
      if (oti + 5 * fti + 10 * (N - oti - fti) == Y) {
        cout << N - oti - fti << " " << fti << " " << oti << endl;
        return 0;
      }
    }
  }
  
  cout << "-1 -1 -1" << endl;

  return 0;
}
