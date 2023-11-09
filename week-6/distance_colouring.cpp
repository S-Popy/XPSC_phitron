// problem Link: https://www.codechef.com/problems/DISTANCECOLO?tab=statement

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
const int MOD = 1e9+7;

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        ll count = 1;

        for (int i = 0; i < n; i++) {
            if(k > 0) {
                count = (count * k) % MOD;
                k--;
            }
            else {
                break;
            }
        }

        cout << count << '\n';

    }
    return 0;
}