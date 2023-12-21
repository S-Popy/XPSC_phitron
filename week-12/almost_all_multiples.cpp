#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n, x; cin >> n >> x;

        if(n % x != 0) {
            cout << -1 << '\n';
            continue;
        }

        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            v[i] = i+1;
        }

        v[0] = x;
        v[n-1] = 1;
        for (int i = 2*x ; i <= n; i += x) {
            if(n % i == 0) {
                v[x - 1] = i;
                x = i;
            }
        }

        for (int i = 0; i < n; i++) {
            cout << v[i] << ' ';
        }
        cout << '\n';

    }
    return 0;
}