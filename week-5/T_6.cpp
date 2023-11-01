// problem Link:https://codeforces.com/problemset/problem/1881/D

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;

void getPrime (int x, map<int,int>&mp) {
    while (x % 2 == 0) {
        mp[2]++;
        x /= 2;
    }

    for (int i = 3; i <= sqrt(x); i++) {
        while (x % i == 0) {
            mp[i]++;
            x /= i;
        }
    }
    if (x > 1) {
        mp[x]++;
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        map<int, int>mp;
        int n; cin >> n;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            getPrime(x, mp);
        }
        bool flag = true;
        for (auto it = mp.begin(); it != mp.end(); it++) {
            if (it->second % n != 0) {
                flag = false;
                break;
            }
        }

        if (flag) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}