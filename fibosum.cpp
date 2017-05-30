#include<stdio.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int m,n,sum=0;
		scanf("%lld%lld",&m,&n);
		long long int c,a=0,b=1,i;
		for(i=2;i<=n;i++)
		{
			c=a+b;
			a=b;
			b=c;
			if(i>=m)
			sum+=c%1000000007;
		}if(m==0)sum++;
		printf("%lld\n",sum);
	}
}
