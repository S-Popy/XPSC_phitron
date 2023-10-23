// problem Link: https://codeforces.com/problemset/problem/1843/A

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int t; cin >> t;
    while(t--) {
        vector<int>v;
        int n; cin >> n;

        for (int i = 0; i < n; i++){
            int x; cin >> x;
            v.push_back(x);
        }

        sort(v.begin(), v.end());

        int ans = 0;
        int i = 0, j = n-1;

        while(i<=j) {
            ans += abs(v[i] - v[j]);
            i++;
            j--;
        }

        cout << ans << '\n';
    }
    return 0;
}