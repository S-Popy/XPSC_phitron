// problem Link: https://atcoder.jp/contests/abc222/tasks/abc222_a?lang=en

#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>> x;
    
    string s = to_string(x);

    while(s.length() < 4){
        s = '0'+s;
    }
    cout<<s<<endl;

    return 0;
}