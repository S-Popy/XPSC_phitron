// problem Link:

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;

        vector<ll> v(n);
        map<ll,ll> mp;

        for (int i = 0; i < n; i++) {
            cin >> v[i];
             mp[v[i]]++;
        }

        sort(v.begin(), v.end());

        ll ans = 0;
        for (int i = 0; i < n; i++) {
            if(mp[v[i]] == 0) {
                continue;
            }

            if(mp[v[i] * k] != 0) {
                mp[v[i]]--;
                mp[v[i] * k]--;
            }
            else {
                ans++;
                mp[v[i]]--;
            }
        }

        cout << ans << '\n';

    }
    return 0;
}