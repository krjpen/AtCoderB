#include <bits/stdc++.h>
using namespace std;

int main() {
    char q, p;
    int vec[6] = { 3, 1, 4, 1, 5, 9 };
    int sum = 0;
    int i;
 
    cin >> q >> p;
    int a = (int)q - 65;
    int b = (int)p - 65;

    if (a < b) {
        for (i = a; i < b; i++) {
            sum += vec[i];
        }
    }
    else {
        for (i = b; i < a; i++) {
            sum += vec[i];
        }
    }
 
    cout << sum << endl;
}
