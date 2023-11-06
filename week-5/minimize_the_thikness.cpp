// problem link: https://codeforces.com/problemset/problem/1741/C

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

        for (auto &x : v) {
            cin >> x;
        }

        int ans = n;
        ll segSum = 0;

        for (int i = 0; i < n; i++) {
            segSum += v[i];
            ll sum = 0;
            int len = 0, mxlen = i + 1;

            bool flag = false;
            for (int j = i + 1; j < n; j++) {
                if (sum + v[j] > segSum) {
                    break;
                }
            

            if ( j == n-1 && sum + v[j] == segSum) {
                mxlen = max (mxlen, len+1);
                flag = true;
                break;
            }

            sum += v[j];
            len++;

            if (sum == segSum) {
                mxlen = max(mxlen, len);
                len = 0;
                sum = 0;
            }
        }

        if (flag) {
            ans = min (ans, mxlen);
        }
        }

        cout << ans << '\n';

    }
    return 0;
}