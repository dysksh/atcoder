#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    string s;
    cin >> s;

    bool isAfterA;
    int cnt = 0;
    vector<int> counter(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        if (s[i - 1] == 'A') {
            isAfterA = true;
            counter[i] = cnt;
            continue;
        }

        if (isAfterA && s[i - 1] == 'C') {
            cnt++;
        }

        counter[i] = cnt;
        isAfterA = false;
    }

    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        cout << (counter[r] - counter[l]) << endl;
    }
}
