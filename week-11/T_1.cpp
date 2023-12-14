// problem Link:

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool vis[25];
int sum = 0;
int a[25];
int ans;

void back(int n, int i, int s) {

    if(i == n) {
        ans = min (ans, abs (sum - s*2));
        return;
    }

    back(n, i+1, s);
    back(n, i+1, s+a[i]);
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

        int n; cin >> n;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }

        ans = sum;

        back(n, 0, 0);

        cout << ans << '\n';
    return 0;
}