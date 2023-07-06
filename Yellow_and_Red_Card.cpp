#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, Q;
  cin >> N >> Q;
  vector<int> vec(100);

  for (int i = 0; i < N; i++) {
    vec.push_back(0);
  }

  for (int i = 0; i < Q; i++) {
    int event, person;
    cin >> event >> person;

    if (event == 1) {
      vec.at(person) += 1;
    } else if (event == 2) {
      vec.at(person) += 2;
    } else {
      if (vec.at(person) > 1) {
        cout << "Yes" << endl;
      } else {
        cout << "No" << endl;
      }
    }
  }
}
