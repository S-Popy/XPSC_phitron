// problem Link: https://www.codechef.com/problems/DOTIFYPLAY

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, m, l;
        cin >> n >> m >> l;
        vector<vector<int>> v(6, vector<int>{});

        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            v[y].push_back(x);
        }

        for (auto &u : v) {
            sort(u.begin(), u.end(), greater<int>());
        }

        int ans = 0; 
        int i = 1;

            if (v[l].size() < m) {
                cout << -1 << '\n';
                continue;
            } else {
                for (auto u : v[l]) {
                    if (m == 0) {
                        break;
                    }
                    ans += u;
                    m--;
                }
            }
            
                cout << ans << '\n';
        
    }
    return 0;
}
