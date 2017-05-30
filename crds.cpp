#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,p;
		scanf("%lld",&n);
		p=(n*(n+1))%1000007;
		p=3*(p/2)-n;
		printf("%lld\n",p);
		
	}

	return 0;
}
