// problem Link: https://www.codechef.com/problems/WARRIORCHEF?tab=statement

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n, h; cin >> n >> h;
        vector<int>v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        sort(v.begin(), v.end(), greater<int>());

        ll sum = 0;
        int i = 0, ans = 0;

        while (i < n) {
            sum += v[i];

            if (sum >= h) {
                ans = v[i];
                break;
            }
            i++;
        }

        cout << ans << '\n';
    }
    
    return 0;
}