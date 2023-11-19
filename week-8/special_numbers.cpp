// problem Link:

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
const int MOD = 1e9+7;

ll power(ll n, ll i) {
    ll ans = 1;

    while(i) {
        if (i %2 == 1) {
            ans = (ans*n) % MOD;
            i--;
        }
        else {
            n = (n*n) % MOD;
            i /= 2;
        }
    }
    return ans % MOD;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        ll n, k; cin >> n >> k;
        string s;
        while (k) {
            if (k % 2 == 0) {
                s += '0';
            }
            else {
                s += '1';
            }
            k /= 2;
        }

        ll ans = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') {
                ans += power(n, i);
            }
                ans %= MOD;
        }
        cout << ans << '\n';
    }
    return 0;
}