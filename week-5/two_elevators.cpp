// problem Link: 

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int a, b, c; cin >> a >> b >> c;

        int x = abs(b-c) + abs(c-1);
        int y = abs(a-1);

        if (y < x) {
            cout << 1 << '\n';
        }
        else if (x == y) {
            cout << 3 << '\n';
        }
        else {
            cout << 2 << '\n';
        }
    }
    return 0;
}