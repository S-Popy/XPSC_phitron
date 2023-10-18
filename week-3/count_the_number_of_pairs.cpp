// problem Link: https://codeforces.com/problemset/problem/1800/B

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t; cin >> t;
    while(t--){
           
    ll n, k, count_lower[26] = {0}, count_upper[26] = {0};
    string s;
    
        cin >> n >> k >> s;
        
        for(int i = 0; i < n; i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z'){
                count_lower[s[i]-97]++;
            }else{
                count_upper[s[i]-65]++;
            }
        }
        
        ll ans = 0;
        ll extra = 0;
        
        for(int i = 0; i < 26; i++){
            ans = ans + min(count_lower[i], count_upper[i]);
            count_lower[i] = abs(count_lower[i] - count_upper[i]);
            extra += (count_lower[i] / 2);
        }
        
        ans = ans + min(k, extra);
        
        cout <<ans << "\n";
        
    }

    return 0;
}
     