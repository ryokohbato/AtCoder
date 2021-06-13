#include<bits/stdc++.h>
using namespace std;

int main()
{
  long long A, B;
  int C;
  cin >> A >> B >> C;

  if (C % 2 == 0)
  {
    if (A * A < B * B)
    {
      cout << "<" << endl;
    }
    else if (A * A > B * B)
    {
      cout << ">" << endl;
    }
    else
    {
      cout << "=" << endl;
    }
  }
  else
  {
    if (A < B)
    {
      cout << "<" << endl;
    }
    else if (A > B)
    {
      cout << ">" << endl;
    }
    else
    {
      cout << "=" << endl;
    }
  }
  return 0;
}