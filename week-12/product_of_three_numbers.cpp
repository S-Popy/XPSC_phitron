#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        ll a = -1, b = -1, c = -1;

        int x = n;
        for (int i = 2; i*i <= n; i++) {
            if(x % i == 0) {
                a = i;
                break;
            }
        }

        if (a == -1) {
            cout << "NO\n";
            continue;
        }

        for (int i = 2; i*i <= n; i++) {
            if((x / a) % i == 0 && i != a) {
                b = i;
                break;
            }
        }

        if (b == -1) {
            cout << "NO\n";
            continue;
        }

        c = x/(a*b);
        if(c == 1 || a == c || b == c) {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
            cout << a << ' ' << b << ' ' << c << '\n';
        }
        
        }
    return 0;
}