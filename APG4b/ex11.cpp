#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, A;
    cin >> N >> A;

    // ここにプログラムを追記
    // ケース3で3つ目の入力を受け付けなくなるので、入力をコマンドとして認識され実行されるが、ジャッジ的には問題なさそう
    for(int i = 0; i < N; i++) {
        string op;
        int num;
        cin >> op >> num;

        if (op == "+") {
            A += num;
        } else if (op == "-") {
            A -= num;
        } else if (op == "*") {
            A *= num;
        } else if (num != 0) {
            A /= num;
        } else {
            cout << "error" << endl;
            break;
        }

        cout << i + 1 << ":" << A << endl;
    }
}
