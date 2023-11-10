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

        map<char,int>mp;

        for (int i = 0; i < n; i++) {
            mp[s[i]]++;
        }
        int odd_count = 0, pal = 1;

        for (auto u : mp) {
            if (u.second % 2 != 0) {
                odd_count++;
            }
        }
            if ((n % 2 == 0 && odd_count >= 1) || ( n % 2 != 0 && odd_count > 1)) {
                pal = 0;
        }
            if (!pal) {
                cout << 0 << '\n';
            }
            else {
                if (n % 2 == 0 || (n % 2 != 0 && mp.size() >= 2)) {
                    cout << 1 << '\n';
                }
                else {
                    cout << 2 << '\n';
                }
            }
    }
    return 0;
}