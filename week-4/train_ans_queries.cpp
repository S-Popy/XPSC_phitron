// problem Link: https://codeforces.com/problemset/problem/1702/C

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int t; cin >> t;
    while(t--) {
        int n, q; cin >> n >> q;
        map<int,int> mp1, mp2;

        for (int i = 1; i <= n; i++) {
            int x; cin >> x;
            if(mp1[x] == 0) 
            mp1[x] = i;
            mp2[x] = i;
           
        }

        while (q--) {
            int p, q; cin >> p >> q;
            if(mp1[p] != 0 && mp1[q] != 0 && mp2[q] >= mp1[p]) {
                cout << "YES\n";
            }
            else {
                    cout << "NO\n";
                }
            }

    }
    return 0;
}