// problem Link: https://codeforces.com/problemset/problem/1722/C

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;

        int ans1 =0, ans2 =0, ans3 =0;

        map <string, int> mp;
        vector <string> v1;
        vector <string> v2;
        vector <string> v3;

        for(int i =0; i<n; i++){
            string s;
            cin>> s;
            v1.push_back(s);
            mp[s]++;
        }

        for(int i =0; i<n; i++){
            string s;
            cin>> s;
            v2.push_back(s);
            mp[s]++;
        }

        for(int i =0; i<n; i++){
            string s;
            cin>> s;
            v3.push_back(s);
            mp[s]++;
        }

        for(int i =0; i<n; i++){
           if(mp.find(v1[i]) != mp.end()){
            if(mp[v1[i]] == 1){
                ans1+= 3;
            }else if(mp[v1[i]] == 2){
                ans1+= 1;
            }
            
           }
        }

        for(int i =0; i<n; i++){
           if(mp.find(v2[i]) != mp.end()){
            if(mp[v2[i]] == 1){
                ans2+= 3;
            }else if(mp[v2[i]] == 2){
                ans2+= 1;
            }
       
           }
        }

        for(int i =0; i<n; i++){
           if(mp.find(v3[i]) != mp.end()){
            if(mp[v3[i]] == 1){
                ans3+= 3;
            }else if(mp[v3[i]] == 2){
                ans3+= 1;
            }
            
           }
        }

        cout<< ans1 <<" "<<ans2 << " "<<ans3<<" "<<endl;

    }
    return 0;
}