#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int x[999], y[999];

  for (int i = 1; i < n + 1; i++) {
    cin >> x[i] >> y[i];
  }

  int a = 0;
  int k;

  for (int i = 1; i < n + 1; i++) {
    for (int j = 1; j < n + 1; j++) {
      if (a <
          ((x[i] - x[j]) * (x[i] - x[j])) + ((y[i] - y[j]) * (y[i] - y[j]))) {
        a = ((x[i] - x[j]) * (x[i] - x[j])) + ((y[i] - y[j]) * (y[i] - y[j]));
        k = j;
      }
    }
    cout << k << endl;
    a = 0;
  }
}
