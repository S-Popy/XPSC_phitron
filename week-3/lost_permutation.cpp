// problem Link: https://codeforces.com/problemset/problem/1759/B

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--){
        int n, s; cin >> n >> s;
        set<int>st;
        int mx = INT_MIN;

        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            st.insert(x);
            mx = max(mx,x);
        }

        int i = 1;
        while(s > 0){
        if(st.find(i) == st.end()){
            st.insert(i);
            s -= i;
            mx = max(mx, i);
        }
        i++;
      }

      if( s == 0 && st.size() == mx){
        cout << "YES\n";
      }else{
        cout<< "NO\n";
      }

    }
    return 0;
}