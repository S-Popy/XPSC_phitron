// problem Link: https://codeforces.com/problemset/problem/467/B

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n, m, k; cin >> n >> m >> k;
    ll ans = 0;
    vector<ll>v(m);
    for (int i = 0; i < m; i++) {
        cin >> v[i];
    }

    ll p; cin >> p;
    
    for (int i = 0; i < m; i++) {
        ll count = 0;
        for (int j = 0; j <= 22; j++) {
            if((v[i] & (1 << j)) != (p & (1 << j))) {
                count++;
            }
        }
        if (count <= k) {
            ans++;
        }
    }

    cout << ans << '\n';

    return 0;
}