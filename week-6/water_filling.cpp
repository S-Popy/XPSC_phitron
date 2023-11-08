// problem Link: https://www.codechef.com/problems/WATERFILLING

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--) {
	    int count = 0;
	    for (int i = 0; i < 3; i++) {
	        int x; cin >> x;
	        if (x == 0) {
	            count++;
	        }
	    }
	    
	    if (count >= 2) {
	        cout << "Water filling time" << '\n';
	    } else {
	        cout << "Not now" << '\n';
	    }
	}
	return 0;
}
