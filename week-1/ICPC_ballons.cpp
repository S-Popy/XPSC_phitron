// problem Link: https://codeforces.com/problemset/problem/1703/B

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        int cnt[26] ={0};
        int n;
        cin>> n;
        int sum =0;

        for (int i=0; i<n; i++){
            char ch;
            cin>> ch;
            
            if(cnt[ch-'A'] == 0){
                sum+=2;
                cnt[ch-'A']++;
            }else{
                sum +=1;
            }
        }

        cout<< sum<<endl;
    }
    
    return 0;
}