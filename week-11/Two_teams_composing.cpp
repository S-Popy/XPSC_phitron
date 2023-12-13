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
        map<int,int> mp;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            mp[x]++;
        }

        int x = mp.size();
        int y = 0;
        for (auto u: mp) {
            y = max(y, u.second);
        }

        if(x == y) {
            cout << x-1 << '\n';
        }
        else {
            cout << min(x, y) << '\n';
        }
    }
    return 0;
}