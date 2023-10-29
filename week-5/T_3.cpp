// problem Link: https://www.spoj.com/problems/AGGRCOW/en/

#include<bits/stdc++.h>
using namespace  std;

bool isValid (int mid, int arr[], int n, int c) {
    int count = 1, last = 0;

    for (int i = 1; i < n; i++) {
        if (abs(arr[i] - arr[last]) >= mid) {
            count++;
            last = i;
        }
    }

    return count >= c;
}
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n, c;
         cin >> n >> c;
         int arr[n];

         for (int i = 0; i < n; i++) {
            cin >> arr[i];
         }

         sort(arr, arr+n);
         int ans;
         int l = 0, r = INT_MAX;

         while(l <= r) {
            int mid = l + (r - l) / 2;

            if(isValid(mid, arr, n, c)) {
                ans = mid;
                l = mid + 1;
            }
            else {
                r = mid - 1;
            }
            
         }

         cout << ans << '\n';

    }

    return 0;
}