// problem Link:

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        ll a, b; cin >> a >> b;

        ll GCD = __gcd(a, b);

        while(b > 1 && GCD > 1) {
            b /= GCD;
            GCD = __gcd(a, b);
        }

        if (b != 1) {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
        }
    }
    return 0;
}