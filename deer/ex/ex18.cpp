#include <bits/stdc++.h>
using namespace std;

// https://atcoder.jp/contests/abc086/tasks/arc089_a
int main() {
    int n;
    cin >> n;
    vector<int> T(n + 1), X(n + 1), Y(n + 1);
    bool ans = true;
    T[0], X[0], Y[0] = 0;
    for (int i = 1; i <= n; i++) {
        cin >> T[i] >> X[i] >> Y[i];
        int dt, dp;
        dt = T[i] - T[i - 1];
        dp = abs(X[i] - X[i - 1]) + abs(Y[i] - Y[i - 1]);
        if (dt < dp) ans = false;
        if (dt % 2 != dp % 2) ans = false;
    }

    cout << (ans ? "Yes" : "No") << endl;
}
