#include <bits/stdc++.h>
using namespace std;

int main() {
  int a;
  vector<int> v;
  
  for (int i = 0; i < 100; i++){
    cin >> a;
    v.push_back(a);
    if(a == 0){
      break;
    }
  }

  for(int i = v.size()-1; i >= 0; i--){
    cout << v.at(i) << endl;
  }
}
