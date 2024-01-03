#include <bits/stdc++.h>
using namespace std;

// https://atcoder.jp/contests/abc104/tasks/abc104_b
int main() {
    string s;
    cin >> s;

    bool ans = true;
    int cnt = 0;

    if (s.at(0) != 'A') ans = false;
    if (isupper(s.at(1))) ans = false;
    for (int i = 0; i < s.size(); i++) {
        if (i == 0) continue;
        if (i == 1) continue;
        if (i >= 2 && i < s.size() - 1 && s.at(i) == 'C') {
            cnt++;
            continue;
        }
        if (isupper(s.at(i))) ans = false;
    }
    if (cnt != 1) ans = false;

    cout << (ans ? "AC" : "WA") << endl;
}
