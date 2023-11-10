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
        int count = 0;

        while (1) {
            if(n == 50) {
                break;
            }
            else if (n < 50) {
                n += 2;
                count++;
            }
            else if (n > 50) {
                n -= 3;
                count++;
            }
        }
        cout << count << '\n';
    }
    return 0;
}