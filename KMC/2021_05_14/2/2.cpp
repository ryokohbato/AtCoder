#include<bits/stdc++.h>
using namespace std;

int getMinimumCost(int n, int k, vector<int> &h, vector<int> &costList)
{
  if (costList.at(n - 1) != -1) return costList.at(n - 1);

  if (n <= k + 1) return abs(h.at(n - 1) - h.at(0));

  int _minCost = -1;
  for (int i = 0; i < k; i ++)
  {
    if (i == 0)
    {
      _minCost = getMinimumCost(n - 1, k, h, costList) + abs(h.at(n - 2) - h.at(n - 1));
    }
    else
    {
      int _temp = getMinimumCost(n - 1 - i, k, h, costList) + abs(h.at(n - 2 - i) - h.at(n - 1));
      if (_minCost > _temp)
      {
        _minCost = _temp;
      }
    }
  }

  return costList.at(n - 1) = _minCost;
  return _minCost;
}

int main()
{
  int N;
  cin >> N;

  int K;
  cin >> K;

  vector<int> costList(N);
  for(int i = 0; i < N; i ++)
  {
    costList.at(i) = -1;
  }

  vector<int> h(N);

  for(int i = 0; i < N; i ++)
  {
    cin >> h.at(i);
  }

  cout << getMinimumCost(N, K, h, costList) << endl;

  return 0;
}
