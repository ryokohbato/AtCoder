#include <iostream>
using namespace std;

int main() {
  int A, B, C, X;
  cin >> A >> B >> C >> X;

  int count = 0;

  for (int ai = 0; ai <= A; ai++) {
    for (int bi = 0; bi <= B; bi++) {
      for (int ci = 0; ci <= C; ci++) {
        if (500 * ai + 100 * bi + 50 * ci == X) {
          count++;
        }
      }
    }
  }

  cout << count << endl;
}
