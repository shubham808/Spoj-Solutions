#include<stdio.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char c;
		scanf("%c",&c);
		if((int)c=='=')break;
		printf("%c",c);
	}
}
