#include <bits/stdc++.h>
using namespace std;

bool isEraseLikeStrOK(string str) {
  if (str == "") return true;

  try {
    if (str.substr(0, 3) == "ere") {
      str = str.substr(2);
    }
    else if (str.substr(0, 3) != "era") {
      return false;
    }

    while(str.substr(0, 5) == "erase") {
      if (str.substr(0, 6) == "eraser") {
        str = str.substr(6);
      }
      else {
        str = str.substr(5);
      }
    }

    if (str == "") {
      return true;
    }

    return false;
  }
  catch (exception e)
  {
    return false;
  }
}

int main() {
  string s;
  cin >> s;

  vector<int> eraseLikeStrIndex(s.size() / 5);
  int addCount = 0;

  while(s.find("dream") != -1) {
    eraseLikeStrIndex.at(addCount) = s.find("dream");
    addCount++;
  }

  vector<string> eraseLikeStrList(addCount);
  for (int i = 0; i < addCount; i++) {
    if (i == addCount - 1) {
      eraseLikeStrList.at(i) = s.substr(eraseLikeStrIndex.at(i) + 5);
    }
    else {
      eraseLikeStrList.at(i) = s.substr(eraseLikeStrIndex.at(i) + 5, eraseLikeStrIndex.at(i + 1) - eraseLikeStrIndex.at(i) - 5);
    }
  }

  for (int i = 0; i < addCount; i++) {
    if (isEraseLikeStrOK(eraseLikeStrList.at(i)) == false) {
      cout << "NO" << endl;
      return 0;
    }
  }

  cout << "YES" << endl;
  return 0;
}
