#include <bits/stdc++.h>
using namespace std;

int main()
{
  double a1, a2, a3;
  cin >> a1 >> a2 >> a3;

  double maxA = max(a1, max(a2, a3));
  double minA = min(a1, min(a2, a3));

  double middleA = (maxA + minA) / 2;
  if (a1 == middleA || a2 == middleA || a3 == middleA)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}
