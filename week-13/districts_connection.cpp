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

        auto it1 = min_element(v.begin(), v.end());
        auto it2 = max_element(v.begin(), v.end());

        if(*it1 == *it2) {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";

        int p = it1 - v.begin();
        int q = it2 - v.begin();

        for (int i = 0; i < n; i++) {
            if(i == p) {
                continue;
            }

            cout << i + 1 << ' ';

            if(v[i] == v[p]) {
                cout << q + 1 << '\n';
            }
            else {
                cout << p + 1 << '\n';
            }
        }
    }
    return 0;
}