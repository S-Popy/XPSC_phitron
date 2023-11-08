// problem Link: https://codeforces.com/problemset/problem/1702/D

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;

bool cmp (pair<char, int>a, pair<char,int>b) {
    return (a.first>b.first);
}
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int p ; cin >> p;
        int n = s.size();

        vector<pair<char,int>>v;

        int cost = 0;
        for (int i = 0; i < n; i++) {
            v.push_back({s[i], i});
            cost += s[i] - 96;
        }

        vector<int> v2(n+1, 0);
        sort(v.begin(), v.end(), cmp);

        for (auto u : v) {
            if (cost <= p) {
                break;
            }
            cost -= (u.first - 96);
            v2[u.second] = -1;
        }

        for (int i = 0; i < n; i++) {
            if(v2[i] == 0) {
                cout << s[i];
            }
        }

        cout << '\n';
    }
    return 0;
}