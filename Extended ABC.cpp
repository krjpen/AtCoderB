#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  for(int i = 0; i < s.size()-1; i++){
    int k = s[i];
    int t = s[i+1];
    if(k > t){
      cout << "No";
      return 0;
    }
  }
  cout << "Yes";
}
