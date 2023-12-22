#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        if(n == 1) {
            if(v[0] > 0) {
                cout << v[0] << '\n';
            }
            else {
                cout << 0 << '\n';
            }
            continue;
        }

        ll ans = 0;
       if (v[0] >= 0) {
            for (int i = 0; i < n; i++) {
                if(v[i] >= 0) {
                    ans += v[i];
                }
            }
       }
       else {
            int x = v[0] + v[1];
            if (x >= 0) {
                ans += x;
            }
            for (int i = 2; i < n; i++) {
                if(v[i] >= 0) {
                    ans += v[i];
                }
            }
       }

       cout << ans << '\n';
    }
    return 0;
}