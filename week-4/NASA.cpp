// problem Link: https://www.codechef.com/problems/PALIXOR

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int>pali;

    for(int i = 0; i < 32786; i++) {
        string s = to_string(i);
        string temp = s;
        reverse(s.begin(), s.end());
        if (temp == s) {
            pali.push_back(i);
        }
    }
 
    int t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        vector<int>v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        unordered_map<int,int> mp;
        ll ans = 0;

        for(int i = 0; i < n; i++) {
            mp[v[i]]++;

        for (auto u : pali) {
            ans += mp[v[i]^u];
        }
    }

    cout << ans << '\n';
    }
    return 0;
}