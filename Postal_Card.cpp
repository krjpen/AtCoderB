#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  string s;
  string t;
  cin >> n >> m;
  int i, j;
  vector<string> t1;
  vector<string> s1;
  int count = 0;

  for (i = 0; i < n; i++) {
    cin >> s;
    s = s.substr(3, 3);
    s1.push_back(s);
  }

  for (i = 0; i < m; i++) {
    cin >> t;
    t1.push_back(t);
  }

  for (i = 0; i < s1.size(); i++) {

    for (j = 0; j < t1.size(); j++) {
      if (s1.at(i) == t1.at(j)) {
        count++;
        break;
      }
    }
  }

  cout << count << endl;
}
