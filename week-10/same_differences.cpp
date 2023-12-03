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
        vector<int>v(n+1);
        for (int i = 1; i <= n; i++) {
            cin >> v[i];
        }

        map<int,int>mp;
        for (int i = 1; i <= n; i++) {
            mp[v[i] - i]++;
        }

        ll ans = 0;
        for (auto u: mp) {
            ll x = u.second;
            ans += (x*(x - 1)) / 2;
        }

        cout << ans << '\n';
    }
    return 0;
}