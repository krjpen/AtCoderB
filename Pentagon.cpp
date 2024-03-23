#include <bits/stdc++.h>
using namespace std;

int main() {
  char s1, s2, t1, t2;
  cin >> s1 >> s2 >> t1 >> t2;
  int a = 4;
  int b = 1;
  int c = 3;
  int d = 2;

  int t, k;
  
  if(s1>s2){
    t = s1 - s2;
  }
  else{
    t = s2 - s1;
  }

  if(t1>t2){
    k = t1 - t2;
  }
  else{
    k = t2 - t1;
  }

  if((t==a || t==b) && (k==a || k==b)){
    cout << "Yes";
  }
  else if((t==c || t==d) && (k==c || k==d)){
    cout << "Yes";
  }
  else{
    cout << "No";
  }
}
