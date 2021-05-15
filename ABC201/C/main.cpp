#include <bits/stdc++.h>
using namespace std;

int main()
{
  int numberCount__require = 0;
  int numberCount__notExist = 0;
  int numberCount__unknown = 0;
  long result = 1;

  string input;
  cin >> input;
  for (int i = 0; i < 10; i ++)
  {
    if (input[i] == 'o') numberCount__require++;
    if (input[i] == 'x') numberCount__notExist++;
    if (input[i] == '?') numberCount__unknown++;
  }

  if (4 - numberCount__require < 0)
  {
    cout << 0 << endl;
    return 0;
  }

  switch (numberCount__require)
  {
  case 4:
    result = 4 * 3 * 2 * 1;
    break;

  case 3:
    result =
      3 * (4 * 3 / 2) * 2 * 1
      + 4 * 3 * 2 * numberCount__unknown;
    break;

  case 2:
    result =
      2 * 4 + (4 * 3 / 2)
      + 2 * (4 * 3 / 2) * 2 * numberCount__unknown
      + 4 * 3 * numberCount__unknown * numberCount__unknown;
    break;

  case 1:
    result =
      1
      + 4 * numberCount__unknown
      + (4 * 3 / 2) * numberCount__unknown * numberCount__unknown
      + 4 * numberCount__unknown * numberCount__unknown * numberCount__unknown;
    break;

  case 0:
    result = pow(numberCount__unknown, 4);
    break;

  default:
    break;
  }

  cout << result << endl;

  return 0;
}
