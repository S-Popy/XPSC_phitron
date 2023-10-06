// problem Link: https://codeforces.com/problemset/problem/1669/B

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        int cnt[n+1]={0};
        
        for(int i=0; i<n; i++){
            int x;
            cin>> x;
            cnt[x]++;
        }

        int ans = -1;

        for(int i=1; i<=n; i++){
            if(cnt[i] >= 3){
                ans = i;
                break;              
            }
        }

 
        cout<< ans <<endl;
    
    }
    return 0;
}