#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        set<int> all;
        set<int> s[n];

        for (int i = 0; i < n; i++) {
            int k; cin >> k;
            while(k--) {
                int x; cin >> x;
                all.insert(x);
                s[i].insert(x);
            }
        }

        int count = 0;
        for (auto u : all) {
            set<int> p;
            for (int i = 0; i < n; i++) {
                if(s[i].find(u) == s[i]. end()) {
                    for (auto v : s[i]) {
                        p.insert(v);
                    }
                }
            }

            int total_count = p.size();
            count = max(count, total_count);
        }

        cout << count << '\n';
    }
    return 0;
}