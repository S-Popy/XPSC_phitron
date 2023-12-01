// problem Link: https://codeforces.com/problemset/problem/1728/C

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;

int digit (int n) {
    int cnt = 0;
    while ( n > 0) {
        cnt++;
        n /= 10;
    }
    return cnt;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        priority_queue<int>a,b;

        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            a.push(x);
        }

        for (int i = 0; i < n; i++) { 
            int x; cin >> x;
            b.push(x);
        }

        int ans = 0;
        while(!a.empty() && !b.empty()) {
            int x = a.top();
            int y = b.top();
            if(x == y) {
                a.pop();
                b.pop();
            }
            else if (x > y) {
                a.pop();
                a.push(digit(x));
                ans++;
            }
            else {
                b.pop();
                b.push(digit(y));
                ans++;
            }
        }

        cout << ans << '\n';
        
    }
    return 0;
}