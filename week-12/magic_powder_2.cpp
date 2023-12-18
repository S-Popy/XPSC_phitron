#include<bits/stdc++.h>
using namespace  std;
using ll = long long;

ll n, k;
vector<ll> a, b;
bool check(ll x) {
    ll cost = k;
            for (int i = 0; i < n; i++) {
               if (a[i] * x > b[i]) {
                cost -= (a[i] * x - b[i]);
               }
               if (cost < 0) {
                return 0;
               }
            }
            return 1;
}
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
        cin >> n >> k;

        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            a.push_back(x);
        }

         for (int i = 0; i < n; i++) {
            int x; cin >> x;
            b.push_back(x);
        }

        ll l = 0, r = 1e10;
        ll ans = 0;

        while ( l <= r) {
            ll mid = l + (r - l) / 2;

            if (check(mid)) {
                ans = mid;
                l = mid + 1;
            }

            else {
                r = mid - 1;
            }
        }

        cout << ans << '\n';
    return 0;
}