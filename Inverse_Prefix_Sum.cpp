#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, s;
  vector<int> vec;
  int i, j;
  cin >> n;
  int sum = 0;

  for (i = 0; i < n; i++) {
    cin >> s;
    vec.push_back(s);
  }

  cout << vec.at(0) << endl;

  for (i = 0; i < n - 1; i++) {
    sum = vec.at(i + 1) - vec.at(i);
    cout << sum << endl;
  }
}
