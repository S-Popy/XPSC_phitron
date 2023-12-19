#include<bits/stdc++.h>
using namespace  std;
using ll = long long;

const int MOD = 1e9 + 7;

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll a = MOD;
    ll b = MOD + 2;
 
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int mn_indx = min_element(v.begin(), v.end()) - v.begin();
        cout << n - 1 << '\n';

        int new_indx = 0;

        for (int i = 0; i < n; i++) {
            if(i == mn_indx) {
                continue;
            }
            if(i % 2 == 0) {
                cout << mn_indx + 1 << ' ' << i + 1 << ' ' << v[mn_indx] << ' ' << a << '\n';
            }
            else {
                cout << mn_indx + 1 << ' ' << i + 1 << ' ' << v[mn_indx] << ' ' << b << '\n';
            }
        }
    }
    return 0;
}