#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, p, q, a, b;
  cin >> n;
  vector<int> v;
  
  for(int i = 0; i < n; i++){
    cin >> p;
    v.push_back(p);
  }
  
  cin >> q;
  int k, t;
  
  for(int i = 0; i < q; i++){
    cin >> a >> b;
    
    for(int j = 0; j < n; j++){
      if(a == v.at(j)){
        k = j;
        break;
      }
    }
    
    for(int j = 0; j < n; j++){
      if(b == v.at(j)){
        t = j;
        break;
      }
    }
    if(k < t){
      cout << v.at(k) << endl;
    }
    else{
      cout << v.at(t) << endl;
    }
  }


}
