#include<bits/stdc++.h>
using namespace std;                                

list<long int> *adj;
queue<long int> q;
int visited[1000010];
int strn[1000010],orstrn[1000010];

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long int n,r,m,a,b,k,s,u,flag,i;
		scanf("%ld%ld%ld",&n,&r,&m);
		adj=new list<long int>[n+1];
		list<long int>::iterator j;

		for(i=0;i<=n;i++)
		{
			visited[i]=0;
			strn[i]=-1;
			orstrn[i]=-1;			
		}
		
		for(i=0;i<r;i++) 
		{
            scanf("%d%d",&a,&b);
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        
        for(i=0;i<m;i++) 
		{
            scanf("%d%d",&k,&s);
            strn[k]=s;
            orstrn[k]=s;
        }
		q.push(0);

		while(!q.empty())
		{
			u=q.front();
			q.pop();
			visited[u]=2;
			for(j=adj[u].begin();j!=adj[u].end();j++)
			{
				if(!visited[*j])
				q.push(*j);
                
                visited[*j]=1;
				if(strn[u]<strn[*j]-1&&orstrn[u]==-1)
				    strn[u]=strn[*j]-1;
                if(orstrn[*j]==-1) 
					strn[*j]=max(strn[*j],strn[u]-1);
				
			}
		}
        flag=1;
        for (i=1;i<=n;i++) 
		{
            if(strn[i]<0) 
			{
                flag=0;
                break;
            }
        }
        printf("%s\n",flag?"Yes":"No");
	}
	
	return 0;
}

