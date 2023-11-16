// problem Link: https://codeforces.com/problemset/problem/1894/B

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int>v(n, 1), vis(101);
        int p = 2, count = 0;

        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            if (vis[x] == 1) {
                v[i] = p;
                p ^= (2^3);
                count++;
            }
            vis[x]++;
        }

        if (count >= 2) {
            for (int i = 0; i < n; i++) {
                cout << v[i] << ' ';
            }
        }
        else {
            cout << -1;
        }
        cout << '\n';
    }
    return 0;
}