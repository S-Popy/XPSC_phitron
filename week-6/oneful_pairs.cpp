// problem Link: https://www.codechef.com/problems/ONEFULPAIRS

#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b; cin >> a >> b;
	long long c = (long long)a*b;
	if(a+b+c == 111) {
	    cout << "Yes\n";
	} else {
	    cout << "No\n";
	}
	return 0;
}
