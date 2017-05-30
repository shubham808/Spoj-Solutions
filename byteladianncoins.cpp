#include<bits/stdc++.h>
using namespace std;
long long f(long long,long long*);
main()
{
	long long n;
	long long s[n];
	while(scanf("%lld",&n)==1)
	printf("%lld\n",f(n,s));
}
long long f(long long n,long long * s)
{
	if(n==0)return 0;
	if(s[n]!=0)return s[n];
	long long r=f(n/2,s)+f(n/3,s)+f(n/4,s);
	if(r>n)
	s[n]=r;
	else s[n]=n;
	return s[n];
}
