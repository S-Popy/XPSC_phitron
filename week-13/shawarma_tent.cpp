#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n, sx, sy; cin >> n >> sx >> sy;
    int u = 0, d = 0, l = 0, r = 0;

    while(n--) {
        int x, y; cin >> x >> y;

        if(y > sy) {
            u++;
        }
        if(y < sy) {
            d++;
        }
        if(x > sx) {
            r++;
        }
        if(x < sx) {
            l++;
        }
    }

    int ans = max(u, max (d, max(r, l)));
    cout << ans << '\n';

    if(u == ans) {
        sy++;
    }
    else if (d == ans) {
        sy--;
    }
    else if (r == ans) {
        sx++;
    }
    else {
        sx--;
    }

    cout << sx << ' ' << sy << '\n';
    return 0;
}