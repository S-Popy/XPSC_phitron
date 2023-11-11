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
        bool flag = true;

        while(b != 1) {

            if(GCD == 1) {
                flag = false;
                break;
            }
            b /= GCD;
            GCD = __gcd(GCD, b);
        }

        if (flag) {
            cout << "Yes\n";
        }
        else {
            cout << "No\n";
        }
    }
    return 0;
}