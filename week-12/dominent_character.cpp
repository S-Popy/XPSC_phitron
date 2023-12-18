#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        int ans = - 1;
        for (int i = 0; i < n; i++) {
            int a = 0, b = 0, c = 0;

            for (int j = i; j < min (n, i+20); j++) {
                if (s[j] == 'a') {
                    a++;
                }
                if (s[j] == 'b') {
                    b++;
                }
                if (s[j] == 'c') {
                    c++;
                }

                if ( a > b && a > c && j - i + 1 >= 2) {
                    if (ans == -1) {
                        ans = j - i + 1;
                        }
                    ans = min ( ans, j - i + 1);
                }
            }
        }

        cout << ans << '\n';
    }
    return 0;
}