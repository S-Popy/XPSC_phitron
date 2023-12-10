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

        vector<pair<int,int>> v= {{1, 13}, {2, 23}, {3, 31}, {4, 41}, {5, 53}, {6, 61}, {7, 71}, {8, 83}, {9, 97}};

        int x = s[0] - '0';
        cout << v[x-1].second << '\n';
    }
    return 0;
}