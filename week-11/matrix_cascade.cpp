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
        vector<string> s(n);

        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }

        int ans = 0;
        vector<vector<int>> cnt (n, vector<int>(n, 0));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if ( i > 0) {
                    if(j) {
                        cnt[i][j] += cnt[i-1][j-1];
                    }
                    else if (i - 2 >= 0) {
                        cnt[i][j] += cnt[i-2][j];
                    }

                    if (j+1 < n) {
                        cnt[i][j] += cnt[i-1][j+1];
                    }
                    else if (i-2 >= 0) {
                        cnt[i][j] += cnt[i-2][j];
                    }

                    if (i - 2 >= 0) {
                        cnt[i][j] -= cnt[i-2][j];
                    }
                    if (s[i-1][j] == '1') {
                        cnt[i][j]++;
                    }
                }
            }

            for (int j = 0; j < n; j++) {
                if(cnt[i][j] % 2 == 1) {
                    if(s[i][j] == '1') {
                        s[i][j] = '0';
                    }
                    else {
                        s[i][j] = '1';
                    }
                }
            }

            for (int j = 0; j < n; j++) {
                if (s[i][j] == '1') {
                    ans++;
                    cnt[i][j]++;
                }
            }
        }

        cout << ans << '\n';
    }
    return 0;
}