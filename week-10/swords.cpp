// problem Link:

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n; cin >> n;
    vector <int> v(n);
    int mx = INT_MIN;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        mx = max(mx, v[i]);
    }

    vector <int> p(n);
    int gc = 0;
    for (int i = 0; i < n; i++) {
        p[i] = mx - v[i];
        gc = __gcd(gc,p[i]);
    }

    ll count = 0;
    for (auto u: p) {
        count += u/gc;
    }

    cout << count << ' ' << gc << '\n';
    
    return 0;
}