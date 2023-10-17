// problem Link: https://codeforces.com/problemset/problem/1790/C

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[110][110];

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n-1; j++){
                cin >> arr[i][j];
            }
        }

        int x = arr[0][0];
        if( x != arr[1][0])
        x = arr[2][0];
        
        cout << x << " ";

        for(int i = 0; i < n; i++){
            for (int j = 0; j < n-1; j++){
               if(arr[i][0] != x)
               cout << arr[i][j] << " ";
            }
        }
         cout<< '\n';
    }
    return 0;
}