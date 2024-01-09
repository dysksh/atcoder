#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, q;
    cin >> n >> m >> q;

    vector<vector<int>> graph(n + 1);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    vector<int> C(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> C[i];
    }

    vector<vector<int>> S(q);
    for(auto &s : S) {
        int type, x, y;
        cin >> type >> x;
        s.push_back(type);
        s.push_back(x);
        if (type == 2) {
            cin >> y;
            s.push_back(y);
        }
    }


    for (auto &s : S) {
        cout << C[s[1]] << endl;
        if (s[0] == 1) {
            for (auto g : graph[s[1]]) {
                C[g] = C[s[1]];
            }
        } else {
            C[s[1]] = s[2];
        }
    }
}
