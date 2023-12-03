// problem Link:

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        ll n;
        cin >> n;

        ll l = 1, r = 2e9;

        while (l+1 < r) {
            ll mid = l + (r - l) / 2;
            ll midCr = (mid * (mid - 1)) / 2;

            if (midCr <= n) {
                l = mid;
            }
            else {
                r = mid;
            }
        }

    ll lowCr = (l * (l - 1)) / 2;
    ll need = n - lowCr;

    cout << l + need << '\n';

    }
    return 0;
}