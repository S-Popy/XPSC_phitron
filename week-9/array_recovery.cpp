// problem Link: https://codeforces.com/problemset/problem/1739/B

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

        vector<int>ans(n);
        bool flag = true;

        ans[0] = v[0];
        for (int i = 1; i < n; i++) {
            ans[i] = ans[i-1] + v[i];
            if (v[i] != 0 && ans[i-1] - v[i] >= 0) {
                flag = false;
                break;
            }
        }

        if (!flag) {
            cout << -1 << '\n';
        }
        else {
            for (auto u : ans) {
                cout << u << ' ';
            }
            cout << '\n';
        }
        
    }
    return 0;
}