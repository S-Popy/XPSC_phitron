// problem Link: https://cses.fi/problemset/task/1661

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n, x; cin >> n >> x;
    vector<int> v(n);

    for(auto &u : v) {
        cin >> u;
    }

    ll j = 0, count = 0;
    ll sum = 0;
        
    map<ll,int>mp;
    mp[0]++;
        
        while(j < n){
            sum += v[j];
            count += mp[sum - x];
            mp[sum]++;
            j++;
        }
        
        cout << count << '\n';

    return 0;
}