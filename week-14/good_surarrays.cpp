#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> v(n+1);
        for (int i = 1; i <= n; i++) {
            cin >> v[i];
        }

        ll ans = 0;
        int j = 1;
        for (int i = 1; i <= n; i++) {
            while(j <= n && v[j] + (i - 1) >= j) {
                j++;
            }

            ans += (j - i);
            if(j == i) {
                j++;
            }
        }

        cout << ans << '\n';
    }
    return 0;
}