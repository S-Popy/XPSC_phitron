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

        vector <int > ans;
        ans.push_back(n);
        int x = 1;
        while (n != 1) {
            int tmp = n;
            x = 1;
            while (tmp % 2 == 0) {
                tmp /= 2;
                x *= 2;
            }
            if (tmp == 1) {
                break;
            }
            n -= x;
            ans.push_back(n);
        }

        x /= 2;
        while (x >= 1) {
            ans.push_back(x);
            x /= 2;
        }

        cout << ans.size() << '\n';

        for (auto u : ans) {
            cout << u << ' ';
        }
        cout << '\n';
    }
    return 0;
}