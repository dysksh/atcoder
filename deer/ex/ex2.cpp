#include <bits/stdc++.h>
using namespace std;

// https://atcoder.jp/contests/abc086/tasks/abc086_a
int main() {
    int a, b;
    cin >> a >> b;

    if (a * b % 2 == 1) {
        cout << "Odd" << endl;
    } else {
        cout << "Even" << endl;
    }
}
