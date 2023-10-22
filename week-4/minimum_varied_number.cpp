// problem Link: https://codeforces.com/problemset/problem/1714/C

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
        int s; cin >> s;

        vector<int>v;
        int sum = 0;
        for(int i = 9; i>= 1; i--){
            if (s - sum >= i){
                sum += i;
                v.push_back(i);
            }
            else if (sum == s){
                break;
            }
            
        }

        sort(v.begin(), v.end());

        for(int i = 0; i<v.size(); i++){
            cout<<v[i];
        }
        cout << '\n';

    }
    return 0;
}