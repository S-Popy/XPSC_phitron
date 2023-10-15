// problem_link: https://codeforces.com/problemset/problem/1759/A

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--){

        string s = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";

        string s2;
        cin >> s2;

        if(s.find(s2) != string :: npos){
            cout<< "YES" <<endl;
        }else{
            cout<< "NO"<<endl;
        }

    }
    return 0;
}