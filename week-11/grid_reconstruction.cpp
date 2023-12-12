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
        int arr[2][n+1];
        arr[0][1] = 2 * n;
        arr[1][n] = 2 * n - 1;

        int x = 1;
        for (int i = 1; i <= n; i++) {
            arr[i%2][i] = x;
            x++;
        }

        x = 2 * n - 2;
        for (int i = 3; i <= n; i += 2) {
            arr[0][i] = x;
            arr[1][i-1] = x - 1;
            x -= 2;
        }

        for (int i = 0; i < 2; i++) {
            for (int j = 1; j <= n; j++) {
                cout << arr[i][j] << ' ';
            }
            cout << '\n';
        }
    }
    return 0;
}