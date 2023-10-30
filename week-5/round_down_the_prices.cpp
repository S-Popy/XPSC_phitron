// problem Link: 

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int k = 0;
        int m = n;

        while(m > 0){
            k++;
            m /= 10;
          
        }
       
        ll ans = abs(n - pow(10,k-1));
        cout << ans << '\n';

    }
    return 0;
}