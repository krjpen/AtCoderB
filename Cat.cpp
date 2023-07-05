#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n;
  cin >> s;
  
  for (int i = 0; i < n-1; i++) {
    if (s.at(i) == 'n' && s.at(i + 1) == 'a') {
      cout << "ny";
    } else {
      cout << (s.at(i));
    }
  }
  cout << (s.at(n-1));
}
