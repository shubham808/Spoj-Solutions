#include<stdio.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long int j,i,k,p,m;
		scanf("%ld%ld",&p,&m);
		long int a[p],mc=m,pc=1;
		for(i=0;i<p;i++)
		scanf("%ld",&a[i]);
		for(i=0;i<p;i++)
		{	mc=m;k=0;
			for(j=i;j<p;j++)
			{
				if(mc>0)
				{mc=mc-a[j];k++;}
				else
				{mc=mc+a[j];break;}
			}
			if(k>pc)pc=k;
		}
		printf("%ld %ld",mc,pc);
	}
}
