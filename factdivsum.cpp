#include<stdio.h>
#include<math.h>
int a[50100];
int prime()
{
    int i,j;
    for(i=2;i*i<=50100;i++)
    {
        for(j=i*2;j<=50100;j+=i)
        {
            a[j]=1;
        }
    }
}
int main()
{
    prime();
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        int i,j,r=0,x,p,f=0,t;
        long long int s=1;
        scanf("%d",&n);
        if(n==1)
            printf("%lld\n",s);
        else
        {
            for(i=2;i<=n;i++)
            {
                if(a[i]==0)
                {
                    j=i;
                    x=j;
                    while(j<=n)
                    {
                        r+=floor(n/j);
                        
                        j*=x;
                    }
                    
                    r++;
                    s=((s%1000000007)*(r%1000000007)%1000000007);
                    r=0;
                }
            }
            printf("%lld\n",s);
        }
    }
    return 0;
}

