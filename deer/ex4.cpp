#include <bits/stdc++.h>
using namespace std;

// https://atcoder.jp/contests/abc165/tasks/abc165_a
int main() {
    int k, a, b;
    cin >> k >> a >> b;

    bool isOK = false;
    for (; a <= b; a++) {
        if (a % k == 0) isOK = true;
    }

    cout << (isOK ? "OK" : "NG") << endl;
}
