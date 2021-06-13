#include<bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;

  long sum = 0;

  for (int i = 0; i < N; i ++)
  {
    int A;
    cin >> A;

    if (A > 10) sum += A - 10;
  }

  cout << sum << endl;

  return 0;
}