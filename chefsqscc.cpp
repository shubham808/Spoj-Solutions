#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		float k;
		scanf("%d",&n);
		k=log(n)/log(2);
		printf("%d",(int)k);
		
	}
	return 0;
}
