// problem Link: https://codeforces.com/problemset/problem/1770/A

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        vector<int>a(n), b(m);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }

        ll ans = 0;

        for (int i =0; i < m; i++) {
            sort(a.begin(), a.end());
            a[0] = b[i];
        }

        for (auto u : a) {
            ans += u;
        }

        cout << ans << '\n';
    }
}
 