#include <bits/stdc++.h>
using namespace std;

int main() {
  int q;
  cin >> q;
  int a, b;
  vector<int> v;

  for (int i = 0; i < q; i++) {
    cin >> a >> b;
    if (a == 1) {
      v.push_back(b);
    }
    else {
      cout << v.at(v.size()-b) << endl;
    }
  }
}
