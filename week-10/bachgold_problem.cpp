// problem Link:

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n; cin >> n;
    vector<int>v;

    while ( n >= 2) {
        v.push_back(2);
        n -= 2;
    }

    if (n > 0) {
        v.pop_back();
        v.push_back(3);
    }

    cout << v.size() << '\n';
    for (auto u : v) {
        cout << u << ' ';
    }
    cout << '\n';

    return 0;
}