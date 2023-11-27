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
        ll ans = INT_MIN;

        for (int i = n-1; i > -2; i--) {
            ll left = 0, start = 1, last = n, mx = INT_MIN, count = 1;

            for (int j = 0; j < i+1; j++) {
                left += start * count;
                mx = max(mx, start * count);
                start++;
                count++;
            }

            for (int j = i+1; j < n; j++) {
                left += last * count;
                mx = max (mx, last * count);
                count++;
                last--;
            }

            ans = max(ans, left - mx);
        }

        cout << ans << '\n';
    }
    return 0;
}