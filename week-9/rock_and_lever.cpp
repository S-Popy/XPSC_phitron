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
        vector<int>v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        vector<bool>vis(n, false);
        ll total = 0;

        for (int i = 31; i >= 0; i--) {
            ll count = 0;
            for (int j = 0; j < n; j++) {
                if ((1<<i)&(v[j]) && !vis[j]) {
                    count++;
                    vis[j] = true;
                }
            } 
                   
             total += (count * (count-1)) / 2;
            
        }

        cout << total << '\n';
    }
    return 0;
}