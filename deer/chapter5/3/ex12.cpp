#include <bits/stdc++.h>
using namespace std;

// https://atcoder.jp/contests/abc085/tasks/abc085_b
int main() {
    int N;
    cin >> N;

    vector<int> D(101, 0);
    for (int i = 0; i < N; i++) {
        int d;
        cin >> d;
        D[d]++;
    }

    int ans = 0;
    for (int i = 0; i < D.size(); i++) {
        if (D[i] > 0) ans++;
    }

    cout << ans << endl;
}
