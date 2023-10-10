// problem Link: https://codeforces.com/problemset/problem/1722/A

#include<bits/stdc++.h>
using namespace std;

int main(){

    string s = "Timru";
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        string s2;
        cin>> s2;

        sort(s2.begin(), s2.end());
        if(s == s2){
            cout<< "YES"<<endl;
        }else{
            cout<< "NO" <<endl;
        }

    }

    return 0;
}