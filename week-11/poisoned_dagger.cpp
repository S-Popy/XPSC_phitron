// problem Link:

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;

ll solve (vector<int> &v, ll n, ll h) {
    ll ans = h;
    ll l = 1, r = h;

    while ( l <= r) {
        ll mid = l + (r - l) / 2;
        ll x = 0;

        for (ll i = 0; i < n; i++) {
            if (i == n-1) {
                x += mid;
            }
            else {
                ll y = v[i+1] - v[i];
                if (y >= mid) {
                    x += mid;
                }
                else {
                    x += y;
                }
            }
        }

        if (x >= h) {
            ans = mid;
            r = mid -1;
        }
        else {
            l = mid + 1;
        }
    }

    return ans;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        ll n, h; cin >> n >> h;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        ll ans = solve(v, n, h);
        cout << ans << '\n';
    }
    return 0;
}