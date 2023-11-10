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
        if(n % 10 < 5) {
            int x = (n / 10) * 10;
            cout << 100 - x << '\n';
        }
        else {
            int x = ((n / 10) + 1) * 10;
            cout << 100 - x << '\n';
        }
    }
    return 0;
}