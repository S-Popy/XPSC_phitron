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

        vector<int>v;
        vector<bool>vis(n+1, false);

        for (int i = 1; i <= n; i++) {
            if(vis[i]) {
                continue;
            }
            
        for (int j = i; j <= n; j *= 2) {
            v.push_back(j);
            vis[j] = true;
        }

        }

        for (auto u : v) {
            cout << u << ' ';
        }
        cout << '\n';
    }
    return 0;
}