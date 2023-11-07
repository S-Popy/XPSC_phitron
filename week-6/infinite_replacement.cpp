// problem Link: https://codeforces.com/problemset/problem/1674/C

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        string s, p; cin >> s >> p;
        int n = s.size();
        int m = p.size();

        if (m == 1) {
            if (p[0] == 'a') {
                cout << 1 << '\n';
            } else {
                ll ans = (1ll<<n);
                cout << ans << '\n';
            }
        } else {
            if (count(p.begin(), p.end(), 'a') > 0) {
                cout << -1 << '\n';
            }
            else {
                ll ans = (1ll<<n);
                cout << ans << '\n';
            }
        }
    }
    return 0;
}