#include <bits/stdc++.h>
using namespace std;

// https://atcoder.jp/contests/past201912-open/tasks/past201912_f
string toLowerString(string str);
string formatForAns(string str);

int main() {
    string S;
    cin >> S;

    vector<string> ans;
    for (int i = 0; i < S.size();) {
        int j = 0;
        int cnt = 0;
        while (cnt < 2) {
            if (isupper(S[i + j])) cnt++;
            j++;
        }

        ans.push_back(toLowerString(S.substr(i, j)));

        i += j;
    }
    sort(ans.begin(), ans.end());

    for (auto a : ans) {
        cout << formatForAns(a);
    }
    cout << endl;
}

string toLowerString(string str) {
    string returnStr = "";
    for (int i = 0; i < str.size(); i++) {
        returnStr += tolower(str[i]);
    }
    return returnStr;
}

string formatForAns(string str) {
    str[0] = toupper(str[0]);
    str[str.size() - 1] = toupper(str[str.size() - 1]);

    return str;
}