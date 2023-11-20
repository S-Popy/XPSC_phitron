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
        vector<int>v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

            bool ans = false;
            for (int i = 0; i < n; i++) {
                bool flag = false;
                for (int j = 2; j <= i+2; j++) {
                    if (v[i] % j != 0) {
                        flag = true;
                        break;
                    }
                }
                if (flag == false) {
                    ans = true;
                    break;
                }
            }

        if (ans) {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
        }
    }
    return 0;
}