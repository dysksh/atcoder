#include <bits/stdc++.h>
using namespace std;

// https://atcoder.jp/contests/abc085/tasks/abc085_b
int main() {
    int n;
    cin >> n;

    vector<int> bucket(100, 0);
    for (int i = 0; i < n; i++) {
        int d;
        cin >> d;
        bucket[d] += 1;
    }
    
    int ans = 0;
    for (int i = 1; i < 101; i++) {
        if (bucket[i] == 0) continue;
        ans++;
    }

    cout << ans << endl;
}
