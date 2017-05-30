#include<bits/stdc++.h>
using namespace std;
long long int i=0,j=0,k=0,a[1001]={0},b[1001]={0},c[1001]={0};
int prime()
{
    int i,j;
    for(i=2;i*i<=1000;i++)
    {
    	a[0]=0;a[1]=0;a[2]=0;
        for(j=i*2;j<=1000;j+=i)
        {
            a[j]=1;
        }
    }
}
int main()
{
	int p=0;
	prime();
	for(i=1;i<=1000;i++)
    {
    	if(a[i]==0)
    	b[j++]=i;
	}
	for(i=0;i<=1000;i++)
	{
		for(j=0;j<=1000;j++)
		{
		if(i%b[j]==0)
		p++;
		if(p==3)
		{
			c[k++]=i;
			p=0;
		}
		}
		
	}
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i;
		scanf("%d",&n);
		printf("%d\n",c[n-1]);
		
	}
	return 0;
}
