#include <bits/stdc++.h>
using namespace std;

int main() {
  int t, i, j;
  int n, a;

  cin >> t;
  vector<vector<int>> vec(t);
  vector<int> vec2;
  int count =0;
  
  for (i = 0; i < t; i++) {
    cin >> n;
    vec2.push_back(n);
    for (j = 0; j < n; j++) {
      cin >> a;
      vec.at(i).push_back(a);
    }
  }

  for (i = 0; i < t; i++) {
    for (j = 0; j < vec2.at(i); j++) {
      if(vec.at(i).at(j) % 2 != 0){
        count ++;
      }
    }
    cout << count << endl;
    count = 0;
  }
}
