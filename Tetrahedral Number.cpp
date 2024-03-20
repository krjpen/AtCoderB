#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  for(int i = 0; i <= n; i++){
    for(int j = 0; j <= n; j++){
      for(int l = 0; l <= n; l++){
        if(i + j + l <= n)
        cout << i << " " << j << " " << l << endl;
      }
    }
  }
}
