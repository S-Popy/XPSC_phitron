// problem Link: https://atcoder.jp/contests/abc162/tasks/abc162_c?lang=en

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin>> n;
    ll ans = 0;

    for(int i =1; i<=n; i++){
        for(int j =1; j<=n; j++){
            for(int k =1; k<=n; k++){
                ans += __gcd(__gcd(i,j), k);
            }
        }
    }

    cout<< ans <<endl;
    return 0;
}