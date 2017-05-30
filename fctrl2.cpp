#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,f=1,i;
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		f*=i;
		printf("%d\n",f);
	}

	return 0;
}
