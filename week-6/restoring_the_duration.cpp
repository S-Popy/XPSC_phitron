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
        queue<int>p,q;

        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            p.push(x);
        }

        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            q.push(x);
        }

        vector<int>v;
        int ans = p.front();
        while(!p.empty()) {
            
            int x = p.front();
            p.pop();
            int y = q.front();
            q.pop();
            ans = max(ans, x);
            v.push_back(y - ans);
            ans = max(ans, y);
        }

        for (auto u : v) {
            cout << u << ' ';
        }
        cout << '\n';
    }
    return 0;
}