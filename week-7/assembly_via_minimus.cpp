// problem Link: https://codeforces.com/problemset/problem/1857/C

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int m = n*(n-1) / 2;
        int arr[m];
        for (int i = 0; i < m; i++) {
            cin >> arr[i];
        }
        sort(arr, arr+m);

        for (int i = 0 ; i < m; i += --n) {
            cout << arr[i] << ' ';
        }
        cout << "1000000000\n";
    }
    return 0;
}