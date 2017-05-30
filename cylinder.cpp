#include<stdio.h>
# define PIE 3.14159265
main()
{
	int l,w;
	double r,h,volume;
	scanf("%d%d",&l,&w);
	if(l<w)
	{
		int t=l;
		l=w;
		w=t;
	}
	volume=(PIE*w*w*w)/4;
	printf("%lf",volume);
	
	
}
