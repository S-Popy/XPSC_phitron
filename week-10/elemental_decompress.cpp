// problem Link:

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<int> p(n), q(n);
    unordered_set<int>a, b;

    for (int i =0; i< n; i++) {
        if (!a.count(v[i])) {
            a.insert(v[i]);
            p[i] = v[i];
        }
        else if (!b.count(v[i])) {
            b.insert(v[i]);
            q[i] = v[i];
        }
        else {
            cout << "NO\n";
            return;
        }
    }

    set<int>x, y;
    for (int i = 1; i <= n; i++) {
        if(!a.count(i)) {
            x.insert(i);
        }
        if(!b.count(i)) {
            y.insert(i);
        }
    }

    for (int i = 0; i < n; i++) {
        if(p[i] == 0) {
            auto it = x.upper_bound(q[i]);
            if(it == x.begin()) {
                cout << "NO\n";
                return;
            }
            --it;
            p[i] = *it;
            x.erase(it);
        }
        if(q[i] == 0) {
            auto it = y.upper_bound(p[i]);
            if(it == y.begin()) {
                cout << "NO\n";
                return;
            }
            --it;
            q[i] = *it;
            y.erase(it);
        }
    }

    cout << "YES\n";
    for (auto u : p) {
        cout << u << ' ';
    }
    cout << '\n';

    for (auto u : q) {
        cout << u << ' ';
    }
    cout << '\n';
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}