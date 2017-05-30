#include<bits/stdc++.h>
using namespace std;                                

list<long int> *adj;
queue<long int> q;
int visited[1000010];
long int pred[1000010];
long int dis[1000010];

int main()
{
	long int n,s,g,u,d,v,flag,i,up;
	{
		scanf("%ld%ld%ld%ld%ld",&n,&s,&g,&up,&d);
		adj=new list<long int>[n+1];
		list<long int>::iterator j;
		
		for(i=1;i<n-up+1;i++)
		{
			if(i+up<=n)adj[i].push_back(i+up);
			if(i-d>=1)adj[i].push_back(i-d);
		}
		
		for(i=0;i<=n;i++)
		{
			visited[i]=0;
			pred[i]=-1;
			dis[i]=1000011;			
		}
		flag=1;
		q.push(s);
		dis[s]=0;
		while(!q.empty())
		{
			u=q.front();
			q.pop();
			visited[u]=2;
			for(j=adj[u].begin();j!=adj[u].end();j++)
			{
				if(!visited[*j])
				{
					visited[*j]=1;
					pred[*j]=u;
					dis[*j]=dis[u]+1;
					q.push(*j);
				}
				if(*j==g){flag=0;break;}
			}
		}
		if(dis[g]==1000011)
		printf("use the stairs\n");
		else
		printf("%ld\n",dis[g]);
		
	}
	return 0;
}

