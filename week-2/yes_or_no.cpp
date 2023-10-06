// problem Link: https://codeforces.com/problemset/problem/1703/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string m = "yes";
        string s = "";
        
        for(int i = 0; i < 3; i++){
            char ch;
            cin >> ch;
            s += tolower(ch);
        }

        if(s == m){
            cout << "YES" << endl;
        }else{
            cout << "NO"<< endl;
        }
    }
    return 0;
}