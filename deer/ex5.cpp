#include <bits/stdc++.h>
using namespace std;

// https://atcoder.jp/contests/abc083/tasks/abc083_b
int main() {
    int n, a, b;
    cin >> n >> a >> b;

    long long ans = 0;
    for (int i = 1; i <= n; i++) {
        int sum = 0;
        for (int num = i; num != 0; num /= 10) {
            sum += num % 10;
        }
        if (sum >= a && sum <= b) ans += i;
    }

    cout << ans << endl;
}
