// problem Link: https://codeforces.com/problemset/problem/1674/B

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;

map<string,int>mp;

void pre_calculation () {
    int i = 0;
    string s (2, '.');

    for (char ch = 'a'; ch <= 'z'; ch++) {
        for (char j = 'a'; j <= 'z'; j++) {
            if ( ch == j) continue;

            s[0] = ch;
            s[1] = j;
            mp[s] = ++i;
        }
    }

    for (char ch = 'a'; ch <= 'z'; ch++) {
        s[0] = ch;
        s[1] = ch;
        mp[s] = ++i;
    }
}
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    pre_calculation();
 
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        cout << mp[s] << '\n';
    }
    return 0;
}