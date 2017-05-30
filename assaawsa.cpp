#include<bits/stdc++.h>
using namespace std;
int n,h[101]={0};
char s[100];
main()
{
	int i,j,k,ans=0,ans1=0;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%s",s);
		h[strlen(s)]++;
	}
	scanf("%s",s);
	j=strlen(s);

	for(i=0;i<j;i++)
	ans+=h[i];
	
	ans1=ans+h[j]-1;
	ans+=(ans/k)*5;	
	ans1+=(ans1/k)*5;
	printf("%d %d",ans+1,ans1+1);
}
