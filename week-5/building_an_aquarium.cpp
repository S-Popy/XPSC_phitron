// problem Link: https://codeforces.com/problemset/problem/1873/E

#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin >> t;
    while (t--) {
        ll n, x , l = 1;
        ll r = 0;
        cin >> n >> x;
        vector < ll > v(n);
        for(ll i = 0 ; i < n ; i++) {
            cin >> v[i];
        }
        r = 1e10;

        while (l < r - 1) {
 
            ll total = 0;
            ll mid = l+(r-l)/2;
            for(ll i = 0 ; i < n ; i++) {
                if(v[i] < mid) {
                    total += (mid - v[i]);
                }
            }
            if(total > x) {
                r = mid;
            }
            else {
                l = mid;
            }
        }
        cout << l << endl;
    }  
    return 0;
}
