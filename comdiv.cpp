#include<stdio.h>
long int gcd(long int,long int);
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long int x,y,n=0,i,g;
		scanf("%ld%ld",&x,&y);
		g=gcd(x,y);
		for(i=1;i<=g*g;i++)
		{
			if(g%i==0)n+=2;
			if(i*i==g)n--;
		}
		printf("%ld\n",n/2);
	}
	
}
long int gcd(long int a,long int b)
{
	long int f,d;
	d=a/b;
	f=b;
	b=a-(d*b);
	a=f;
	if(b!=0)
	{
	gcd(a,b);
	}
	else
	return(a);
}
