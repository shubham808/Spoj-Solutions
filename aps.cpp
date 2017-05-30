#include<stdio.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long int n,i,j,k=0,flag=0;
		scanf("%ld",&n);
		long int a[n+1];
		a[0]=0;a[1]=0;
		
		for(i=2;i<=n;++i)
		{
			for(j=2;j<=i*i;++j)
			{
				if(i%j==0)
				{k=j;flag=1;break;}
			}
			if(flag)a[i]=a[i-1]+k;
			else
			a[i]=a[i-1]+i;
			flag=0;
		}
		printf("%d\n",a[n]);
	}
}
