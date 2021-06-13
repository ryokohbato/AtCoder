#include<bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;

  vector<int> requireTimes(N);

  for (int i = 0; i < N; i ++)
  {
    cin >> requireTimes.at(i);
  }

  sort(requireTimes.begin(), requireTimes.end());
  reverse(requireTimes.begin(), requireTimes.end());

  int oven1 = 0;
  int oven2 = 0;

  for (int i = 0; i < N; i ++)
  {
    if (oven1 <= oven2)
    {
      oven1 += requireTimes.at(i);
    }
    else
    {
      oven2 += requireTimes.at(i);
    }
  }

  cout << max(oven1, oven2) << endl;

  return 0;
}