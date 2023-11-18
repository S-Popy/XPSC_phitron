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

        if (n % 2 != 0) {
        for (int i = 1; i <= n; i++) {
            cout << i << ' ';
        }
        cout << '\n';
    } else {
        for (int i = 2; i <= n*2; i += 2) {
            cout << i << ' ';
        }
        cout << '\n';
    }
    }

    return 0;
}