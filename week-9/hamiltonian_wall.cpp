// problem Link: https://codeforces.com/problemset/problem/1766/C

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int m; cin >> m;
        string s[2];
        cin >> s[0] >> s[1];

        vector<int>v;
        bool flag = false, ok = false;

        for (int i = 0; i < m; i++) {
            if (s[0][i] == 'B' && s[1][i] == 'B') {
                v.push_back(2);
                if (flag) {
                    ok = true;
                    break;
                }
            }
            else if (s[0][i] == 'B') {
                v.push_back(0);
                if (flag) {
                    ok = true;
                    break;
                }
            }
            else if (s[1][i]) {
                v.push_back(1);
                if(flag) {
                    ok = true;
                    break;
                }
            }
            else {
                if(v.empty()) {
                    continue;
                }
                flag = true;    
            }
        }

        if(v.empty()) {
            cout << "YES\n";
            continue;
        }
        if (ok) {
            cout << "NO\n";
            continue;
        }

        bool possible = true;
        int last = -1;
        int count_2 = 0;

        for (int i = 0; i < v.size(); i++) {
            if (v[i] == 0) {
                last = 0;
                count_2 = 0;
                if (i+1 < v.size() && v[i+1] == 1) {
                    possible = false;
                    break;
                }
            }
            else if (v[i] == 1) {
                last = 1;
                count_2 = 0;
                if (i+1 < v.size() && v[i+1] == 0) {
                    possible = false;
                    break;
                }
            }
            else {
                count_2++;
                if (i+1 < v.size() && v[i+1] != 2) {
                    if (last == -1) {
                        count_2 = 0;
                        continue;
                    }
                    else {
                        if (last == 1) {
                            if (count_2 % 2 == 1 && v[i+1] == 1) {
                                possible = false;
                                break;
                            }
                            else if (count_2 % 2 == 0 && v[i+1] == 0) {
                                possible = false;
                                break;
                            }
                        }
                        else {
                            if (count_2 % 2 == 1 && v[i+1] == 0) {
                                possible = false;
                                break;
                            }
                            else if (count_2 % 2 == 0 && v[i+1] == 1) {
                                possible = false;
                                break;
                            }
                        }
                        count_2 = 0;
                    }
                }
            }
        }

        if (possible) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }

    }
    return 0;
}
