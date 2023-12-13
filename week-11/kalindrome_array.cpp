// problem Link:

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;

bool solve (int l, int r, int k, vector<int>&v) {
    if(l >= r) {
        return true;
    }
    if (v[l] == v[r]) {
        return solve(l+1, r-1, k, v);
    }
    if (k == -1) {
        if(solve(l+1, r, v[l], v)) {
            return true;
        }
        if (solve(l, r-1, v[r], v)) {
            return true;
        }
        return false;
    }

    else {
        if(k == v[l]) {
            return solve (l+1, r, k, v);
        }
        if (k  == v[r]) {
            return solve(l, r-1, k, v);
        }
        return false;
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        if(solve (0, n-1, -1, v) == true) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}