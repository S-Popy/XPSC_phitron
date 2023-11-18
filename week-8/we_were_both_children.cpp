// problem Link:

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<ll>v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        vector<int>cnt(n+2, 0);
            for (int i = 0; i < n; i++) {
                if (v[i] <= n) {
                    cnt[v[i]]++;
                }
            }
        

        ll ans = 0;
        for (int i = 1; i <= n; i++) {
            ll x = 0;
            for (ll j = 1; j*j <= i; j++) {
                if (i%j == 0) {
                    x += cnt[j];
                    if(j*j != i) {
                        x += cnt[i/j];
                    }
                }
            }
        ans = max(ans, x);
        }
        cout << ans << '\n';
    }
    return 0;
}