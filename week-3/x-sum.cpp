// problem Link: https://codeforces.com/problemset/problem/1676/D

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;

        int arr[n][m];

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> arr[i][j];
            }
        }

        int mx = 0;

        for(int i =0; i<n; i++){
            for(int j =0; j<m; j++){
                int sum = 0;
                int ci = i, cj = j;

                while(ci >= 0 && ci<n && cj >= 0 && cj <m){
                    sum += arr[ci][cj];
                    ci--;
                    cj--;
                }

                ci = i, cj = j;
                while(ci >= 0 && ci<n && cj >= 0 && cj <m){
                    sum += arr[ci][cj];
                    ci++;
                    cj--;
                }

                ci = i, cj = j;
                while(ci >= 0 && ci<n && cj >= 0 && cj <m){
                    sum += arr[ci][cj];
                    ci--;
                    cj++;
                }

                ci = i, cj = j;
                while(ci >= 0 && ci<n && cj >= 0 && cj <m){
                    sum += arr[ci][cj];
                    ci++;
                    cj++;
                }

             sum -= arr[i][j]*3;
              mx = max(mx, sum);

            }
        }

        cout << mx <<endl;

    }
    return 0;
}