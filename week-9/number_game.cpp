// problem Link: https://codeforces.com/problemset/problem/1749/C

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;

bool possible (vector<int> v, int n, int k) {
    multiset<int>s;

    for (auto u : v) {
        s.insert(u);
    }

    for (int i = 1; i <= k; i++) {
        if (s.empty()) {
            return false;
        }

        int x = k - i + 1;
        auto it = s.upper_bound(x);

        if (it == s.begin()) {
            return false;
        }
        it--;

        s.erase(it);

        if (!s.empty()) {
            it = s.begin();
            ll p = (*it);
             p += x;
             s.erase(it);
             s.insert(p);
        }
    }
    return true;
}


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

        int k;
        int l = 0, r = n;
        while ( l <= r) {
            int mid = l + (r - l) / 2;

            if(possible(v, n, mid)) {
                k = mid;
                l = mid+1;
            }
            else {
                r = mid -1;
            }
        }

        cout << k << '\n';

    }

    return 0;
}