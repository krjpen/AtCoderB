#include <bits/stdc++.h>
using namespace std;

int main() {
  int k, g, m;
  cin >> k >> g >> m;
  int t = g;
  int u = m;

  for (int i = 0; i < k; i++) {
    //cout << i+1 << " " ;
    if (g == t) {
      g = 0;
      //cout << g << " " << m << endl << endl;
    } else if (m == 0) {
      m = u;
       //cout << g << " " << m << endl << endl;
    } else {
      while (m > 0 && g < t) {
        g += m;
        m -= m;
      }
       //cout << g << " " << m << endl << endl;
      if (g > t) {
        m += g - t;
        g = t;
      }
       //cout << g << " " << m << endl << endl;
    }
  }

  cout << g << " " << m;
}
