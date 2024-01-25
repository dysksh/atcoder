#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> S(n);
    for (auto &s : S) {
        cin >> s;
    }

    map<string, long long> table;
    for (auto s : S) {
        string word = s;
        sort(word.begin(), word.end());
        table[word] += 1;
    }

    long long ans = 0;
    for (auto m : table) {
        ans += m.second * (m.second - 1) / 2;
    }

    cout << ans << endl;
}
