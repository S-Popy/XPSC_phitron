// problem Link: 

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int n = s.length();

        vector<pair<char,int>>v;

        char mn = min (s[0], s[n-1]);
        char mx = max (s[0], s[n-1]);

        for (int i = 0; i < n; i++) {
            if (s[i] >= mn && s[i] <= mx) {
                v.push_back({s[i], i});
            }
        }

        sort (v.begin(), v.end(), [&] (pair<char,int> a, pair<char,int>b) {
            return a.second < b.second;
        });

        if (v.size() > 2) {
            sort (v.begin()+1, v.begin()+v.size() - 1, [&] (pair<char,int>a, pair<char,int>b) {
                if (s[0] > s[n-1]){
                    return a.first > b.first;
                }
                return a.first < b.first;
            });
        }

        vector<int>ans;
        ll count = 0;
        ans.push_back(1);
        for (int i = 1; i < v.size(); i++) {
            count += abs (v[i-1].first - v[i].first);
            ans.push_back(v[i].second+1);
        }

        cout << count << ' ' << ans.size() << '\n';
        for (auto u : ans) {
            cout << u << ' ';
        }
        cout << '\n';
    }
    return 0;
}