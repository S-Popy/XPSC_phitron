// problem Link:

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n; cin >> n;
    int arr[n][n];
    memset(arr, 0 , sizeof(arr));

    vector<int>v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int k = 0; k < n; k++) {
        int i = k, j = k;
        int count = v[k];
        while (count--) {
            arr[i][j] = v[k];
            if(j != 0 && arr[i][j-1] == 0) {
                j--;
            }
            else {
                i++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(arr[i][j] != 0)
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}