// problem Link: https://codeforces.com/problemset/problem/1843/C

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        ll sum = 0;

        while(n > 0) {
            sum += n;
            n /= 2;
        }

        cout << sum << '\n';
    }
    return 0;
}