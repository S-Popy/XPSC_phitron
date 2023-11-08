// problem Link: https://codeforces.com/problemset/problem/1675/C

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {

        string s; cin >> s;
        int n = s.size();

        if(count(s.begin(), s.end(), '?') == n) {
            cout << n << '\n';
            continue;
        }

        if (count(s.begin(), s.end(), '1') == 0) {
            int ans = 0;
            for (int i = 0; i < n; i++) {
                ans++;
                if(s[i] == '0')
                break;
            }
            cout << ans << '\n';
            continue;
        }

        int last_zero = -1;
        int ans ;
        for (int i = n-1; i >= 0; i--) {
            if (s[i] == '0') {
                last_zero = i;
            }
            else {
                if (s[i] == '1') {
                    if (last_zero == -1) {
                        ans = n-i;
                        break;
                    }
                    else {
                        ans = last_zero - i +1;
                        break;
                    }
                }
            }
        }

        cout << ans << '\n';
 
    }
    return 0;
}