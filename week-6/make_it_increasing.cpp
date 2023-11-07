// problem Link: https://codeforces.com/problemset/problem/1675/B

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int>v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

    int count = 0;
    for (int i = n-2; i >= 0; i--) { 
            while (v[i] != 0 && v[i] >= v[i+1]) {
                v[i] = v[i]/2;
                count++;
                }
                
                if (v[i] >= v[i+1] || (v[i] == 0 && i > 0)) {
                    count = -1;
                    break;
            }
        }
    

    cout << count << '\n';
    }
    return 0;
}