#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        ll n, k; cin >> n >> k;
        vector<ll> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int cur = 0, ans = 0;
        for (int i = 0; i < n - 1; i++) {
            if(v[i] < 2 * v[i+1]) {
                cur++;
                ans += (cur >= k);
            }
            else {
                cur = 0;
            }
        }

        cout << ans << '\n';
    }
    return 0;
}