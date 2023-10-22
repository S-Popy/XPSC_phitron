// problem Link: https://codeforces.com/problemset/problem/1097/B

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for (int i = 0; i < (1<<n); i++) {
        int s = 0;
        for (int j = 0; j < n; j++) {
            if (i & (1<<j))
            s += arr[j];
        else 
            s -= arr[j];
        }

        if (s % 360 == 0) {
            cout << "YES\n";
            return 0;
        }
    }

    cout << "NO\n";
    return 0;
}