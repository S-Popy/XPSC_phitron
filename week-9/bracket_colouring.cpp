// problem Link:

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;

       int count = 0;
       for (int i = 0; i < n; i++) {
        if (s[i] == '(') {
            count++;
        }
        else {
            count--;
        }
       }

       if (count != 0) {
        cout << -1 << '\n';
        continue;
       }

        vector<int>ans(n);
        stack<int>st;
        bool flag = true;

        for (int i = 0; i < n; i++) {
            if(s[i] == '(') {
                st.push(i);
            }
            else {
                if(st.empty()) {
                    flag = false;
                    continue;
                }

                ans[i] = 1;
                ans[st.top()] = 1;
                st.pop();
            }
        }

       if(flag == false) {
        while(!st.empty()) {
            st.pop();
        }

        ans.assign(n,2);
        for (int i = 0; i < n; i++) {
            if(s[i] == ')') {
                st.push(i);
            }
            else {
                if(st.empty()) {
                    flag = false;
                    continue;
                }

                ans[i] = 1;
                ans[st.top()] = 1;
                st.pop();
            }
        }
       } 

       auto it = max_element(ans.begin(), ans.end());
       cout << *it << '\n';

       for (auto u : ans) {
        cout << u << ' ';
       }
       cout << '\n';   
        
    }
    return 0;
}