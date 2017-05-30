
#include<stdio.h>
#include<string.h>

int main()
{
	int t,i;
	scanf("%d",&t);
	while(t--)
	{
		int b=0,m=0;
		char s[100001];
		scanf("%s", &s);
		for(i=0;i<strlen(s);i++)
		{
			if(s[i]=='(')
			b++;
			if(s[i]==')')
			b--;
			m=m>b?m:b;
		}
		for(i=0;i<m;i++)
		printf("(");
		for(i=0;i<m;i++)
		printf(")");
		printf("\n");
	}
	return 0;
} 
