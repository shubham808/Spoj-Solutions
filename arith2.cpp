#include<stdio.h>
main()
{
	long int t;
	scanf("%ld",&t);
	while(t--)
	{
		long long int a,b;
		char c;
		scanf("%c",&c);
		scanf("%lld",&a);
		while(8)
		{
			c=' ';
			while(c==' ')
			scanf("%c",&c);
			
			if((int)c=='=')
				break;
			scanf("%lld",&b);
	
			if((int)c=='+')
				a+=b;
			if((int)c=='-')
				a-=b;
			if((int)c=='*')
				a*=b;
			if((int)c=='/')
				a/=b;
				
		}
		printf("%lld\n",a);
	}
}
