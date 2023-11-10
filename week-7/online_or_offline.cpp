// problem Link:

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        float x = n - (float)(n * 0.1);

        if( x > m) {
            cout << "DINING\n";
        } else if ( x == m) {
            cout << "EITHER\n";
        } 
        else {
            cout << "ONLINE\n";
        }
    }
    return 0;
}