#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w, n;
  cin >> h >> w >> n;
  vector<vector<char>> v(100, vector<char>(100));

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      v.at(i).at(j) = '.';
    }
  }

  int t = 0;
  int k = 0;
  int x = 0;

  for (int i = 0; i < n; i++) {
    if (v.at(t).at(k) == '.' && x == 0) {
      v.at(t).at(k) = '#';
      if (k == w - 1) {
        k = 0;
      } else {
        k++;
      }
      x++;
    } else if (v.at(t).at(k) == '.' && x == 1) {
      v.at(t).at(k) = '#';
      if (t == h - 1) {
        t = 0;
      } else {
        t++;
      }
      x++;
    } else if (v.at(t).at(k) == '.' && x == 2) {
      v.at(t).at(k) = '#';
      if(k==0){
        k=w-1;
      }
      else k--;
      x++;
    } else if (v.at(t).at(k) == '.' && x == 3) {
      v.at(t).at(k) = '#';
      if (t == 0) {
        t = h - 1;
      } else {
        t--;
      }
      x = 0;
    }

    else if (v.at(t).at(k) == '#' && x == 0) {
      v.at(t).at(k) = '.';
      if (k == 0) {
        k = w - 1;
      } else {
        k--;
      }
      x = 3;

    }

    else if (v.at(t).at(k) == '#' && x == 3) {
      v.at(t).at(k) = '.';
      if (t == h - 1) {
        t = 0;
      } else {
        t++;
      }
      x--;

    }

    else if (v.at(t).at(k) == '#' && x == 2) {
      v.at(t).at(k) = '.';
      if (k == w - 1) {
        k = 0;
      } else {
        k++;
      }
      x--;
    }

    else if (v.at(t).at(k) == '#' && x == 1) {
      v.at(t).at(k) = '.';
      if (t == 0) {
        t = h - 1;
      } else {
        t--;
      }
      x--;
    }
  }
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cout << v.at(i).at(j);
    }
    cout << endl;
  }
}
