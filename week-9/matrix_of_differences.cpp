// problem Link: https://codeforces.com/problemset/problem/1783/B

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int>v;

        int p = 1, q = n*n;
        for (int i = 1; i <= n*n; i++) {
            if (i % 2 == 1) {
                v.push_back(p);
                p++;
            }
            else {
                v.push_back(q);
                q--;
            }
        }

        p = 0;
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 1) {
                for (int j = p; j < p+n; j++) {
                    cout << v[j] << ' ';
                }
                cout << '\n';
                p += n;
            }
            else {
                for (int j = (n+p)-1; j >= p; j--) {
                    cout << v[j] << ' ';
                }
                cout << '\n';
                p += n;
            }
        }
    }
    return 0;
}