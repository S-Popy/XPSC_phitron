// problem Link: 

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int x, y, z;

        for (int i = 1; i <= n; i++) {
            y = i;
            int r = n - y;

            if(r % 2 == 0) {
                x = 1 + (r / 2);
            } else {
                x = (r + 1) / 2;
            }  
            z = n - (x + y); 

            if (x > 0 && y > 0 && x < y && x > z) {
                break;
            }         
        }

        cout << x << ' ' << y << ' ' << z << ' ' << '\n';
    }
    return 0;
}