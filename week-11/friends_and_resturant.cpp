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
        vector<int> v(n, 0);

        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            v[i] -= x;
        }

        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            v[i] += x;
        }

        sort(v.begin(), v.end(), greater<int>());

        int ans = 0;
        int i = 0, j = n-1;
        while(i < j) {
            if(v[i] > -1 && v[j] > -1) {
                ans++;
                i++;
                j--;
            }
            else if(v[i] < 0 && v[j] < 0) {
                break;
            }
            else if (v[i] > -1) {
                if(v[i] >= abs(v[j])) {
                    ans++;
                    i++;
                    j--;
                }
                else {
                    j--;
                }
            }
        }

        cout << ans << '\n';
    }
    return 0;
}