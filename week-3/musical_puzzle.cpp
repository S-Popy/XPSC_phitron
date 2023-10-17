// problem Link: https://codeforces.com/problemset/problem/1833/A

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;

        map<string, int> mp;
        int i = 0, j = 0, k = 2;
        string m = "";

        while(j < n) {
            m += s[j];

            if(j - i + 1 < k) {
                j++;
            } else if (j - i + 1 == k) {
                mp[m]++;
                m.erase(0 , 1);
                i++;
                j++;
            }
        }

        cout << mp.size() << '\n';

    }
    return 0;
}