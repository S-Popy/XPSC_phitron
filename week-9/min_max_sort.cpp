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
        vector<int>v(n+1);
        for (int i = 1; i <= n; i++) {
            int x; cin >> x;
            v[x] = i;
        }

       if ( n == 1) {
        cout << 0 << '\n';
        continue;
       }

       int l = (n+1)/2;
       int r = (n+2)/2;
       int ans = (n+1)/2;

       while(l >= 1 && (l == r || (v[l] < v[l+1]) && (v[r-1] < v[r]))) {
        l--;
        r++;
        ans--;
       }

       cout << ans << '\n';
    }
    return 0;
}