// problem Link: https://www.codechef.com/problems/ALTTAB

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	stack<string> st;
	map<string,int>mp;
	
	for(int i = 0; i < n; i++) {
	    string s; cin >> s;
	    st.push(s);
	}
	
	string ans = "";
	
	while ( !st.empty()) {
	    string m = st.top();
	    st.pop();
	    mp[m]++;
	    
	    if (mp[m] == 1) {
	        int p = m.length();
	        ans += m.substr(p-2, p-1);
	        
	    }
	}
	
	cout << ans;
	return 0;
}
