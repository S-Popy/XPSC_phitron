#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        vector<int> cnt(31);

        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            for (int j = 0; j <= 30; j++) {
                cnt[j] += (x >> j) & 1;
            }
        }

        int ans = 0;
        for (int i = 30; i >= 0; i--) {
            if (k >= n - cnt[i]) {
                k -= n - cnt[i];
                ans |= 1 << i;
            }
        }

        cout << ans << '\n';
    }
    return 0;
}