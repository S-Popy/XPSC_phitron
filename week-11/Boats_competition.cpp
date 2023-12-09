// problem Link:

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        int ans = INT_MIN;

        for (int sum = 1; sum <= 2*n+1; sum ++) {
        int i = 0, j = n - 1;
        int count = 0;
        while (i < j) {
            int x = v[i] + v[j];

            if (x == sum) {
                count++;
                i++;
                j--;
            }
            else if (sum < x) {
                j--;
            }
            else if (sum > x) {
                i++;
            }
        }
            ans = max(ans, count);
        }

        cout << ans << '\n';
    }
    return 0;
}