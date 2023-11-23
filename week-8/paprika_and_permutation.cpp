// problem Link: https://codeforces.com/problemset/problem/1617/C

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int>v(n);
        map<int,int>mp, mp2;

        for (int i = 0; i < n; i++) {
            cin >> v[i];
            mp[v[i]]++;
        }

        vector<int>temp;
        for (auto u : mp) {
            if (u.first <= n) {
                for (int i = 1; i < u.second; i++) {
                    temp.push_back(u.first);
                }
                mp2[u.first] = 1;
            }
            else {
                for(int i = 1; i <= u.second; i++) {
                    temp.push_back(u.first);
                }
            }
        }
            
        int count = 1, ans = 0;
        for (int i = 0; i < temp.size(); i++) {
            for (int  j = count; j <= n; j++) {
                if(mp2[j] == 1) {
                    count++;
                }
                else {
                    break;
                }
            }
            int x = (temp[i] - 1) / 2;
            if(count <= x) {
                count++;
                ans++;
            }
            else {
                ans = -1;
                break;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}