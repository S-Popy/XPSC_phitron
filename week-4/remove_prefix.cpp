// problem Link: https://codeforces.com/problemset/problem/1714/B

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int ans = 0;
        map<int,int>mp;

        for(int i = 1; i <= n; i++) {
            int x; cin >> x;

            if(mp[x] > ans) {
                ans = mp[x];
            }
                mp[x] = i;
            
        }
        cout << ans << '\n';
 
    }
    return 0;
}