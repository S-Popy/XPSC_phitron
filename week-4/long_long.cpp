// problem Link: https://codeforces.com/problemset/problem/1843/B

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        ll sum = 0;
        int arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += abs(arr[i]);
        }

        int count = 0;
        int ans = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] < 0) {
                count = 1;
            }
            else if (arr[i] > 0) {
                ans += count;
                count = 0;
            }
        }
        ans += count;
        cout << sum << ' ' << ans << '\n';
    }
    return 0;
}