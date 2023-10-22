// problem Link: https://codeforces.com/problemset/problem/1744/A

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
     cout.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int>v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        string s; cin >> s;

        for (int i = 0; i < n; i++) {
            if( !(v[i] >= 97 && v[i] <= 122)) {
                int x = int(s[i]);
                int p = v[i];
                replace (v.begin(), v.end(), p, x);
            }
        }

        string m ="";
        for (auto u:v) {
            char p = char(u);
             m += p;
        }

        if(s == m) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}