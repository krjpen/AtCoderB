#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  char vec[8][8];
  char a;
  int b;

  for (int i = 0; i < 8; i++) {
    cin >> s;
    for (int j = 0; j < 8; j++) {
      vec[i][j] = s.at(j);
    }
  }

  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (vec[i][j] == '*') {
        a = (char)j + 97;
        b = 8 - i;
        cout << a << b;
      }
    }
  }
}
