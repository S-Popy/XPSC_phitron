// problem Link: https://codeforces.com/problemset/problem/433/B

#include<bits/stdc++.h>
using namespace std;
long long i,j,p,a[100002],d[3][100002];
int main()
{
    int n;
	cin>>n;

	for(i=1;i<=n;i++){
		cin>>a[i];
		d[1][i]=d[1][i-1]+a[i];
	}

	sort(a+1,a+n+1);

	for(i=1;i<=n;i++)
		d[2][i]=d[2][i-1]+a[i];
    
    int q;
	cin>> q;
	while(q--)
	{
        int t, l, r;
		cin>>t>>l>>r;
        i = t;
		cout<<d[i][r]-d[i][l-1]<<endl;
	}
	return 0;
}