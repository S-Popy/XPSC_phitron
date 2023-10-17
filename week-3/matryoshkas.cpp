// problem Link: https://codeforces.com/problemset/problem/1790/D

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--) {
        int n; cin >> n;
        map<int,int>mp;
        set<int>st;

        for(int i = 0; i < n; i++){
            int m; cin >> m;
            st.insert(m);
            st.insert(m + 1);
            mp[m]++;
        }

        int x = 0, ans = 0;

        for(auto u: st){
            int p = mp[u];
            ans += max(0, p-x);
            x = p;
        }

        cout << ans << '\n'; 
    }
    return 0;
}