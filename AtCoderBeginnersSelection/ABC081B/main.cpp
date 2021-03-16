#include <bits/stdc++.h>
using namespace std;

int divideCount(int number) {
  int count = 0;
  while(number % 2 == 0) {
    count++;
    number = number / 2;
  }
  return count;
}

int main() {
  int N;
  cin >> N;

  vector<int> A_divide_count(N);

  for (int i = 0; i < N; i++) {
    int currentA;
    cin >> currentA;

    A_divide_count.at(i) = divideCount(currentA);
  }

  sort(A_divide_count.begin(), A_divide_count.end());
  
  cout << A_divide_count.at(0) << endl;
  
  return 0;
}
