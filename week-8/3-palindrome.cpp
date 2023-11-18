// problem Link:

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        if(i % 4 == 1 || i % 4 == 0) {
            cout << 'a';
        }
        else {
            cout << 'b';
        }
    }
    cout << '\n';
    
    return 0;
}