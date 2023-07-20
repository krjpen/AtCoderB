#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int i, j;
  int a;
  vector<int> vec;
  int k;

  for (i = 0; i < n; i++) {
    cin >> a;
    vec.push_back(a);
  }

  for (i = 0; i < n - 1; i++) {
    k = vec.at(i);
    if (k < vec.at(i + 1)) {
      while (k != vec.at(i + 1)) {
        cout << k << endl;
        k = k + 1;
      }
      if (i == n - 2) {
        cout << vec.at(i + 1);
      }
    }

    else {
      while (k != vec.at(i + 1)) {
        cout << k << endl;
        k = k - 1;
      }
      if (i == n - 2) {
        cout << vec.at(i + 1);
      }
    }
  }
}
