#include <bits/stdc++.h>
using namespace std;

// https://atcoder.jp/contests/abc137/tasks/abc137_c
int main() {
    int N;
    cin >> N;

    map<string, long long> S;
    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;

        sort(s.begin(), s.end());
        S[s]++;
    }

    long long ans = 0;
    for (auto s : S) {
        ans += s.second * (s.second - 1) / 2;
    }

    cout << ans << endl;
}
