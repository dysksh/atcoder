#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    // ここにプログラムを追記
    int cnt = 1;
    for (int i = 0; i < S.size(); i++) {
        if (S.at(i) == '+') cnt++;
        if (S.at(i) == '-') cnt--;
    }
    cout << cnt << endl;
}
