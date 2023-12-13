// problem Link:

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n; cin >> n;
    vector<ll> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    ll x = 1, y = 1e6;
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ans = max (ans, min (v[i] - x, y - v[i]));
    }

    cout << ans << '\n';
    return 0;
}