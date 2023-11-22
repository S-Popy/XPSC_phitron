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
        
        if(n % 3 == 0 || m % 3 == 0) {
            cout << n*m/3 << '\n';
            continue;
        }

        cout << n*m/3 + (((n*m) % 3) > 0) << '\n';
    }
    return 0;
}