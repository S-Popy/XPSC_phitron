// problem Link: https://atcoder.jp/contests/abc182/tasks/abc182_b?lang=en

#include <stdio.h>

int x[110];
int main()
{
	int a;
	scanf("%d",&a);
	for(int i=1;i<=a;i++) scanf("%d",&x[i]);
	int ans = 2;
	int t = 0;
	for(int i=2;i<=1000;i++)
	{
		int s = 0;
		for(int j=1;j<=a;j++)
		{
			if(x[j]%i==0) s++;
		}
		if(t<s)
		{
			t = s;
			ans = i;
		}
	}
	printf("%d",ans);
}