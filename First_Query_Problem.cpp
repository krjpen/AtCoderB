#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, i;
  cin >> n;
  vector<int> vec;
  int q, t, k, x;

  for (i = 0; i < n; i++) {
    cin >> a;
    vec.push_back(a);
  }

  cin >> q;

  for (i = 0; i < q; i++) {
    cin >> t >> k;
    k = k - 1;
    if (t == 1) {
      cin >> x;
      vec.at(k) = x;
    } else if (t == 2) {
      cout << vec.at(k) << endl;
    }
  }
}
