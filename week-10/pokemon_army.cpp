// problem Link:

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n, q; cin >> n >> q;

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        ll ans = 0;
        for (int i = 0; i < n; i++) {
            int x = v[i];
            int y = 0;
            if (i < n-1) {
                y = v[i+1];
            }
            ans += max(x - y, 0);
        }

        cout << ans << '\n';
    }
    return 0;
}