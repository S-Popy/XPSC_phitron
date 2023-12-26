#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        vector<int> v(n);
        vector<int> l (k, n), r(k, -1);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
            v[i]--;
            l[v[i]] = min (l[v[i]], i);
            r[v[i]] = i;
        }

        auto sl = l, sr = r;
        for (int i = k - 2; i >= 0; i--) {
            sl[i] = min (sl[i], sl[i+1]);
            sr[i] = max (sr[i], sr[i+1]);
        }

        for (int i = 0; i < k; i++) {
            if(l[i] > r[i]) {
                cout << 0 << ' ';
            }
            else {
                cout << 2 * (sr[i] - sl[i] + 1) << ' ';
            }
        }

        cout << '\n';
    }
    return 0;
}