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

       stack<char> st;

       for (int i = 0; i < s.size(); i++) {
        if (st.empty()) {
            st.push(s[i]);
        }
        else {
            if (s[i] == 'A') {
                st.push(s[i]);
            }
            else {
                st.pop();
            }
        }
       }

       cout << st.size() << '\n';
    }
    return 0;
}