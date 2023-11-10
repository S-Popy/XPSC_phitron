// problem Link: 

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n; cin >> n;
    vector<int>v;

    for (int i = 2; i*i <= n; i++) {
        while (n-i > 1) {
            v.push_back(i);
            n -= i;
        }
    }

    if(n > 1) {
        v.push_back(n);
    }

    cout << v.size() << '\n';
        for(auto u : v) {
            cout << u << ' ';
        }
        cout << '\n';

    return 0;
}