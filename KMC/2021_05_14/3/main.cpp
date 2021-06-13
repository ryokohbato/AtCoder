#include<bits/stdc++.h>
using namespace std;

int max3(int n1, int n2, int n3)
{
  return max(n1, max(n2, n3));
}

long getMaxHappiness__EndWithA(int, vector<int>&, vector<int>&, vector<int>&, vector<vector<long>>&);
long getMaxHappiness__EndWithB(int, vector<int>&, vector<int>&, vector<int>&, vector<vector<long>>&);
long getMaxHappiness__EndWithC(int, vector<int>&, vector<int>&, vector<int>&, vector<vector<long>>&);

long getMaxHappiness__EndWithA(int n, vector<int> &a, vector<int> &b, vector<int> &c, vector<vector<long>> &happinessList)
{
  if (happinessList.at(n - 1).at(0) != -1) return happinessList.at(n - 1).at(0);
  if (n == 1) return a.at(0);
  long _temp = max(getMaxHappiness__EndWithB(n - 1, a, b, c, happinessList) + a.at(n - 1), getMaxHappiness__EndWithC(n - 1, a, b, c, happinessList) + a.at(n - 1));
  happinessList.at(n - 1).at(0) = _temp;
  return _temp;
}

long getMaxHappiness__EndWithB(int n, vector<int> &a, vector<int> &b, vector<int> &c, vector<vector<long>> &happinessList)
{
  if (happinessList.at(n - 1).at(1) != -1) return happinessList.at(n - 1).at(1);
  if (n == 1) return b.at(0);
  long _temp = max(getMaxHappiness__EndWithA(n - 1, a, b, c, happinessList) + b.at(n - 1), getMaxHappiness__EndWithC(n - 1, a, b, c, happinessList) + b.at(n - 1));
  happinessList.at(n - 1).at(1) = _temp;
  return _temp;
}

long getMaxHappiness__EndWithC(int n, vector<int> &a, vector<int> &b, vector<int> &c, vector<vector<long>> &happinessList)
{
  if (happinessList.at(n - 1).at(2) != -1) return happinessList.at(n - 1).at(2);
  if (n == 1) return c.at(0);
  long _temp = max(getMaxHappiness__EndWithA(n - 1, a, b, c, happinessList) + c.at(n - 1), getMaxHappiness__EndWithB(n - 1, a, b, c, happinessList) + c.at(n - 1));
  happinessList.at(n - 1).at(2) = _temp;
  return _temp;
}

int main()
{
  int N;
  cin >> N;

  vector<int> a(N);
  vector<int> b(N);
  vector<int> c(N);

  vector<vector<long>> happinessList(N, vector<long>(3, -1));

  for (int i = 0; i < N; i++)
  {
    cin >> a.at(i);
    cin >> b.at(i);
    cin >> c.at(i);
  }

  cout << max3(getMaxHappiness__EndWithA(N, a, b, c, happinessList), getMaxHappiness__EndWithB(N, a, b, c, happinessList), getMaxHappiness__EndWithC(N, a, b, c, happinessList)) << endl;

  return 0;
}
