// problem Link: 

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    
        ll n, a, b, p, q;
        cin >> n >> a >> b >> p >> q;

        ll ans= 0;
        ans += ((n/a) * p);
        ans += ((n/b) * q);

        ll LCM = (a / __gcd(a,b)) * b;
        ll same = n / LCM;
        ans -= (same * (p+q));
        ans += (same * max(p,q));

        cout << ans << '\n';
    
    return 0;
}