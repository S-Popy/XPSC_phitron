// problem Link:

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        vector<int>v1, v2;

        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            if( x >= 0) {
                v1.push_back(x);
            }
            else {
                v2.push_back(abs(x));
            }
        }

        sort(v1.begin(), v1.end(), greater<int>());
        sort(v2.begin(), v2.end(), greater<int>());

        ll ans = 0;

        if(v2.empty()) {
            if (!v1.empty()) {
            for (int i = 0; i < v1.size(); i += k) {
            ans += v1[i] * 2;
        }
        ans -= v1[0];
        cout << ans << '\n';
        }
        }

        else if (v1.empty()) {
            if(!v2.empty()) {
            for (int i = 0; i < v2.size(); i += k) {
            ans += v2[i] * 2;
        }
            ans -= v2[0];
            cout << ans << '\n';
        }

        }

        else {
            for (int i = 0; i < v1.size(); i += k) {
            ans += v1[i] * 2;
            }
         for (int i = 0; i < v2.size(); i += k) {
            ans += v2[i] * 2;
         }

        if(v1[0] > v2[0]) {
            ans -= v1[0];
        }
        else {
            ans -= v2[0];
        }
        
        cout << ans << '\n';
        }
    }
    
    return 0;
}