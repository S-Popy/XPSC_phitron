// problem Link: https://codeforces.com/problemset/problem/1833/C

#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
		int odd_count = 0, even_count = 0, mi = INT_MAX;

		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			if(x%2 == 0)
				even_count++;
			else 
			odd_count++;
        
			mi = min(mi, x);
		}

		if(even_count == n)
			cout << "YES" << endl;
		else if(mi%2 != 0)
			cout << "YES" << endl;
		else 
			cout << "NO" << endl;
    }
    return 0;
}