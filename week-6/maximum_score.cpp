// problem Link: https://www.codechef.com/problems/MAXIMSCORE

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while (t--) {

        int n; cin >> n;
        vector<int>v(n);
        
        for (auto &x : v) {
            cin >> x;
        }
        
        int ans[n];
        ans[0] = abs(v[1] - v[0]);
        ans[n-1] = abs(v[n-1] - v[n-2]);

        for (int i = 1; i <= n-2; i++) {
            int p = abs(v[i+1] - v[i]);
            int q = abs(v[i] - v[i-1]);
            ans[i] = max(p,q);
        }
        auto *it = min_element(ans, ans+n);
        cout << *it << '\n';
    }
	return 0;
}
