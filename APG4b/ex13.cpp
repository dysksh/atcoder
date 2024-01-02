#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A;

    int sum = 0;
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;

        sum += num;
        A.push_back(num);
    }

    int avr = sum / N;
    for (int i = 0; i < N; i++) {
        if (avr > A.at(i)) cout << avr - A.at(i) << endl;
        else cout << A.at(i) - avr << endl;
    }
}