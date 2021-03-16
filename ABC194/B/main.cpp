#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> taskATime(N);
  vector<int> taskBTime(N);

  for (int i = 0; i < 2 * N; i++) {
    if (i % 2 == 0) cin >> taskATime.at(i / 2);
    else cin >> taskBTime.at(i / 2);
  }

  vector<int> taskATime_origin = taskATime;
  vector<int> taskBTime_origin = taskBTime;

  sort(taskATime.begin(), taskATime.end());
  sort(taskBTime.begin(), taskBTime.end());

  auto shortestIndexA = find(taskATime_origin.begin(), taskATime_origin.end(), taskATime.at(0));
  auto shortestIndexB = find(taskBTime_origin.begin(), taskBTime_origin.end(), taskBTime.at(0));

  if (distance(taskATime_origin.begin(), shortestIndexA) == distance(taskBTime_origin.begin(), shortestIndexB)) {
    cout << min({taskATime.at(0) + taskBTime.at(0), max(taskATime.at(0), taskBTime.at(1)), max(taskATime.at(1), taskBTime.at(0))}) << endl;
  }
  else {
    cout << max(taskATime.at(0), taskBTime.at(0)) << endl;
  }
}