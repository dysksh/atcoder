#include <bits/stdc++.h>
using namespace std;

// https://atcoder.jp/contests/agc024/tasks/agc024_a
int main() {
    long long a, b, c, k;
    cin >> a >> b >> c >> k;

    long long ans;
    if (k % 2 == 0) ans = a - b;
    else ans = b - a;

    if (a - b > pow(10, 18)) {
        cout << "Unfair";
    } else {
        cout << ans;
    }
    cout << endl;
}
