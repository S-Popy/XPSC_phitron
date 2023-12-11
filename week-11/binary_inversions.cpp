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

        int count_0 = 0, count_1 = 0;
        int indx_0 = -1, indx_1 = -1;
        ll ans = 0;

        for (int i = 0; i < n; i++) {
            cin >> v[i];

            if (v[i] == 0) {
                count_0++;
                ans += count_1;

                if (indx_0 == -1) {
                    indx_0 = i;
                }
            }
            else {
                count_1++;
                indx_1 = i;
            }
        }

        ll x = ans;
        if (indx_0 != -1) {
            ans = max(ans, x + count_0 - 1 - indx_0);
        }
        if (indx_1 != -1) {
            ans = max(ans, x + count_1 - 1 - (n - 1 - indx_1));
        }

        cout << ans << '\n';
    }
    return 0;
}