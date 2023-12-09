// problem Link:

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        string s, t; cin >> s >> t;
        if(s[0] != t[0]) {
            cout << "NO\n";
            continue;
        }

        int j = 1;
        bool flag = true;
        for (int i = 1; i < s.size(); i++) {
            while ( j < t.size() && t[j] != s[i]) {
                if (t[j] != t[j-1]) {
                    flag = false;
                    break;
                }
                j++;
            }

            if (j >= t.size()) {
                flag = false;
                break;
            }
            j++;
        }

        for( ; j < t.size(); j++) {
            if (t[j] != t[j-1]) {
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