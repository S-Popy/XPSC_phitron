// problem Link: https://www.spoj.com/problems/OLOLO/en/

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin>> n;
     map<int, int> mp;

    for(int i=0; i<n; i++){
        int x;
        cin>> x;
        mp[x]++;
    }

    int ans;
    for(auto x : mp){
        if(x.second == 1){
            ans = x.first;
            break;
        }
    }

    cout<< ans <<endl;

    return 0;
}