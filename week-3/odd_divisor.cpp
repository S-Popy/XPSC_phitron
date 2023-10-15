// problem Link: https://codeforces.com/problemset/problem/1475/A

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--){

        ll n;
        cin>> n;

        if(n & (n-1)){
            cout << "YES" <<endl;
        }else{
            cout << "NO" <<endl;
        }
    }
    return 0;
}