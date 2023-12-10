// problem Link:

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        ll n, k; cin >> n >> k;
        vector<ll> cnt (n+1, 0), v(n+1);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
            cnt[v[i]]++;
        }

        for (int i = 0; i <= n; i++) {
            if (cnt[i] == 0) {
                v[n] = i;
                break;
            }
        }

        k %= (n+1);
        vector<ll>ans(n+1);

        for (int i = 0; i <= n; i++) {
            ans[(i+k) % (n+1)] = v[i];
        }

        for (int i = 0; i < n; i++) {
            cout << ans[i] << ' ';
        }
        cout << '\n';

    }
    return 0;
}