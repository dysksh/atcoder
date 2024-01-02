#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int minNum = min(min(A, B), C);
    int maxNum = max(max(A, B), C);

    cout << maxNum - minNum << endl;
}
