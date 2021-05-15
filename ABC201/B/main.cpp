#include <bits/stdc++.h>
using namespace std;

int main()
{
  map<int, string> mountainList;
  int N;
  cin >> N;

  for (int i = 0; i < N; i ++)
  {
    string mountainName;
    cin >> mountainName;

    int mountainHeight;
    cin >> mountainHeight;

    mountainList[mountainHeight] = mountainName;
  }

  int count = 0;

  for (auto m : mountainList)
  {
    if (count == N - 2)
    {
      cout << m.second << endl;
      break;
    }
    count++;
  }

  return 0;
}
