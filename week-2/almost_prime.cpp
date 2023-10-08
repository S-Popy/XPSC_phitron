// problem Link: https://codeforces.com/problemset/problem/26/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;
    int count =0;
    int arr[100005];
    for(int i=2; i<=n; i++){
        if(arr[i] == 0)
        for (int j =i; j<=n; j+= i)
        arr[j]++;
        
        if(arr[i] == 2)
        count++;
    }

    cout<<count<<endl;
    return 0;
}