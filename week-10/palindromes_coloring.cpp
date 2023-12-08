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
        string s; cin >> s;

        map<char,int> mp;

        for (int i = 0; i < n; i++) {
            mp[s[i]]++;
        }

        int p = 0, q = 0;
        for (auto u : mp) {
            int x = u.second;
             p += x/2;
             q += (x % 2);
        }

        int ans = p / k;
        q += ( p % k) * 2;
        ans *= 2;

        if (q >= k) {
            ans++;
        }

        cout << ans << '\n';
    }
    return 0;
}