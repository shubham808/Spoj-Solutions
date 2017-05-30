#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long mid,low,high,ans,n,c,i;
		scanf("%lld%lld",&n,&c);
		long long a[n];
		for(i=0;i<n;i++)
		scanf("%lld",&a[i]);
		sort(a,a+n);
		high=n-1;low=0;mid=0;
		for(i=0;i<c-2;i++)
		{
			mid=(high+low)/2;
			if(a[mid]-a[low]>a[high]-a[mid])
			high=mid;
			else
			low=mid;
			ans=a[high]-a[low];			
		}
		printf("%lld\n",ans);
	}
}
