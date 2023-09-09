#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a;
  int i, j;
  vector<int> k;

  cin >> n;
  for (i = 0; i < n; i++) {
    cin >> a;
    k.push_back(a);
  }

  int min = *min_element(k.begin(), k.end());

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      if (min == k[j]) {
        min++;
      }
    }
  }

  cout << min << endl;
}
