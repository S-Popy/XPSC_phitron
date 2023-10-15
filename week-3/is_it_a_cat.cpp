// problem Link: https://codeforces.com/problemset/problem/1800/A

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--){

        int n;                                                        
        cin>> n;
        string m = "meow";

        string s;
        cin >> s;

        for(auto& u : s){
            u = tolower(u);
        }
        
        s.erase(unique(s.begin(), s.end()), s.end());

        if(s == m){
            cout<< "YES" <<endl;
        }else{
            cout<< "NO" <<endl;
        }
    }
    return 0;
}