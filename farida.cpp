#include<stdio.h>
long long dp[10005],i,n;
long long max(long long c,long long d){
	return (c>d?c:d);
}
main()
{
	long t;
	scanf("%ld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		long long a[n+1];
		
		for(i=1;i<=n;i++)
		scanf("%lld",&a[i]);
		
		dp[1]=a[1];
		dp[2]=max(a[2],a[1]);
		
		for(i=1;i<=n;i++)
		dp[i]=max(a[i]+dp[i-2],dp[i-1]);
		
		printf("%lld\n",dp[n]);
	}
}
