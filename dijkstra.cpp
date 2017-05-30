#include<bits/stdc++.h>
using namespace std;
int n,adg[101][101];
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int k,p,m,d,D,i,j,j1;
		scanf("%d%%d%d",&n,&m,&d,&D);
		
		if(m<n*d){printf("-1\n");continue;}
		if(m>n*D){printf("-1\n");continue;}
		
		k=(m-n*d)/(D-d);
		p=(m-n*d)%(D-d);
		
		for(i=0;i<n;i++)
		{
			if(i<k)j1=D;
			else if(i==k)j1=p+d;
			else j1=d;
			
			for(j=0;j<j1;j++)
			adg[i][(i+j)%n]=1;
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(adg[i][j]==1)
				printf("%d %d\n",i+1,j+1);
			}
		}
	}
}
