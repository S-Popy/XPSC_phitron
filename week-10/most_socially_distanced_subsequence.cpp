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
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

       vector<int> ans;
       ans.push_back(v[0]);
       bool flag = true;
       for (int i = 1; i < n; i++) {
            if(flag == true && v[i] - v[i-1] >= 0) {
                continue;
            }
            else if ( flag == true && v[i] - v[i-1] < 0) {
                flag = false;
                if (i > 1) {
                    ans.push_back(v[i-1]);
                }
            }
            else if (flag == false && v[i] - v[i-1] >= 0) {
                flag = true;
                ans.push_back(v[i-1]);
            }
            else {
                continue;
            }
       }

       ans.push_back(v[n-1]);

       cout << ans.size() << '\n';
       for (auto u : ans) {
        cout << u << ' ';
       }
       cout << '\n';
    }
    return 0;
}