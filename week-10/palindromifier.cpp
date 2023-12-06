// problem Link:

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    string s; cin >> s;
    cout << 3 << '\n';
    cout << "L " << 2 << '\n';
    cout << "R " << 2 << '\n';
    cout << "R " << 2*s.size() - 1 << '\n';
    return 0;
}