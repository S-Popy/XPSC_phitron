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
        vector<vector<int>> v;
        vector<int>mn1, mn2;

        for (int i = 0; i < n; i++) {
            int m; cin >>  m;
            vector<int>p(m);

            for(int j = 0; j < m; j++) {
                cin >> p[j];
            }
            sort(p.begin(), p.end());
            v.push_back(p);
            mn1.push_back(p[0]);
            mn2.push_back(p[1]);

        }

        sort(mn1.begin(), mn1.end());
        ll sum = mn1[0];

        for (auto u : mn2) {
            sum+= u;
        }
        sort(mn2.begin(), mn2.end());
        sum -= mn2[0];

        cout << sum << '\n';
    }
    return 0;
}