#include<stdio.h>
#include<math.h>
long long int i=0,j=0,a[100001]={0},b[100001]={0};
long long int prime()
{
    a[0]=0;a[1]=0;a[2]=0;
    for(i=2;i*i<=100001;i++)
    {
        for(j=i*2;j<=100001;j+=i)
        {
            a[j]=1;
        }
    }
}
int main()
{
    prime();
    i=0;j=0;
    for(i=1;i<=100005;i++)
    {
    	if(a[i]==0)
    	b[j++]=i;
	}
	i=0;j=0;
    long long  int t;
    scanf("%lld",&t);
    while(t--)
    {
        long long int l,r,temp=0;
        scanf("%lld%lld",&l,&r);
        for(i=l;i<=r;i++)
        {
        	 temp=0;
        	for(j=0;b[j]*b[j]<=i;j++)
        	{
        		if(i%b[j]==0)
        		{
        			temp=1;break;
				}
			}
			if(temp==0&&i!=1)
			printf("%lld\n",i);
			}
		printf("\n");
   }

    return 0;
}

