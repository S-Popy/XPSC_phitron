// problem Link:

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
        int n; cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }


        sort (v.begin(), v.end());

        vector<int>ans(n);

        int j = 0;
        for (int i = 1; i < n; i += 2) {
            ans[i] = v[j];
            j++;
        }

        for (int i = 0; i < n; i += 2) {
            ans[i] = v[j];
            j++;
        }

        int ans1 = 0;
        for (int i = 1; i < n - 1; i++) {
            if (ans[i] < ans[i-1] && ans[i] < ans[i+1]){
                ans1++;
            }
        }

        cout << ans1 << '\n';

        for (auto u : ans) {
            cout << u << ' ';
        }
        cout << '\n';

    return 0;
}