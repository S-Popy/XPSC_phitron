#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        string s, t; cin >> s >> t;

        int n = s.size();
        int m = t.size();

       while (m > 0 && n > 0) {
            if(t[m-1] == s[n-1]) {
                m--;
                n--;
            }
            else {
                n -= 2;
            }
       }

        if (m == 0) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}