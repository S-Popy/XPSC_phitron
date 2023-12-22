#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {

    int t; cin >> t;
    while (t--) {
       int n; cin >> n;
       vector<int>v(n), ans;
       
       for (int i = 0; i < n; i++) {
           cin >> v[i];
           }
           
           if(v[0] == 1) {
               ans.push_back(2);
               }
               else {
               ans.push_back(1);
               }
           
           for(int i = 1; i < n; i++) {
               if (v[i] == ans[i-1] +1) {
               ans.push_back(ans[i-1]+2);
               }
               else{
               ans.push_back(ans[i-1]+1);
           }
           }
           
           cout << ans.back() <<endl;
           }
     
	return 0;
}