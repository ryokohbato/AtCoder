#include<bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;

  vector<int> numList(N);
  vector<bool> isNumList(N);

  for (int i = 0; i < N; i ++)
  {
    cin >> numList.at(i);
    
    if (isNumList.at(numList.at(i) - 1))
    {
      cout << "No" << endl;
      return 0;
    }

    isNumList.at(numList.at(i) - 1) = true;
  }

  sort(numList.begin(), numList.end());

  if (numList.at(N - 1) > N)
  {
    cout << "No" << endl;
    return 0;
  }

  cout << "Yes" << endl;
  return 0;
}