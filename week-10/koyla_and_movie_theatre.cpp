// problem Link:

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        ll n, m, d; cin >> n >> m >> d;
        vector<ll> v(n);
        priority_queue<ll,vector<ll>, greater<ll>> pq;

        for (int i = 0; i < n; i++) {
            cin >> v[i];
            v[i] -= d;
            v[i] = max(-d, v[i]);
        }

        ll sum = 0, ans = 0;
        for (int i = 0; i < n; i++) {
            sum += v[i];
            pq.push(v[i]);
            if (pq.size() > m) {
                ll x = pq.top();
                pq.pop();
                sum -= (x + d);
            }
            ans = max(ans, sum);
        }
        cout << ans << '\n';
    }
    return 0;
}