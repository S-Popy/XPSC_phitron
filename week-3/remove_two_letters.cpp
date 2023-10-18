// problem Link: https://codeforces.com/problemset/problem/1800/D

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int ans = n;

        for(int i = 0; i <= n-3; i++){
            if(s[i] == s[i+2])
            ans--;
        }

        cout << ans-1 << '\n';
    }
    return 0;
}