#include <bits/stdc++.h>
using namespace std;

// https://atcoder.jp/contests/abc087/tasks/abc087_b
int main() {
    int a, b, c, x;
    cin >> a >> b >> c >> x;

    int ans = 0;
    for (int i = 0; i <= a; i++) {
        for (int j = 0; j <= b; j++) {
            int tmp = x - 500 * i - 100 * j;
            if ((tmp - 50 * c <= 0) && (tmp >= 0)) ans++;
        }
    }

    cout << ans << endl;
}
