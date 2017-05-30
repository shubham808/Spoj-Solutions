#include<bits/stdc++.h>
using namespace std;
int adj[10001][10001];
main()
{
	int h[10]={-1},i,z,j,n;
	char s[10001];
	scanf("%s",s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		z=(int)s[i]-'0';
		if(h[z]!=-1)
		{
			for(j=0;j<n;j++)
			{
				if(adj[h[z]][j]==1)
				adj[j][i]=1;
			}
			adj[h[z]][i]=1;
			
		}
		else
		h[z]=i;
	}
	
	for(i=0;i<n-1;i++)
	adj[i][i+1]=1;

}
