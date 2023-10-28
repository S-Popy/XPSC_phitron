// problem Link: https://www.codechef.com/problems/BOX95

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int t; cin >> t;
	while (t--) {
	    ll n; cin >> n;
	    vector<ll>v(n);
	    for(int i = 0; i < n; i++) {
	        cin >> v[i];
	    }
	    
	    sort (v.begin(), v.end(), greater<ll>());
	    ll ans = 1;
	    ll x = v[0];
	    
	    int i = 0, j = n-1;
	    
	    while(i < j) {
	        if((x) >= v[j]) {
	            (x) ^= v[j];
	            j--;
	        }
	        else {
	            ans++;
	            x = v[i];
	            i++;
	        }
	    }
	    
	    cout << ans << '\n';
	}
	return 0;
}
