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
        string s; cin >> s;
        string r = s;
        
        int ans = INT_MAX;

        for (char ch = 'a'; ch <= 'z'; ch++) {
        int i = 0, j = n-1, count = 0;
        while(i <= j) {
            if(s[i] == s[j]) {
                i++;
                j--;
            }
            else if(s[i] == ch) {
                count++;
                i++;
            }
            else if (s[j] == ch) {
                count++;
                j--;
            }
            else {
                count = n+1;
                break;
            }

            }
            ans = min (ans, count);
        }

        if(ans == n+1) {
            cout << -1 << '\n';
        }
        else {
            cout << ans << '\n';
        }
        }
    return 0;
}