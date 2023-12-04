// problem Link:

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        string s; cin >> s;

        if (k % 2 == 0) {
            sort(s.begin(), s.end());
            cout << s << '\n';
            continue;
        }

        vector<char> e_indx, o_indx;
        for (int i = 0; i < n; i++) {
            if (i&1) {
                e_indx.push_back(s[i]);
            }
            else {
                o_indx.push_back(s[i]);
            }
        }

        sort (o_indx.begin(), o_indx.end());
        sort (e_indx.begin(), e_indx.end());

        int p = 0, q = 0;
        for (int i = 0; i < n; i++) {
            if(i % 2 == 0) {
                cout << o_indx[p];
                p++;
            }
            else {
                cout << e_indx[q];
                q++;
            }
        }

        cout << '\n';

    }
    return 0;
}