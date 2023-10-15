// problem Link: https://codeforces.com/problemset/problem/1703/D

#include<bits/stdc++.h>
using namespace  std;

 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<string> s;

        map<string, bool> mp;

        for(int i =0; i<n; i++){
            string x;
            cin >> x;
            s.push_back(x);
            mp[x] = true;
        }

        for( auto u :s){
            bool flag = false;

            for(int j =0; j<u.size(); j++){
                string x = u.substr(0, j);
                string y = u.substr(j, u.length() - j);

                if(mp[x] && mp[y]){
                    flag = true;
                }
            }

            cout<< flag;
        }

        cout<< endl;

    }
    return 0;
}