// problem Link: https://www.codechef.com/problems/MOONSOON

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--) {
	    int n, m, k; cin >> n >> m >> k;
	    
	    vector<long long>v;
	    vector<long long>v2;
	    
	    for(int i = 0; i < n; i++) {
	        int x; cin >> x;
	        v.push_back(x);
	    }
	    
	    for(int i = 0; i < m; i++) {
	        int x; cin >> x;
	        v2.push_back(x);
	    }
	    sort(v.begin(), v.end(), greater<long long>());
	    sort(v2.begin(), v2.end(), greater<long long>());
	    
	    long long ans = 0;
	    
	    for(int i = 0; i < min(n,m); i++) {
	        ans += min (v[i], v2[i]*k);
	    }
	    
	    cout << ans << '\n';
	}
	return 0;
}
