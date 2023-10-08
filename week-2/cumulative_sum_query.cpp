// problem Link: https://www.spoj.com/problems/CSUMQ/en/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;
    vector<int> arr(n);

    vector<long long> prefixSum(n);

    for(int i=0; i<n; i++){
        cin>> arr[i];
    }

    prefixSum[0] = arr[0];
    for(int i=1; i<n; i++){
        prefixSum [i] = prefixSum[i-1]+arr[i];
    }

    int q;
    cin>> q;
    while(q--){
        int i, j;
        cin>> i >>j;
        long long ans =prefixSum[j]- (i>0? prefixSum[i-1] : 0);
        cout<< ans<<endl;
    }
    return 0;
}