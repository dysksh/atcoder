#include <bits/stdc++.h>
using namespace std;

// https://atcoder.jp/contests/abc081/tasks/abc081_b
int main() {
    int n;
    vector<int> A;

    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        A.push_back(a);
    }

    bool flg = true;
    int ans = 0;
    while (flg) {
        for (int i = 0; i < n; i++) {
            if (A.at(i) % 2 == 1) {
                flg = false;
                break;
            } else {
                A.at(i) = A.at(i) / 2;
            }
        }
        if (flg) ans++;
    }

    cout << ans << endl;
}
