#include <stdio.h>
#include<math.h>
int sieve[100000]={0};
void siev(int n)
{
	   int i,j;
	   for(i=0;i<=n;i++)
	   sieve[i]=i;
	   sieve[0]=0;sieve[1]=0;
	   for(i=2;i<=n;i+=2)
	   sieve[i]=0;
	   sieve[2]=1;
	   for(i=3;i<=n;i+=2)
	   {
	       if(sieve[i])
	       {
	           for(j=i*i;j<=n;j+=i)
	           sieve[j]=0;
	       }
	   }

}
int sigmu(int a,int b)
{
	int tq=pow(a,b+1);
	return (tq-1)/(a-1);
	
}
int main() 
{
	int t;
	scanf("%d",&t);
	while(t--)
{
	int i,n,l,r,k=0,sum=0,p=0,ans=1;
	
	scanf("%d",&n);siev(sqrt(n));

	{
		for(i=2;i<=sqrt(n);i++)
		{
			if(sieve[i])
			{	
				k=i;
				if(n%i==0)
				{
					while(n%i==0)
					{
						p++;
						i*=k;
					}
				ans*=sigmu(k,p);p=0;
				printf("%d ",ans);
				}
			}
		}
		sum=sum+ans+n+1;ans=1;
		if(n==1)sum=1;
		if(n==2)sum=3;	
	}
	printf("%d\n",sum);
}
	return 0;
}
