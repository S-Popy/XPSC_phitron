#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n, k; cin >> n >> k;
    string s; cin >> s;

    map<int,int> mp;
    for (int i = 0; i < n; i++) {
        mp[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        int x = min (mp[i], k);
        mp[i] -= x;
        k -= x;
    }

    string ans = "";
    for (int i = n - 1; i >= 0; i--) {
        if(mp[s[i] - 'a'] > 0) {
            ans += s[i];
            mp[s[i] - 'a']--;
        }
    }

    reverse(ans.begin(), ans.end());

    cout << ans << '\n';
    return 0;
}