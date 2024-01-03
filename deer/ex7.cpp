#include <bits/stdc++.h>
using namespace std;

// https://atcoder.jp/contests/abc088/tasks/abc088_b
int main() {
    int n;
    vector<int> A;

    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        A.push_back(a);
    }
    
    sort(A.begin(), A.end());
    vector<int> Alice, Bob;
    bool isAliceTurn = true;

    for (int i = 0; i < n; i++) {
        if (isAliceTurn) {
            Alice.push_back(A.at(n - i - 1));
            A.pop_back();
            isAliceTurn = false;
        } else {
            Bob.push_back(A.at(n - i - 1));
            A.pop_back();
            isAliceTurn = true;
        }
    }

    cout << (accumulate(Alice.begin(), Alice.end(), 0) - accumulate(Bob.begin(), Bob.end(), 0)) << endl;
}
