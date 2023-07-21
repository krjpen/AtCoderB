#include <bits/stdc++.h>
using namespace std;

int main() {
  int n = 64;
  int a;
  int i, j;
  unsigned long long int count = 0;
  unsigned long long int sum = 0;

  for (i = 0; i < n; i++) {
    cin >> a;
    if (a == 1) {
      count = 1;
      for (j = 0; j < i; j++) {
        count = count * 2;
      }
      sum += count;
    }
  }

  cout << sum << endl;
}
