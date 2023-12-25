#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n; cin >> n;
    string s; cin >> s;
    int cnt = count(s.begin(), s.end(), 'B');
   
    if((cnt&1) && !(n&1)) {
        cout << -1 << '\n';
        return 0;
    }

    char ch;
    if(!(cnt & 1)) {
        ch = 'W';
    }
    else {
        ch = 'B';
    }

    vector<int> ans;
    for (int i = 0; i < n - 1; i++) {
        if(s[i] == ch) {
            continue;
        }
        else {
            s[i] ^= 'W' ^ 'B';
            s[i+1] ^= 'W' ^ 'B';
            ans.push_back(i+1);
        }
    }

    cout << ans.size() << '\n';
    for(auto u : ans) {
        cout << u << ' ';
    }
    cout << '\n';

    return 0;
}