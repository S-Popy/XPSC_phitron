// problem Link: https://codeforces.com/problemset/problem/633/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin>> a >>b >>c;

    bool flag = false;

    while(c > 0 ){
    if(c%a == 0 || c%b == 0 || c%(a+b) == 0){
        flag = true;
        break;
    }

    c -= min(a,b);
}

    if(flag)
    cout<< "YES"<<endl;
    else
    cout<<"NO"<<endl;


    return 0;
}