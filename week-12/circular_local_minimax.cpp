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
        vector<int > v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        if (n % 2 == 1) {
            cout << "NO\n";
            continue;
        }

        sort(v.rbegin(), v.rend());

        vector<int> ans;
       for (int i = 0; i < n/2; i++) {
        ans.push_back(v[i]);
        ans.push_back(v[n/2+i]);
       }

        bool flag = true;
        for (int i = 1; i < n; i += 2) {
            if(ans[i] >= ans[i-1] || (i != n-1 && ans[i] >= ans[i+1])) {
              flag = false;
              break;
        }
        }

        if (!flag) {
                cout << "NO\n";
            }
            else {
            cout << "YES\n";
            for (auto u : ans) {
                cout << u << ' ';
            }
            cout << '\n';
            }
    }
    return 0;
}