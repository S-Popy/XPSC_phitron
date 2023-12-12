// problem Link:

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;

        string s[n];
        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }

        for (int j = 0; j < m-1; j++) {
            int count = 0;
            for (int i = 0; i < n; i++) {
                if (s[i][j] == 'L') {
                    if (count % 2) {
                        s[i][j] = 'B';
                        s[i][j+1] = 'W';
                    }
                    else {
                        s[i][j] = 'W';
                        s[i][j+1] = 'B';
                    }
                    count++;
                }
            }
        }

       for (int i = 0; i < n-1; i++) {
        int count = 0;
        for (int j = 0; j < m; j++) {
            if(s[i][j] == 'U') {
                if(count % 2) {
                    s[i][j] = 'B';
                    s[i+1][j] = 'W';
                }
                else {
                    s[i][j] = 'W';
                    s[i+1][j] = 'B';
                }
                count++;
            }
        }
       } 

       bool flag = false;
       for (int i = 0; i < n; i++) {
        int x = 0, y = 0;
        for (int j = 0; j < m; j++) {
            if(s[i][j] == 'W') {
                x++;
            }
            if(s[i][j] == 'B') {
                y++;
            }
        }
        if(x != y) {
            flag = true;
        }
       }

       for (int j = 0; j < m; j++) {
        int x = 0, y = 0;
        for (int i = 0; i < n; i++) {
            if(s[i][j] == 'W') {
                x++;
            }
            if(s[i][j] == 'B') {
                y++;
            }
        }
        if(x != y) {
            flag = true;
        }
       }



       if(flag) {
        cout << -1 << '\n';
        continue;
       }   

       for (int i = 0; i < n; i++) {
        cout << s[i] << '\n';
       }
        
    }
    return 0;
}