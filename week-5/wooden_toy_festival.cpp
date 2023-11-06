// problem Link: https://codeforces.com/problemset/problem/1840/D

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin>>n;
 
        vector<int> a(n);
        for(auto &x: a) {
            cin >> x;
        }
            
        sort(a.begin(), a.end());
 
        auto possible = [&](int x) {
            int i = 0, j = 0;
 
            while(j < n && (a[j]-a[i]+1)/2<=x)     j++;
            i = j;
 
            while(j<n && (a[j]-a[i]+1)/2<=x)     j++;
            i = j;
 
            while(j<n && (a[j]-a[i]+1)/2<=x)     j++;
            i = j;
 
            return (j == n);
        };
 
        int ans = 1e9;
        int low = 0, high = 1e9;
 
        while(low <= high)
        {
            int mid = (low+high)/2;
 
            if(possible(mid))
                ans = mid, high = mid-1;
            else
                low  =mid+1;
        }
 
 
        cout << ans <<"\n";
    }
}