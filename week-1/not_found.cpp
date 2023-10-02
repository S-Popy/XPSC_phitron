// problem Link: https://atcoder.jp/contests/abc071/tasks/abc071_b?lang=en

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>> s;

    int count[26] = {0};

    for(int i=0; i<s.length(); i++){
        count[s[i] - 'a']++;
    }
    string ans;

    for(int i =0; i<26; i++){
        if(count[i] == 0){
            ans= char(i+'a');
            break;
        }else{
            ans = "None";
        }
    }

    cout<<ans<<endl;
    
    return 0;
}