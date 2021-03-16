#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;

  int result;

  if ((A + B) >= 15 && B >= 8) result = 1;
  else if ((A + B) >= 10 && B >= 3) result = 2;
  else if ((A + B) >= 3) result = 3;
  else result = 4;

  cout << result << endl;
}
