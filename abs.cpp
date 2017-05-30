#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,t,i,a=0,b=0;
		scanf("%lld",&n);
		long long int ar[n];
		for(i=0;i<n;i++)
		scanf("%lld",&ar[i]);
		sort(ar,ar+n);
		for(i=1;i<=n;i++)
		{
			a+=ar[i-1];
			b+=i*ar[i-1];
		}
		b=((n+1)*a)-(2*b);
		printf("%lld\n",0-b);
	}
	return 0;
}
