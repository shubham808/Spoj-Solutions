#include<bits/stdc++.h>
using namespace std;
char s[101][101],q[]="ALLIZZWELL";
bool visited[101][101];
int n,m,flag=0,k=0;

int x[]={0,1,-1,0,-1,-1,1,1};
int y[]={-1,0,0,1,1,-1,1,-1};


bool valid(int a,int b)
{
	if(a>=n||a<0||b>=m||b<0)return 0;
	return 1;
}

void dfs(pair<int,int> so,int k)
{
	if(k==10||flag){flag=1;return;}
	if(visited[so.first][so.second])return;
	visited[so.first][so.second]=1;
	for(int i=0;i<8;i++)
	{
		int xx=so.first+x[i];
		int yy=so.second+y[i];
		
		
		if(valid(xx,yy)&&s[xx][yy]==q[k]&&!visited[xx][yy]){{dfs(make_pair(xx,yy),k+1);} }
	}
	visited[so.first][so.second]=0;
}


int main()
{
	int t,i,j;
	scanf("%d",&t);
	while(t--)
	{
		vector< pair<int,int> > g;
		flag=0;
		scanf("%d%d",&n,&m);
		
		for(i=0;i<n;i++)scanf("%s",s[i]);
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(s[i][j]=='A')g.push_back(make_pair(i,j));
			}
		}
		
		for (vector< pair<int,int> >::iterator it=g.begin();it!=g.end();++it)
		{
			memset((visited),(0),sizeof (visited));
			dfs(*it,1);
			if(flag)break;	
		}
		
		if(flag)printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
