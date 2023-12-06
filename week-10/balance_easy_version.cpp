// problem Link:

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int q; cin >> q;
    map<ll,ll>mp;
    set<ll>s;

    while (q--) {
        char ch;
        ll x;
        cin >> ch >> x;

        if (ch == '+') {
            s.insert(x);
        }else {
            ll y = 0;
            if(mp.count(x)) {
                y = mp[x];
            }else {
                y = x;
            }

            while (s.count(y)) {
                y += x;
            }
            mp[x] = y;
            cout << y << '\n';
        }
    }
    return 0;
}