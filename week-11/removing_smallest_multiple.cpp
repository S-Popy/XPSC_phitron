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
        string s; cin >> s;

        ll ans = 0;
        vector<bool> v(n);
        for (int i = 1; i <= n; i++) {
            for (int j = i; j <= n && s[j-1] == '0'; j += i) {
                if(!v[j-1]) {
                    v[j-1] = true;
                    ans += i;
                }
            }
        }
        

        cout << ans << '\n';
    }
    return 0;
}