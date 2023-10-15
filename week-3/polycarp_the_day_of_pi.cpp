// problem Link: https://codeforces.com/problemset/problem/1790/A

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--){

        string s1 = "3141592653589793238462643383279";
        string s2;
        cin >> s2;

        int count = 0;
        for(int i =0; i< s2.length(); i++){
            if(s1[i] == s2[i]){
                count++;
            }else{
                break;
            }
        }

        cout<< count <<endl;

    }
    return 0;
}