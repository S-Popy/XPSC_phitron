// problem Link: https://atcoder.jp/contests/abc220/tasks/abc220_a?lang=en

#include<bits/stdc++.h>
using namespace std;

int main(){

    long long a, b, c;
    cin>> a >>b >>c;
    long long ans =-1;

    long long m = b/c*c;

    if(a <= m){
        ans = m;
    }

    cout <<ans<<endl;
    
    return 0;
}