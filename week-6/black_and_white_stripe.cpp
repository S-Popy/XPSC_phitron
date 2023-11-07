// problem Link: https://codeforces.com/problemset/problem/1690/D

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        string s; cin >> s;
        int ans = INT_MAX;

        int i = 0, j = 0;
        string p = "";
        int count = 0;

        while (j < n) {
            if(s[j] == 'W') 
                count++;

            if (j - i + 1 == k) {
                ans = min(ans, count);
                if (s[i] == 'W') {
                    count--;
                }
                i++;
            }
            j++;
        }

        cout << ans << '\n';

    }
    return 0;
}