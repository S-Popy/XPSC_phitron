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
        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            x--;
            v[x] = i;
        }

        ll ans = 0;
         for (int i = 1; i < n; i++) {
            if (v[i] < v[i-1]) {
                ans++;
            }
         }

         cout << ans << '\n';
    }
    return 0;
}