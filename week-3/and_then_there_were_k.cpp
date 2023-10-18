// problem Link: https://codeforces.com/problemset/problem/1527/A

#include<bits/stdc++.h>
using namespace  std;
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--){

        int n; cin >> n;
        int i =1;
        while(i*2 <= n){
            i = i*2;
        }

        cout << i-1 << '\n';
    }
    return 0;
}