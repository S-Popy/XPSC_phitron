// problem Link:

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n, x; cin >> n >> x;
        vector<int>v(n), v2;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        v2 = v;
        sort(v2.begin(), v2.end());

        bool flag = true;
        for (int i = 0; i < n; i++) {
            if (i < x && (n-i) <= x && (v[i] != v2[i])) {
                flag = false;
                break;
            }
        }

        if (flag) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}