// problem Link:

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n, k, d; cin >> n >> k >> d;
        vector<int>v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int ans = INT_MAX;

        for (int i = 0; i + d - 1 < n; i++) {
             set<int>s;
            for (int j = i; j < i + d; j++) {
                s.insert(v[j]);
            }
            ans = min (ans, (int)s.size());
        }
        
        cout << ans << '\n';
    }
    return 0;
}