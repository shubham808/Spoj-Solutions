#include<stdio.h>
main()
{
	long int n,i=0,ans=0;
	scanf("%ld",&n);
	long int h[3]={0},i;
	for(i=0;i<n;i++)
	{
		char s[3];
		scanf("%s",s);
		if((int)s[0]-'0'==3)
		h[2]++;
		else if((int)s[2]-'0'==2)
		h[0]++;
		else if((int)s[2]-'0'==4)
		h[1]++;
	}
	if(h[2]>h[1])
	{
		p+=h[1];
		h[0]+=h[2]-h[1];
		h[1]=h[2]-h[1];
		if(h[0]%2)h[1]+=2;
		k=0;
		if(h[1]/4)k=1;
		printf("%ld\n",p+(h[0]/2)+(h[1]/4)+k+1);
		
	}
	if(h[2]<=h[1])
	{
		if(h[0]%2)h[1]+=2;
		k=0;
		if((h[1]-h[2])/4)k=1;
		printf("%ld\n",(h[0]/2)+h[2]+((h[1]-h[2])/4)+k+1);
	}
	
}
