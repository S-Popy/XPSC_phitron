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
        vector<string> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        set<int> s[n+5];

        for (int i = 1; i <= n; i++) {
            s[i].insert(i);
        }
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if(v[i][j] == '1') {
                    s[j+1].insert(i+1);
                }
            }
        }

        for (int i = 1; i <= n; i++) {
            cout << s[i].size() << " ";
            for (auto u : s[i]) {
                cout << u << ' ';
            }

            cout << "\n";
        }
    }
    return 0;
}