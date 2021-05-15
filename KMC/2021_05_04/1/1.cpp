#include<bits/stdc++.h>
using namespace std;

int getMinimumCost(int n, vector<int> &h, vector<int> &costList)
{
  if (costList.at(n - 1) != -1) return costList.at(n - 1);

  if (n == 1) return 0;
  if (n == 2) return abs(h.at(1) - h.at(0));
  if (n == 3) return min(abs(h.at(2) - h.at(0)), abs(h.at(2) - h.at(1)) + abs(h.at(1) - h.at(0)));

  costList.at(n - 1) = min(getMinimumCost(n - 1, h, costList) + abs(h.at(n - 2) - h.at(n - 1)), getMinimumCost(n - 2, h, costList) + abs(h.at(n - 3) - h.at(n - 1)));
  return costList.at(n - 1);
}

int main()
{
  int N;
  cin >> N;

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

  cout << getMinimumCost(N, h, costList) << endl;

  return 0;
}
