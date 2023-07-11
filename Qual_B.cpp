#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  string s;
  int i;
  cin >> n >> k >> s;
  int count = 0;
  vector<char> vec;

  for (i = 0; i < n; i++) {
    if (s.at(i) == 'o') {
      if (count == k) {
        for (i = i; i < n; i++) {
          vec.push_back('x');
        }
        break;
      }
      vec.push_back('o');
      count++;
    }
    if (s.at(i) == 'x') {
      vec.push_back('x');
    }
  }

  for (i = 0; i < n; i++) {
    cout << vec.at(i);
  }
}
