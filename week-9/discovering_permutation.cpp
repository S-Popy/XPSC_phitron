// problem Link:

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
 
    int t; cin >> t;
    for (int i = 1; i <= t; i++) {
        int n, k; cin >> n >> k;
        cout << "Case " << i << ':' << '\n';

        string p, q;
        p = s.substr(0,n);
        q = p;

        for (int j = 1; j <= k; j++) {
            cout << p << '\n';
            next_permutation(p.begin(), p.end());
            if ( p == q) {
                break;
            }
        }

    }
    return 0;
}