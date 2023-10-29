// problem Link: https://codeforces.com/problemset/problem/817/C

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    ll n, s, r, l = 0;
    cin >> n >> s;
    r = n + 1;

    while ( r > l) {
        ll mid = (l + r) / 2;
        ll x = 0;
        while( mid > 0) {
            x += mid % 10;
            mid /= 10;
        }

        mid = (l + r) / 2;
        if (mid - x < s) {
            l = mid + 1;
        }
        else {
            r = mid;
        }
    }

        cout << n - r + 1 << '\n';

    return 0;
}