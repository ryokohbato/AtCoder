#include <bits/stdc++.h>
using namespace std;

// x�Ԃ̑g�D���e�g�D�ɒ�o���閇����Ԃ�
// children�͑g�D�̊֌W��\��2�����z��(�Q�Ɠn��)
int count_report_num(vector<vector<int>> &children, int x) {
  // (�����ɒǋL���čċA�֐�����������)
  // �q�g�D���Ȃ��ꍇ
  if (children.at(x).size() == 0) return 1;

  int sum = 0;

  for (int c : children.at(x)) {
    // (c�ɂ��Ă̏���)
    sum += count_report_num(children, c);
  }

  return sum + 1;
}

// ����ȍ~�̍s�͕ύX���Ȃ��Ă悢

int main() {
  int N;
  cin >> N;

  vector<int> p(N);  // �e�g�D�̐e�g�D�������z��
  p.at(0) = -1;  // 0�ԑg�D�̐e�g�D�͑��݂��Ȃ��̂�-1�����Ă���
  for (int i = 1; i < N; i++) {
    cin >> p.at(i);
  }

  // �g�D�̊֌W����2�����z������
  vector<vector<int>> children(N);  // ����g�D�̎q�g�D�̔ԍ��ꗗ
  for (int i = 1; i < N; i++) {
    int parent = p.at(i);  // i�Ԃ̐e�g�D�̔ԍ�
    children.at(parent).push_back(i);  // parent�̎q�g�D�ꗗ��i�Ԃ�ǉ�
  }

  // �e�g�D�ɂ��āA�������o��
  for (int i = 0; i < N; i++) {
    cout << count_report_num(children, i) << endl;
  }
}
