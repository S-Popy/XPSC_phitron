// problem Link: https://cses.fi/problemset/task/1660

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n, x; cin >> n >> x;
    vector<int> v(n);

    for(auto &u : v) {
        cin >> u;
    }

    int i = 0, j = 0, count = 0;
    ll sum = 0;

    while( j < n) {
        sum += v[j];

        while (sum > x) {
            sum -= v[i];
            i++;
        }

        if( sum == x) {
            count++;
        }
        j++;
    }

    cout << count << '\n';
    return 0;
}