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
        set<int>s;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            s.insert(x);
        }

        if ( s.size() == 2) {
            cout << (n/2) + 1 << '\n';
        }
        else {
            cout << n << '\n';
        }
    }
    return 0;
}