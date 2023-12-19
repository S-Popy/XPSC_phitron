#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int > a(n), b(n);

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for(int i = 0; i < n; i++) {
            cin >> b[i];
        }

        bool ok = true;
        for (int i = 0; i < n; i++) {
            if (b[i] < a[i]) {
                ok = false;
            }

            if(a[i] != b[i] && b[(i+1) % n] + 1 < b[i]) {
                ok = false;
            }
        }

        if(!ok) {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
        }
    }
    return 0;
}