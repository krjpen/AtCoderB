#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, i;
  cin >> n;
  vector<int> vec;

  for (i = 0; i < n; i++) {
    cin >> a;
    vec.push_back(a);
  }

  int t = *max_element(vec.begin(), vec.end());
  int b = 0;
  for (i = 0; i < n; i++) {
    if (vec.at(i) == t) {
      b++;
    }
  }
  for (i = 0; i < b; i++) {
    vec.erase(max_element(vec.begin(), vec.end()));
  }
  
  int k = *max_element(vec.begin(), vec.end());

  cout << k;
}
