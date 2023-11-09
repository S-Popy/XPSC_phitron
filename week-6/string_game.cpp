// problem Link: https://www.codechef.com/problems/STRAME

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
        stack<char>st;

        int count = 0;

        for (auto u : s) {
            if(!st.empty() && st.top() != u) {
                st.pop();
                count++;
            }
            else {
                st.push(u);
            }
        }
        if(count % 2 == 0) {
            cout << "Ramos\n";
        } else {
            cout << "Zlatan\n";
        }
    }
    return 0;
}