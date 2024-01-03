#include <bits/stdc++.h>
using namespace std;

// https://atcoder.jp/contests/abc075/tasks/abc075_b
int main() {
    int h, w;
    cin >> h >> w;

    vector<vector<char>> S(h, vector<char>(w, 0));
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            char s;
            cin >> s;
            S.at(i).at(j) = s;
        }
    }

    vector<int> directionH = {1, -1, 0};
    vector<int> directionW = {0, 1, -1};

    vector<vector<char>> ans = S;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            int cnt = 0;
            if (S.at(i).at(j) == '#') continue;
            for (int k = 0; k < directionH.size(); k++) {
                for (int l = 0; l < directionW.size(); l++) {
                    if (i + directionH.at(k) < 0 || i + directionH.at(k) >= h) continue;
                    if (j + directionW.at(l) < 0 || j + directionW.at(l) >= w) continue;
                    if (S.at(i + directionH.at(k)).at(j + directionW.at(l)) == '#') cnt++;
                }
            }
            // char型に変換
            ans.at(i).at(j) = cnt + '0';
        }
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cout << ans.at(i).at(j);
        }
        cout << endl;
    }
}
