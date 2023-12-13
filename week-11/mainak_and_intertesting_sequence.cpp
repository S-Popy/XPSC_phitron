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
        
        if (n > m) {
            cout << "NO\n";
            continue;
        }

        if(n % 2 == 1) {
            cout << "YES\n";
            cout << m - n + 1 << ' ';
            for(int i = 1; i < n; i++) {
                cout << 1 << ' ';
            }
            cout << '\n';
            continue;
        }

        if ( m % 2 == 1) {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
        int x = 1 + (m - n) / 2;
        cout << x << ' ';
        cout << x << ' ';
        for (int i = 2; i < n; i++) {
            cout << 1 << ' ';
        }
        cout << '\n';
    }
    return 0;
}