// problem Link:

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;

        int arr[n][m];
        int count = 1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                arr[i][j] = count;
                count++;
            }
        }

        for (int i = 1; i < n; i += 2) {
            for (int j = 0; j < m; j++) {
                cout << arr[i][j] << ' ';
            }
            cout << '\n';
        }
        for (int i = 0; i < n; i += 2) {
            for (int j = 0; j < m; j++) {
                cout << arr[i][j] << ' ';
            }
            cout << '\n';
        }
    }
    return 0;
}