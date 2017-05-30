#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i,j,d,ans=0;
		scanf("%d",&n);
		for(i=11;i>=0;i--)
		{
			j=(int)pow(2,i);
			d=n/j;
			n%=j;
			ans+=d;
		}
		printf("%d\n",ans);
	}
} 
