#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    ll n, k; cin >> n >> k;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    ll m = v[n/2];

    ll count = 0;
    for (int i = n/2; i < n && k; i++) {
        if(v[i] == m) {
            count++;
        }
        else {
            if((v[i] - m) * count <= k) {
                k -= ((v[i] - m) * count);
                 m = v[i];
                 count++;
            }
            else {
                m += (k/count);
                k = 0;
                break;
            }
        }
    }

    if(k) {
        m += (k/count);
    }

    cout << m << '\n';

    return 0;
}