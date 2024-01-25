#include <bits/stdc++.h>
using namespace std;

// https://atcoder.jp/contests/diverta2019/tasks/diverta2019_c
int main() {
    int n;
    cin >> n;
    vector<string> S(n);
    int ans = 0;
    int beginB = 0;
    int endA = 0;
    int beginBEndA = 0;

    for (auto &s : S) {
        cin >> s;
        if (s[0] == 'B') beginB++;
        if (s[s.size() - 1] == 'A') endA++;
        if (s[0] == 'B' && s[s.size() - 1] == 'A') beginBEndA++;
        for (int i = 0; i < s.size(); i++) {
            if (i != s.size() - 1 && s[i] == 'A' && s[i + 1] == 'B') ans++;
        }
    }
    if (beginB > endA) ans += endA;
    else ans += beginB;

    if (beginB == beginBEndA && endA == beginBEndA && beginB != 0) ans -= 1;

    cout << ans << endl;
}
