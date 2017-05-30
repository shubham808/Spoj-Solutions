#include<bits/stdc++.h>
using namespace std;
	int t;
	char a[50001],b[50001];
	int c[2][50001],d[50001],l,m,i,j,temp;
main()
{
	for(i=0;i<50001;i++)
	{
		c[0][i]=0;
	}
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s%s",a,b);
		l=strlen(a);m=strlen(b);
		for(i=1;i<=l;i++)
		{
			for(j=1;j<=m;j++)
			{
				if(a[i-1]==b[j-1])
				c[i%2][j]=c[(i-1)%2][j-1]+1;
				else
				c[i%2][j]=c[i%2][j-1]>c[(i-1)%2][j]?c[i%2][j-1]:c[(i-1)%2][j];
			}
		}
		printf("%d\n",c[1][m]);
	}
}
