// problem Link: 

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int x, y; cin >> x >> y;

        int ans = min ((x*5), (y*2 + x));

        cout << ans << "\n";
    }
    return 0;
}