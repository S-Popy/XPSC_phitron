#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        vector<int> a(n), b(m);
        int p = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            p ^= a[i];
        }

        int q = 0;
        for (int i = 0; i < m; i++) {
            cin >> b[i];
            q |= b[i];
        }

        if(n & 1) {
            cout << p << ' ' << (p | q) << '\n';
        }
        else {
            cout << p - (p & q) << ' ' << p << '\n';
        }
    }
    return 0;
}