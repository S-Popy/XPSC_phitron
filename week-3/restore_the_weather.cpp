// problem Link: https://codeforces.com/problemset/problem/1833/B

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
using pii = pair<int,int>;
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int ans [n+5], arr[n+5];

        pii p[n+1];

        for(int i = 1; i <= n; i++){
            int x; cin >> x;
            p[i] = {x,i};
        }

        for(int i = 1; i <= n; i++){
            cin >> arr[i];
        }

        sort(arr + 1, arr + n + 1);
        sort(p + 1, p + n + 1);

        for(int i = 1; i <= n; i++){
            ans[p[i].second] = arr[i];
        }

        for(int i = 1; i <= n; i++){
            cout << ans[i] <<" ";
        }

        cout << '\n';
    }
    return 0;
}