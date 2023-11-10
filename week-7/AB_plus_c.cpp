// problem Link: 

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        ll x; cin >> x;

        if( x == 1) {
            cout << -1 << '\n';
            continue;
        }

        if ( x <= 1000000) {
            cout << 1 << ' ' << x - 1 << ' ' << 1 << '\n';
        }
        else if (x % 1000000 == 0) {
            cout << (x / 1000000) - 1 << ' ' << 1000000 << ' ' << 1000000 << '\n';
        }
        else {
            cout << (x / 1000000) << ' ' << 1000000 << ' ' << (x % 1000000) << '\n';
        }
        }
    
    return 0;
}