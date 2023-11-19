// problem Link:

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n;
        char ch;
        cin >> n >> ch;
        string s; cin >> s;

        int count = 0;
        int x = 0;
        for (int i = 0; i < n; i++) {
           if (s[i] == ch) {
            x = i+1;
            count++;
           }
        }

        if(count == n) {
            cout << 0 << '\n';
            continue;
        }
        if(x > n/2) {
            cout << 1 << '\n';
            cout << x << '\n';
        } else {
            cout << 2 << '\n';
            cout << n << ' ' << n-1 << '\n';
        }
    }
    return 0;
}