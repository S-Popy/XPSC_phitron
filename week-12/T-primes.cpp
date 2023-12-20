#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        ll x; cin >> x;
        ll y = sqrt(x);
        
        int j;
        for (j = 2; j*j <= y; j++) {
            if(y % j == 0) {
                break;
            }
        }

         if (y * y == x && j*j > y && x > 1) {
                cout << "YES\n";
            }
            else {
                cout << "NO\n";
            }
    }

    return 0;
}