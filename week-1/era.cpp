// problem Link: https://codeforces.com/problemset/problem/1604/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;

        int ans = 0;
        
        for(int i=1; i<=n; i++){
            int x;
            cin>> x;

            ans = max(ans, x-i);
        }

        cout<< ans<<endl;
    }
    return 0;
}