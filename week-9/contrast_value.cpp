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
        vector<int>v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        if (n == 1) {
            cout << 1 << '\n';
            continue;
        }

        int count = 0, p = 0;
        for(int i = 1; i < n; i++) {
            if((v[i-1] > v[i]) && p != 1) {
                count++;
                p = 1;
            }
            else if ((v[i-1] < v[i]) && p != -1) {
                count++;
                p = -1;
            }
        }

       cout << count+1 << '\n';   
    }
    return 0;
}