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
        int c = 1;
        n -= c;
        int a, b;

        for (int i = 2; i <= n; i++) {
            int x = n - i;
            if (__gcd(x, i) != 1) {
                continue;
            }
            else {
                a = n - i;
                b = i;
                break;
            }
        }
        cout << a << ' ' << b << ' ' << c << '\n';
    }
    return 0;
}