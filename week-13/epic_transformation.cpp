#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        map<int,int>mp;
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            mp[x]++;
        }

        int mx = 0;
        for (auto u : mp) {
            mx = max (mx, u.second);
        }

        int p = n - mx;
        p = min (p, n/2);
        cout << n - p * 2 << '\n';
        
    }
    return 0;
}