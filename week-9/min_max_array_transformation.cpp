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
        int a[n+1], b[n+1];

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        vector<int>mn, mx;
        int indx = 0;
        for (int i = 0; i < n; i++) {
            while (indx < n && a[i] > b[indx]) {
                indx++;
            }

            mn.push_back(b[indx] - a[i]);
        }

        for (auto u : mn) {
            cout << u << ' ';
        }
        cout << '\n';

        indx = n-1;
        for (int i = n-1; i >= 0; i--) {
            mx.push_back(b[indx] - a[i]);
            if(a[i] > b[i-1]) {
                indx = i -1;
            }
        }

        reverse(mx.begin(), mx.end());

         for (auto u : mx) {
            cout << u << ' ';
        }
        cout << '\n';
    }
    return 0;
}