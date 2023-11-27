// problem Link:

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int x, a, b, y; cin >> x >> a >> b >> y;

        if(x == 0) {
            cout << 1 << '\n';
        }
        else {
            int ans = x + min (a, b)*2 + min (x+1, abs(a - b) + y);
            cout << ans << '\n';
        }
    }
    return 0;
}