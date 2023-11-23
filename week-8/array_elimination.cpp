// problem Link: https://codeforces.com/problemset/problem/1602/C

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int>v(n), a(33), ans;

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        for (int i = 0; i < 32; i++) {
            for (int j = 0; j < n; j++) {
                if(v[j] & (1 << i))
                a[i]++;
            }
        }

        for (int i = 1; i <= n; i++) {
            bool flag = true;
            for (int j = 0; j < 32; j++) {
                if(a[j] % i != 0) {
                    flag = false;
                    break;
                }
            }

            if(flag){
                ans.push_back(i);
            }
        }

        sort(ans.begin(), ans.end());

        for(auto u : ans) {
            cout << u << ' ';
        }

        cout << '\n';

    }
    return 0;
}