#include<bits/stdc++.h>
using namespace std;
main()
{
	int i,j,k,n,m,x1,x2,x3,y1,y2,y3;
	scanf("%d%d",&n,&m);
	scanf("%d",&k);
	while(k--)
	{
		scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
		x2=x2-x1;y2=y2-y1;x3=x3-x1;y3=y3-y1;
		if(x1==n||y1==m||x1==0||y1==0)printf("YES\n");
		
		else if(x3>=0&&x2>=0)printf("YES\n");
		else if(x3<0&&x2<0)printf("YES\n");
		else if(y3>=0&&y2>=0)printf("YES\n");
		else if(y3<0&&y2<0)printf("YES\n");
		
		else if((abs(x3-y3)>1)||(abs(x2-y2)>1))printf("YES\n");
		
		else printf("NO\n");
	}
}
