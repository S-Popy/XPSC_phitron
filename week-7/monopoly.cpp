// problem Link:

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int sum = (a+b+c+d);

        if(sum - a < a) {
            cout << "YES\n";
        }
        else if(sum - b < b) {
            cout << "YES\n";
        }
        else if(sum - c < c) {
            cout << "YES\n";
        }
        else if(sum - d < d) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}