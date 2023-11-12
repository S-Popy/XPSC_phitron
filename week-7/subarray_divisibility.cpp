// problem Link: https://cses.fi/problemset/task/1662

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n; cin >> n;
    vector<int> v(n);

    for(auto &u : v) {
        cin >> u;
    }

    ll j = 0, count = 0;
    ll sum = 0;
        
    map<ll,int>mp;
    mp[0]++;
        
        while(j < n){
            sum += v[j] % n;
            sum = (sum+n) % n;
            count += mp[sum]; 
            mp[sum]++;
            j++;
        }
        
        cout << count << '\n';

    return 0;
}