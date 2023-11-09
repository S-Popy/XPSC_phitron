// problem Link: https://www.codechef.com/problems/BLOBBYVOLLEY

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--) {
	    int n; cin >> n;
	    string s; cin >> s;
	    int count_A = 0, count_B = 0;
	    
	    if(s[0] == 'A') {
	        count_A++;
	    }
	    
	    for (int i = 1; i < n; i++) {
	        if(s[i] == 'A' && s[i-1] == 'A') {
	            count_A++;
	        }
	        else if (s[i] == 'B' && s[i-1] == 'B') {
	            count_B++;
	        }
	    }
	    
	    cout << count_A << ' ' <<count_B << '\n';
	}
	return 0;
}
