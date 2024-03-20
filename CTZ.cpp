#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  vector<int> v;
  int k = n / 2;
  v.push_back(n % 2);

  while (k >= 1) {
    v.push_back(k % 2);
    k = k / 2;
  }
  v.push_back(k);  
  // reverse(begin(v), end(v));

  int counter = 0;
  for (int i = 0; i < v.size(); i++){
    if(v[i] == 0){
      counter++;
    }
    else{
      break;
    }
  }

  cout << counter << endl;
}
