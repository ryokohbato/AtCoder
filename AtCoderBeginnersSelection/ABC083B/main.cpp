#include <bits/stdc++.h>
using namespace std;

int ctoi(char c) {
  switch(c) {
    case '0': return 0;
    case '1': return 1;
    case '2': return 2;
    case '3': return 3;
    case '4': return 4;
    case '5': return 5;
    case '6': return 6;
    case '7': return 7;
    case '8': return 8;
    case '9': return 9;
    default: return 0;
  }
}

int getDigitSum(int number) {
  int sum = 0;

  string num_str = to_string(number);

  for(char c: num_str) {
    sum += ctoi(c);
  }

  return sum;
}

int main() {
  int N, A, B;
  cin >> N >> A >> B;

  int count = 0;

  for (int i = 1; i <= N; i++) {
    int digitSum = getDigitSum(i);
    if (A <= digitSum && digitSum <= B) {
      count += i;
    }
  }

  cout << count << endl;

  return 0;
}
