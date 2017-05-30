#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,ar=0,e=0,c=0,ans=0,i;
		scanf("%lld",&n);
		long long int a[n],b[n];
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			b[i]=a[i];
		}
		for(i=0;i<n;i++)
		{
			long long j[10007]={0}; 
			ar=i;j[ar]=2;c=0;
			while(8)
			{
				ar=(ar+1+a[ar])%n;
				if(j[ar]==1)
				break;
				else if(j[ar]==2)
				{
					ans+=1;break;
				}
				else
				j[ar]=1;
			}
		}
		printf("%lld\n",ans);
	}
}
