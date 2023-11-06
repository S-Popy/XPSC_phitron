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
        vector<int> a(n), b(n);

        for (int &x : a) {
            cin >> x;
        }

        for (int &x : b) {
            cin >> x;
        }

        bool flag = false;
        int x = -1, y = -1;

        for (int i = 0; i < n; i++) {
            if (a[i] < b[i]) {
                flag = true;
                break;
            }

            if (b[i] != 0) {
                if ( x == -1) {
                    x = a[i] - b[i];
                }
                else {
                    if (a[i] - b[i] != x) {
                        flag = true;
                        break;
                    }
                }
            }
            else {
                y = max (y, a[i] - b[i]);
            }
        }

        if (flag) {
            cout << "NO\n";
            continue;
        }
        if (x == -1 || y <= x) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}