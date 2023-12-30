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

        int mn = 0, mx = 1E8;

        for (int i = 0; i < n - 1; i++) {
            if (v[i] < v[i+1]) {
                mx = min (mx, (v[i] + v[i+1]) / 2);
            }
            else if (v[i] > v[i+1]) {
                mn = max (mn, (v[i] + v[i+1] + 1) / 2);
            }
        }

        if (mn <= mx) {
            cout << mn << '\n';
        }
        else {
            cout << -1 << '\n';
        }
    }
    return 0;
}