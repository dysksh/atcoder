#include <bits/stdc++.h>
using namespace std;

// https://atcoder.jp/contests/abc085/tasks/abc085_c
int main() {
    int N, Y;
    cin >> N >> Y;

    bool ans = false;
    for (int i = 0; i <= N; i++) {
        if (ans) break;
        for (int j = 0; j <= N - i; j++) {
            if (ans) break;
            if (Y - 10000 * i - 5000 * j == 1000 * (N - i - j)) {
                ans = true;
                cout << i << ' ' << j << ' ' << N - i - j << endl;
            }
        }
    }

    if (!ans) cout << "-1 -1 -1" << endl;
}
