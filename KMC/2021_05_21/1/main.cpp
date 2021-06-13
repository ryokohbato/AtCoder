#include<bits/stdc++.h>
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;

  vector<int> streetCount(N, 0);

  for (int i = 0; i < M; i ++)
  {
    int a, b;
    cin >> a >> b;

    streetCount.at(a - 1)++;
    streetCount.at(b - 1)++;
  }

  for (int i = 0; i < N; i ++)
  {
    cout << streetCount.at(i) << endl;
  }
  return 0;
}