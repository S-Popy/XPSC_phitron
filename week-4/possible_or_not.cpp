// problem Link: https://www.codechef.com/problems/CS2023_PON

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
	    int n, b; cin >> n >> b;
	    int ans = -1;
	    
	    for (int i = 0; i < n; i++) {
	        int x; cin >> x;
	         if ((x & b) == b) {
	             ans &= x;
	         }
	    }
	    
	    if (ans == b) {
	        cout << "YES\n";
	    } else {
	        cout << "NO\n";
	    }
	}
	return 0;
}
