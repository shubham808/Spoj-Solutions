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
	int dist1,dist2,i,j,u,v,w,s,l,m,u1,v1;
	scanf("%d%d%d%d%d",&n,&m,&l,&s,&v);
	for(i=0;i<m;i++)
	{
		scanf("%d%d%d",&u,&v,&w);
		if(w==0)
		{
			u1=u;
			v1=v;
			adj[u][v]=-2;
			adj[v][u]=-2;
		}
		else
		{
		adj[u][v]=w;
		adj[v][u]=w;
		}
	}

	adj[u1][v1]=IN;
	adj[v1][u1]=IN;
	
	dist2=dikstra(s,v);
	printf("%d\n",dist2);
	if(dist2>=l)
	{
		adj[u1][v1]=-2;
		adj[v1][u1]=-2;
		dist2=dikstra(s,v);
		printf("%d\n",dist2);
		printf("YES\n");
		printf("%d %d %d",u1,v1,l-dist2);
	}
	else
	printf("NO\n");
}
int dikstra(int s,int v)
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
		if(current==-1)return pathlength[v];
		status[current]=1;
		for(i=0;i<n;i++)
		{
			if(adj[current][i]!=0&&status[i]==0)
			{
				if(adj[current][i]==-2)adj[current][i]=0;
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




