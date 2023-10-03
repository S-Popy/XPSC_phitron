// problrm Link: https://atcoder.jp/contests/abc083/tasks/arc088_a?lang=en

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long l, r;
    cin>> l>> r;
    int count =1;
    
    while(l*2 <= r){
        count++;
        l = 2*l;
    }

    cout<<count<<endl;
    return 0;
}