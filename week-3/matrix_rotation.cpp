// problem Link: https://codeforces.com/problemset/problem/1772/B

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--){
        int a, b, c, d; cin >> a >> b >> c >>d;

        if((a < b && c > d) || (a > b && c < d) || (a > c && b < d) || (a < c && b > d)) {
            cout << "NO\n";
        }else{
            cout << "YES\n";
        }
    }
    return 0;
}