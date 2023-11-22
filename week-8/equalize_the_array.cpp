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
        map<int,int>mp;

        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            mp[x]++;
        }

       vector<int>v;
       for (auto u : mp) {
        v.push_back(u.second);
       }

       sort(v.begin(), v.end());
       int mn = INT_MAX;

       for (int i = 0; i < v.size(); i++) {
            int p = v.size() - i;
            mn = min (mn, n - v[i]*p);
       }
       cout << mn << '\n';
    }
    return 0;
}