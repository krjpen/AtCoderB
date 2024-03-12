#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, s, t;
  cin >> n;
  vector<long long> v;

  for (int i = 0; i < n; i++) {
    cin >> a;
    v.push_back(a);
  }

  
  for (int i = 0; i < n - 1; i++) {
    cin >> s >> t;
    
    long long x = v.at(i) / s;
    v.at(i) -= x * s;
    v.at(i+1) += x * t;
    
  }

  cout << v.at(n - 1) << endl;
}
