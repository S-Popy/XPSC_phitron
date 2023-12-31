// problem Link:

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;

bool vis[25];
int k;
int cnt;

void back(int n, vector<int> &v) {
    if (cnt == k) {
        return;
    }

    if(v.size() == n) {
        for (int x : v) {
            cout << char (x + 64);
        }
        cout << '\n';
        cnt++;
    }

    for (int i = 1; i <= n; i++) {
        if(vis[i] == false) {
            vis[i] = true;
            v.push_back(i);
            back(n, v);
            v.pop_back();
            vis[i] = false;
        }
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    int i = 1;

    while(t--) {
        int n; cin >> n >> k;
        cout << "Case " << i << ':' << '\n';
        i++;

        memset (vis, false, sizeof(vis));
        vector<int>v;
        cnt = 0;
        back(n, v);
    }
    return 0;
}