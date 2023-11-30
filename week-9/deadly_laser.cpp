// problem Link: https://codeforces.com/problemset/problem/1721/B

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n, m, x, y, d; cin >> n >> m >> x >> y >> d;

        bool flag = false;

        if (x + d >= n && y + d >= m) {
            flag = true;
        }
        if (x - d <= 1 && y - d <= 1) {
            flag = true;
        }
        if (x - d <= 1 && x + d >= n) {
            flag = true;
        }
        if (y - d <= 1 && y + d >= m) {
            flag = true;
        }

        if (!flag)
            cout << n+m - 2 << '\n';
        else {
            cout << -1 << '\n';
        }
        }
    return 0;
}