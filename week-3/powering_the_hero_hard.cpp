// problem Link: https://codeforces.com/contest/1800/problem/C2


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

        priority_queue<ll> st;
        vector<ll> q(n);

        for(int i = 0; i < n; i++){
            cin >> q[i];
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