// problem Link: https://atcoder.jp/contests/abc191/tasks/abc191_b?lang=en

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin>> n >> x;
    vector<int>v(n);

    for(int i=0; i<n; i++){
        int x;
        cin>> x;
        v.push_back(x);
    }


    v.erase(remove(v.begin(), v.end(), x), v.end());
    

    for(auto u:v){
        if( u != 0){
            cout<<u <<" ";
        }
    }

    cout<<endl;
    return 0;
}