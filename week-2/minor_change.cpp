// problem Link: https://atcoder.jp/contests/abc172/tasks/abc172_b?lang=en

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;

    int count = 0;
    for(int i=0; i<t.size(); i++){
        if(s[i] != t[i]){
            count++;
        }
    }

    cout<< count<<endl;
    return 0;
}