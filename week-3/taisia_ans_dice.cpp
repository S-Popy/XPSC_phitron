// problem Link: https://codeforces.com/problemset/problem/1790/B

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--){
        int n, s, r;
        cin >> n >> s >> r;
        cout << s - r << " ";

        for(int i = 0; i < n - 1; i++){
            cout << (r+i)/(n-1) << " ";
        }

        cout << endl;
    }
    return 0;
}

