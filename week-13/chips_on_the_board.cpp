#include<bits/stdc++.h>
using namespace std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;

        vector<ll> a(n);
        vector<ll> b(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        for(int i = 0; i < n; i++){
            cin >> b[i];
        }

        ll sum1 = 0, sum2 = 0;

        sort(a.begin(), a.end());
        sort (b.begin(), b.end());

        for(auto u : a){
            sum1 += b[0] + u;
        }

        for(auto u : b){
            sum2 += a[0] + u;
        }

        cout << min(sum1, sum2) << endl;
    }

    return 0;
}

