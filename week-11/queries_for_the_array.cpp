// problem Link:

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;

        int count = 0;
        bool flag = true;
        int sorted = 0, unsorted = INT_MAX;
        for (int i = 0; i < s.size(); i++) {
            if(s[i] == '+') {
                count++;
            }
            else if (s[i] == '-') {
                count--;
            }
            else if (s[i] == '1') {
                sorted = count;
            }
            else {
                if(unsorted == INT_MAX) {
                    unsorted = count;
                }
            }     

        if (sorted > count) {
            sorted = count;
        }
        if (count < unsorted) {
            unsorted = INT_MAX;
        }
        if ((s[i] == '0' && count == sorted) || (s[i] == '1' && unsorted <= count) || (s[i] == '0' && count < 2)) {
            flag = false;
            break;
        }
        }

        if(flag) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}