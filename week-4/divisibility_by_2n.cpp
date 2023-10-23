// problem Link: https://codeforces.com/problemset/problem/1744/D

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    ll t, n, i, j, k;
    
    cin >> t;
    
    while (t--)
    {
        int count = 0;
        int ans = 0;
        
        cin >> n;
        
        ll a[n];
        
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        for (i = 0; i < n; i++)
        {
            while ((a[i] % 2) == 0){
                count++;
                a[i] = a[i]/2;
            }
        }
        
        vector<ll> c;
        
        for (i = 2; i <= n; i++){
            j = i;
            
            k = 0;
            
            while ((j % 2) == 0){
                k++;
                j /= 2;
            }
            
            if (k > 0){
                c.push_back(k);
            }
            
        }
        
        sort(c.begin(), c.end());
        
        k = c.size();
        
        for (i = k-1; i >= 0 && count < n; i--){
            count += c[i];
            ans++;
        }
        
        if (count < n)
        cout << "-1\n";
        else
        cout << ans <<"\n";
        
    }

    return 0;
}