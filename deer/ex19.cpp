#include <bits/stdc++.h>
using namespace std;

// https://atcoder.jp/contests/abc125/tasks/abc125_d
int main() {
    int n;
    cin >> n;

    vector<long long> A(n);
    int minusNumCnt = 0;
    for (int i = 0; i < n; i++) {
        long long a;
        cin >> a;
        if (a < 0) minusNumCnt++;

        A[i] = abs(a);
    }

    sort(A.begin(), A.end(), greater<int>());
    if (minusNumCnt % 2 == 0) {
        cout << accumulate(A.begin(), A.end(), 0LL) << endl;
    } else {
        long long num = A[n - 1];
        A.pop_back();
        cout << (accumulate(A.begin(), A.end(), 0LL) - num) << endl;
    }
}
