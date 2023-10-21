// problem Link: 

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
     cout.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--) {
        int n, q; cin >> n >> q;
        vector<int>v(n);

        int even_count = 0, odd_count = 0;
        ll sum = 0;

        for (int i = 0; i < n; i++){
            cin >> v[i];
            sum += v[i];
             if( v[i] % 2 == 0){
                even_count++;
             } else{
                odd_count++;
             }
        }

        while (q--) {
            int j, x; cin >> j >> x;
            
            if (j == 0 && x % 2 == 0) {
                sum += (even_count*x);
            }
            else if (j == 0 & x % 2 != 0) {
                sum += (even_count*x);
                odd_count += even_count;
                even_count = 0;
            }
            else if (j == 1 && x % 2 != 0) {
                sum += (odd_count*x);
                even_count += odd_count;
                odd_count = 0;
            }
            else if (j == 1 && x % 2 == 0) {
                sum += (odd_count*x);
            }

            cout << sum << '\n';

        }
    }
    return 0;
}