// problem Link: https://codeforces.com/problemset/problem/1352/E

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int>v(n), cnt(n+1, 0);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
            cnt[v[i]]++;
        }

        int ans = 0;
        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = i; j < n; j++) {
                sum += v[j];
            if(i == j) {
                continue;
            }
            if(sum <= n) {
                ans += cnt[sum];
                cnt[sum] = 0;
            }
        }
        }
        cout << ans << '\n';
    }
    return 0;
}