// problem Link: https://codeforces.com/problemset/problem/1873/F

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;

const int N = 2*1e5;

bool get (int x, int length[], int pref[], int k, int n) {
    bool flag = false;
    for (int i = 0; i < n-x+1; i++) {
        if (length[i] < x) {
            continue;
        }
        int sum = pref[i+x] - pref[i];

        if (sum <= k) {
            flag = true;
            break;
        }
    }
    return flag;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int pref[N+5], arr[N+5];
        pref[0] = 0;
        int n, k; cin >> n >> k;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            pref[i+1] = pref[i] + arr[i];
        }

        int h[N+5];
        for (int i = 0; i < n; i++) {
            cin >> h[i];
        }

        int length[N+5];
        length[n-1] = 1;

        for (int i = n-2; i >= 0; i--) {
            if(h[i] % h[i+1] == 0) {
                length[i] = length[i+1]+1;
            }
            else {
                length[i] = 1;
            }
        }

        int l = 1, r = n;
        while( l <= r) {
            int mid = (l+r)/2;
            if (get(mid, length, pref, k, n)) {
                l = mid+1;
            }
            else {
                r = mid - 1;
            }
        }

        cout << r << '\n';
    }
    
    return 0;
}