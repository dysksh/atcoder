#include <bits/stdc++.h>
using namespace std;

// https://atcoder.jp/contests/abc085/tasks/abc085_c
int main() {
    int n, y;
    cin >> n >> y;

    bool isTrue = false;
    for (int i = 0; i <= n; i++) {
        if (isTrue) break;
        for (int j = 0; j <= n - i; j++) {
            if (isTrue) break;
            if (y == 10000 * i + 5000 * j + 1000 * (n - i - j)) isTrue = true;
            if (isTrue) cout << i << ' ' << j << ' ' << (n - i - j) << endl;
        }
    }

    if (!isTrue) cout << "-1 -1 -1" << endl;
}
