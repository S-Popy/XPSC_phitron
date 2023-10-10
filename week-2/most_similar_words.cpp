// problem Link: https://codeforces.com/problemset/problem/1676/C

#include<bits/stdc++.h>
using namespace  std;
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin>> n >> m;
        
        vector<string> v(n);
        for(int i=0; i<n; i++){
            cin>> v[i];
        }

        int ans = INT_MAX;

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                int sum = 0;
                for(int k=0; k<v[i].size(); k++){
                    sum += abs (v[i][k] - v[j][k]);
                }

                ans = min(ans, sum);
            }
        }

        cout<< ans <<endl;

    }
    return 0;
}