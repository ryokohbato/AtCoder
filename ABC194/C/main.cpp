#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  long result = 0;
  long sum = 0;

  for (int i = 0; i < N; i++) {
    long n;
    cin >> n;
    result += n * n * N;
    sum += n;
  }

  result -= sum * sum;

  cout << result << endl;
}
