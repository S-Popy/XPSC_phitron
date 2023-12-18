#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
        int n, k; cin >> n >> k;
        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        int l = 0, r = 2001;

        while ( l <= r) {
            int mid = l + (r - l) / 2;
            int cost = 0;
            for (int i = 0; i < n; i++) {
                cost += max (a[i]*mid - b[i], 0);
            }

            if (cost <= k) {
                l = mid + 1;
            }

            else {
                r = mid - 1;
            }
        }

        cout << r << '\n';
    return 0;
}