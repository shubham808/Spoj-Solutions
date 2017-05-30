#include <stdio.h>
int check(long long);
int main()
{
	long int t;
	scanf("%d",&t);
	while(t--)
	{
		long long q,l,w,sum=0;
		int r;
		scanf("%lld%lld",&l,&w);
		for(q=l;q<=w;q++)
		{
			r=check(q);
			if(r)
			sum+=q;		
		}
		printf("%lld\n",sum);
	
	}
	return 0;
}
int check(long long i)
{
	long int p,c;
	int r=0;
	c=i;
	while(c!=0)
	{
		p=c%10;
		c=c/10;
		r=r*10+p;
	}
	if(r==i)
	return 1;
	return 0;
}
