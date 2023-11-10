// problem Link: 

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<char>v;

        for (int i = 0; i < n; i++) {
            char x; cin >> x;
            if(x == '0') {
                v.push_back('1');
            }
            else {
                v.push_back('0');
            }
        }

        for (int i = 0; i < n; i++) {
            cout << v[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}