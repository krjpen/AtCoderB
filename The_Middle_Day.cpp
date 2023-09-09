#include <bits/stdc++.h>
using namespace std;

int main() {
  int m, d;
  int i, j;
  vector<int> k;
  int x = 0;
  
  cin >> m;
  for(i=0;i<m;i++){
    cin >> d;
    k.push_back(d);
    x += d;
  }
  x = (x+1) / 2;
  
  for(i=0;i<m;i++){
  x = x-k[i];
    
    if(x < 0){
      x = x+k[i];
      cout << i+1 << " " << x << endl;   
      break;
    }
    else if(x==0){
      cout << i+1 << " " << k[i] << endl;
      break;
    }
  }
  
}
