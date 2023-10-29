// problem Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1415

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int i = 1;
    while (1) {
        int n, q; cin >> n >> q;

        if (n == 0 && q == 0) {
            break;
        }

        vector<int>v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

          cout << "CASE# " << i <<":\n";
          i++;

        while (q--) {
            int x; cin >> x;

            int l = 0, r = n-1;
            int ans = -1;
            while (l <= r) {
                int mid = l + (r-l) / 2;
                if (v[mid] == x) {
                    ans = mid;
                    r = mid - 1;
                }
                else if (x < v[mid]) {
                    r = mid - 1;
                }
                else {
                    l = mid + 1;
                }
            }
            if(ans != -1) {
            cout << x << " found at " << ans+1 << '\n';
            }
            else {
                cout << x << " not found\n";
            }
        }
    }
    return 0;
}