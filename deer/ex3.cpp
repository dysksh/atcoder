#include <bits/stdc++.h>
using namespace std;

// https://atcoder.jp/contests/abc153/tasks/abc153_a
int main() {
    int h, a;
    cin >> h >> a;

    int ans = h / a + 1;
    if (h % a == 0) {
        ans = h / a;
    }
    cout << ans << endl;
}
