#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a;
  cin >> n;
  int i;
  vector<bool> vec(n);
  int count = 0;

  for (i = 0; i < n; i++) {
    vec.at(i) = true;
  }

  for (i = 0; i < n; i++) {
    cin >> a;
    if (vec.at(i) == true) {
      vec.at(a-1) = false;
    }
  }

  for (i = 0; i < n; i++) {
    // cout << vec.at(i) << endl;
    if (vec.at(i) == true) {
      count++;
    }
  }

  cout << count << endl;

  for (i = 0; i < n; i++) {
    if (vec.at(i) == true) {
      cout << i + 1 << " ";
    }
  }
}
