#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        priority_queue<pair<int,int>> pq;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            if(x != 0) {
                pq.push({x, i+1});
            }
            
        }

        vector<pair<int, int>> ans;
        while (pq.size() > 1) {
            auto a = pq.top();
            pq.pop();
            auto b = pq.top();
            pq.pop();

            ans.push_back({a.second, b.second});

            if(a.first > 1) {
                pq.push({a.first - 1, a.second});
            }

            if (b.first > 1) {
                pq.push({b.first - 1, b.second});
            }
        }

        cout << ans.size() << '\n';
        for(int i = 0; i < ans.size(); i++) {
            cout << ans[i].first << ' ' << ans[i].second << '\n';
        }
    }
    return 0;
}