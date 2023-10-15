// problem Link: https://atcoder.jp/contests/abc213/tasks/abc213_a?lang=en

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int a, b;
    cin >> a >> b;
    int c = a^b;

    cout << c << endl;
    return 0;
}