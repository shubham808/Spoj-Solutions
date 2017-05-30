#include<bits/stdc++.h>
using namespace std;
# define IN 9999

int n;
int predecessor[1001];
int status[1001];
int pathlength[1000];
int adj[1000][1000];

int dikstra(int,int);
int mintemp();


main()
{
	int i,j,u,v,w,s,m,d;
	scanf("%d%d%d%d",&n,&m,&s,&d);
	for(i=0;i<m;i++)
	{
		scanf("%d%d%d",&u,&v,&w);
		{
		adj[u][v]=w;
		}
	}

	printf("%d\n",dikstra(s,d));
	for(i=0;i<n;i++)
	printf("%d ",pathlength[i]);

}
int dikstra(int s,int d)
{
	int i,current;
	for(i=0;i<n;i++)
	{
		predecessor[i]=-1;
		status[i]=0;
		pathlength[i]=IN;
	}
	pathlength[s]=0;
	while(1)
	{
		current=mintemp();
		if(current==-1)return pathlength[d];
		status[current]=1;
		for(i=0;i<n;i++)
		{
			if(adj[current][i]!=0&&status[i]==0)
			{
				
				if(pathlength[current]+adj[current][i]<pathlength[i])
				{
					pathlength[i]=pathlength[current]+adj[current][i];
					predecessor[i]=current;
				}
			}
		}  
	}
}
int mintemp()
{
	int min=IN,k=-1,i;
	for(i=0;i<n;i++)
	{
		if(status[i]==0&&pathlength[i]<min)
		{
			min=pathlength[i];
			k=i;
		}
	}
	return k;
}




