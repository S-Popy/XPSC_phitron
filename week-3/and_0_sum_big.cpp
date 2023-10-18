// problem Link: https://codeforces.com/problemset/problem/1514/B

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;

const int MOD = 1e9+7;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--){

        int n, k; cin >> n >> k;
        ll ans = 1;

        for(int i = 0; i < k; i++){
            ans = (ans*n) % MOD;
        }

        cout << ans << endl;
    }
    return 0;
}