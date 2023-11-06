// problem Link: https://www.spoj.com/problems/EKO/en/

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n, m; cin >> n >> m;
    vector<ll>v(n);

    for (ll &x: v) {
        cin >> x;
    }

    ll l = 0, r = INT_MAX, ans = 0;

    while (l <= r) {
        ll mid = l + (r - l) / 2;
        ll sum = 0;

        for (int i = 0; i < n; i++) {
            if (v[i] > mid) {
                sum += v[i] - mid;
            }
        }
        if (sum >= m) {
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