// problem Link: https://codeforces.com/problemset/problem/1800/C1

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--){

        int n; cin >> n;

        priority_queue<int> st;
        vector<int> q(n);

        int count = 0;
        for(int i = 0; i < n; i++){
            cin >> q[i];
            if(q[i] == 0){
                count++;
            }
        }

        ll ans = 0;
        for(int i = 0; i < n; i++){

            if(q[i] != 0){
                    st.push(q[i]);
            } else {
                if(st.empty()){
                    continue;
                }else{
                    ans += st.top();
                    st.pop();
                }
            }
        }

        cout << ans <<'\n';
    }
    return 0;
}