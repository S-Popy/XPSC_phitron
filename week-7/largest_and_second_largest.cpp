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
        set<int>st;

        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            st.insert(x);
        }

        int sum = 0;

        auto it = (--st.end());
        sum += *it;
        sum += * (--it);

        cout << sum << '\n';
    }
    return 0;
}