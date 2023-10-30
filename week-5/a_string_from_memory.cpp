// problem Link: 

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int t; cin >> t;
    while(t--) {
        set<char>st;
        string s; cin >> s;
        int ans = 0;
        for (int i = 0; i < s.length(); i++){
            st.insert(s[i]);
            if(st.size() > 3) {
                ans ++;
                st.clear();
                st.insert(s[i]);
            }
        }

        if(!st.empty()) {
            ans++;
        }

        cout<< ans << '\n';
    }
    return 0;
}