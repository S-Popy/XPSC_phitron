// problem Link: https://www.codechef.com/problems/CHEFODD

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        ll n, k; cin >> n >> k;

        int x;
        if(n % 2 == 0) {
            x = n / 2;
        }
        else {
            x = n / 2 + 1;
        }

        if (n >= 2*k) {
            int ans = x - k;

            if (ans % 2 == 0) {
                cout << "YES\n";
            }
            else {
                cout << "NO\n";
            }
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}