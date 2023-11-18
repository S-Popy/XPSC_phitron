// problem Link: 

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        ll u, v; cin >> u >> v;
        cout << -1*u*u << ' ' << v*v << '\n';
    }
    return 0;
}