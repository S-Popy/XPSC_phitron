// problem Link: 

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;

void getPrime (int n, map<int,int>&mp) {
    for (int i = 2; i*i <= n; i++) {
        while(n % i == 0) {
            mp[i]++;
            n /= i;
        }
    }

    if(n > 1) {
        mp[n]++;
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