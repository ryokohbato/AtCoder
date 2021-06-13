#include<bits/stdc++.h>
using namespace std;

long long getGCD(long long a, long long b)
{
  if (b == 0) return a;

  return getGCD(b, a % b);
}

int main()
{
  long long n1, n2;
  while(cin >> n1 >> n2){
    long gcd = getGCD(n1, n2);

    cout << gcd << " " << n1 * n2 / gcd << endl;
  }

  return 0; 
}