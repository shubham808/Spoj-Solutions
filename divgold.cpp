#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int i,sa,max=0,min=0;
		char s1[1000],s2[1000];
		scanf("%s%s",s1,s2);
		sa=strlen(s1)<=strlen(s2)?strlen(s1):strlen(s2);
		
		for(i=0;i<sa;i++)
		{
			if(s1[i]=='?'||s2[i]=='?')
			max++;
			else if(s1[i]!=s2[i])
			{
				min++;
				max++;
			}
			
		}
		sa=strlen(s1)-strlen(s2);
		if(sa<0)
		sa=sa/-1;
		min+=sa;max+=sa;
		printf("%d %d\n",min,max);
	}
	return 0;
}
	
 
