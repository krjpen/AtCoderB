#include <bits/stdc++.h>
using namespace std;

int main() {
  string a;
  vector<char> s;
  vector<char> t;
  int i, j;
  bool x = true;

  for (i = 0; i < 100000; i++) {
    t.push_back('o');
    t.push_back('x');
    t.push_back('x');
  }

  cin >> a;
  for (i = 0; i < a.size(); i++) {
    s.push_back(a.at(i));
  }

  for (j = 0; j < t.size(); j++) {
    for (i = 0; i < s.size(); i++) {
      if (s.at(i) != t.at(i)) {
        x = false;
        break;
      } else {
        x = true;
      }
    }
    if (x == true) {
      break;
    }
    t.erase(t.begin());
  }

  if (x == true) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
