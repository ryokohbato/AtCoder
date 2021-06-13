#include<bits/stdc++.h>
using namespace std;

// m^n
long long extPow(long long m, long long n)
{
  if (n == 1) return m;

  long long n_surplus = n % 2;

  long long answer_half = extPow(m, n / 2);

  long long answer = 1;
  answer = (answer_half * answer_half % 1000000007);

  if (n_surplus == 1) answer = answer * m % 1000000007;

  return answer;
}

int main()
{
  long long m, n;
  cin >> m >> n;
  cout << extPow(m, n) << endl;
  return 0;
}