#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int k = 0;
  int j = 0;
  int count = 0;
  int t = 0;

  for (int i = 0; i < s.size(); i++) {
    if (i % 2 == 0 && s[i] == 'B') {
      k++;
    }
    if (i % 2 != 0 && s[i] == 'B') {
      j++;
    }
    if (s[i] == 'R') {
      count++;
    }
    
    if (count == 1 && s[i] == 'K') {
      t++;
    }
    cout << k << " " << j << " " << t << endl;
  }
  

  if (k == 1 && j == 1 && t == 1){
    cout << "Yes";
  }
  else{
    cout << "No";
  }
}
