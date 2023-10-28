// problem Link: 

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n; cin >> n;
    vector<ll>v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int q; cin >> q;
    while (q--) {
        ll x; cin >> x;
        ll ans1 = -1, ans2 = -1;

        auto it = upper_bound(v.begin(), v.end(), x);
        auto it2 = lower_bound(v.begin(), v.end(), x); 

        if (it != v.end()) {         
            ans2 = *it;
        }

        if (it2 != v.begin()) { 
            it2--;        
            ans1 = *it2;
        }
        

            if (ans1 != -1 && ans2 != -1) {
                cout << ans1 << ' ' << ans2 << '\n';
            } 
            else if (ans1 == -1 && ans2 != -1) {
                cout << 'X' << ' ' << ans2 << '\n';
            }
            else if (ans1 != -1 && ans2 == -1) {
                cout << ans1 << ' ' << 'X' << '\n';
            }
            else {
                cout << 'X' << ' ' << 'X' << '\n';
            }
        }

    return 0;
}