// problem Link: https://codeforces.com/problemset/problem/1743/C

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        vector<int>v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        
        priority_queue<int>pq;
        int ans = 0, cnt = 0;
        
        for (int i = 0; i < s.size(); i++) {
           if (s[i] == '0') {
            while(!pq.empty()) {
                if (cnt > 0) {
                    ans += pq.top();
                    cnt--;
                }
                pq.pop();
            }
           }
           else {
            if (i-1 >= 0 && s[i-1] == '0')
            pq.push(v[i-1]);
            pq.push(v[i]);
            cnt++;
           }
        }

        while(!pq.empty()) {
                if (cnt > 0) {
                    ans += pq.top();
                    cnt--;
                }
                pq.pop();
            }

        cout << ans << '\n';

    }
    return 0;
}