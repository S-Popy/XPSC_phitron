// problem Link: https://codeforces.com/problemset/problem/102/B

#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>> s;

    int count =0;

    while( s.size() != 1){
        int sum = 0;

        for(auto u : s){
            sum += u-'0';
        }

        s = to_string(sum);
        count++;
    }

    cout<< count <<endl;
    
    return 0;
}