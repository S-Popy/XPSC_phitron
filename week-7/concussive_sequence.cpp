// problem Link: https://www.codechef.com/problems/CONCUSSIVE

#include <bits/stdc++.h>
using namespace std;

bool check (vector<int>&v, int n) {
    for (int i = 1; i <n-1; i++) {
        if (v[i] > v[i+1] && v[i] > v[i-1]) {
            continue;
        }
        if (v[i] < v[i+1] && v[i] < v[i-1]) {
            continue;
        }
        return false;
    }
    return true;
}

int main() {
	int t; cin >> t;
	while(t--) {
	    int n; cin >> n;
	    vector<int>a(n);
	    
	    for (int i = 0; i < n; i++) {
	        cin >> a[i];
	    }
	    
	    sort (a.begin(), a.end());
	    
	    vector<int>v(n), cnt(n);

        int indx = 0;
        for (int i = 0; i < n; i++) {
            if(indx >= n) {
                indx = 1;
            }
            v[indx] = a[i];
            indx += 2;
        }

        indx = 1;
        for (int i = 0; i < n; i++) {
            if(indx >= n) {
                indx = 0;
            }
            cnt[indx] = a[i];
            indx += 2;
        }

        vector<int> ans = {-1};
        if(check(v, n)) {
            ans = v;
        }
        else if (check(cnt, n)) {
            ans = cnt;
        }

        for (auto u : ans) {
            cout << u << ' ';
        }
        cout << '\n';
	}
	return 0;
}
