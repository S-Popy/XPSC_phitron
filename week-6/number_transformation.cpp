// problem Link: https://codeforces.com/problemset/problem/1674/A

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int x, y; cin >> x >> y;
        if (x > y || y %x != 0) {
            cout << 0 << ' ' << 0 << '\n';
            continue;
        }
        if (x == y) {
            cout << 1 << ' ' << 1 << '\n';
            continue;
        }

        int p = y /x;
        cout << 1 << ' ' << p << '\n';
    }
    return 0;
}