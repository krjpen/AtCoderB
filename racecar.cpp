#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  int i, j;
  string k;
  vector<string> vec;
  string x;
  string y;
  bool z = false;

  cin >> n;

  for (i = 0; i < n; i++) {
    cin >> k;
    vec.push_back(k);
  }

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      if (i != j) {
        x = vec.at(i) + vec.at(j);
        y = x;
        reverse(x.begin(), x.end());

        if (x == y) {
          z = true;
          break;
        } else {
          z = false;
        }
      }
    }
    if (z == true) {
      break;
    }
  }

  if (z == true) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
