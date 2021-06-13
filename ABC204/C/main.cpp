#include<bits/stdc++.h>
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;
  vector<bitset<2000>> reachableList(N);

  for (int i = 0; i < M; i ++)
  {
    int A, B;
    cin >> A >> B;
    reachableList.at(A - 1).set(B - 1, 1);
  }

  for (int i = 0; i < N; i ++)
  {
    for (int j = 0; j < N; j ++)
    {
      if (i == j)
      {
        reachableList.at(i).set(i, 1);
      }
      else if (reachableList.at(i).test(j))
      {
        reachableList.at(i) = reachableList.at(i) | reachableList.at(j);
      }
    }
  }

  for (int i = 0; i < N; i ++)
  {
    for (int j = 0; j < N; j ++)
    {
      if (i == j)
      {
        reachableList.at(i).set(i, 1);
      }
      else if (reachableList.at(i).test(j))
      {
        reachableList.at(i) = reachableList.at(i) | reachableList.at(j);
      }
    }
  }

  long sum = 0;

  for (int i = 0; i < N; i ++)
  {
    for (int j = 0; j < N; j ++)
    {
      if (reachableList.at(i).test(j))
      {
        sum++;
      }
    }
  }

  cout << sum << endl;

  return 0;
}