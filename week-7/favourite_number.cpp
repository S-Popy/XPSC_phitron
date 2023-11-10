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

        if(n % 2 == 0) {
            if(n > 7 && n % 7 == 0) {
                cout << "Alice\n";
            }
            else {
                cout << "Charlie\n";
            }
            continue;
        }
        else {
            if(n > 9 && n % 9 == 0) {
                cout << "Bob\n";
            }
            else {
                cout << "Charlie\n";
            }
            continue;
        }
    }
    return 0;
}