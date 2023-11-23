// problem Link: https://codeforces.com/problemset/problem/1846/E1

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
const int N = 1e6+5;

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<bool>pos(N, false);

        for (ll k = 2; ; k++) {
            ll x = k*k;
            ll total = 1+k+x;
            
            if(total > N) {
                break;
            }

            while(total < N && total > 0) {
                pos[total] = true;
                total += x*k;
                 x *= k;
            }
        }

        if(pos[n]) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}