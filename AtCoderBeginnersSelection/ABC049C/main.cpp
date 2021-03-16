#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  while(s.size() > 0) {
    if (s.substr(s.size() - 3) == "eam") {
      //dream
      if (s.size() >= 5 && s.substr(s.size() - 5) == "dream") {
        s = s.substr(0, s.size() - 5);
      }
      else {
        cout << "NO" << endl;
        return 0;
      }
    }
    else if (s.substr(s.size() - 3) == "mer") {
      //dreamer
      if (s.size() >= 7 && s.substr(s.size() - 7) == "dreamer") {
        s = s.substr(0, s.size() - 7);
      }
      else {
        cout << "NO" << endl;
        return 0;
      }
    }
    else if (s.substr(s.size() - 3) == "ase") {
      //erase
      if (s.size() >= 5 && s.substr(s.size() - 5) == "erase") {
        s = s.substr(0, s.size() - 5);
      }
      else {
        cout << "NO" << endl;
        return 0;
      }
    }
    else if (s.substr(s.size() - 3) == "ser") {
      //eraser
      if (s.size() >= 6 && s.substr(s.size() - 6) == "eraser") {
        s = s.substr(0, s.size() - 6);
      }
      else {
        cout << "NO" << endl;
        return 0;
      }
    }
    else {
      cout << "NO" << endl;
      return 0;
    }
  }

  cout << "YES" << endl;
  return 0;
}