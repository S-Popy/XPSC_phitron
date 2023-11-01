// problem Link: 

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n, m; 
    while (cin >> n >> m) {
        int arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int l = 0, r = INT_MAX;
        int ans;

        while (l <= r) {
            int cap = l + (r - l) / 2;
            int cont = 1;
            int sum = 0;

            for (int i = 0; i < n; i++) {
                if (arr[i] > cap) {
                    cont = INT_MAX;
                    break;
                }
                sum += arr[i];
                if(sum > cap) {
                    cont++;
                    sum = arr[i];
                }
            }

            if (cont <= m) {
                ans = cap;
                r = cap-1;
            }
            else {
                l = cap + 1;
            }
        }

        cout << ans << '\n';
    }
    return 0;
}