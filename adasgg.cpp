#include<stdio.h>
#include<string.h>
char a[3001],b[3001];
int s[3001][3001];
int minimum(int a,int b,int c)
{
    int e,f;
    e=(a<b)?(a):(b);
    f=(e<c)?(e):(c);
    return f;
}
int main()
{
    int t,i,j,l,m;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",a);
        scanf("%s",b);
        l=strlen(a);
        m=strlen(b);
        for(i=0;i<=l;i++)
        {
            for(j=0;j<=m;j++)
            {
                if(i==0)
                    s[i][j]=j;
                else if(j==0)
                    s[i][j]=i;
                else
                {
                    if(a[i-1]==b[j-1])
                        s[i][j]=s[i-1][j-1];
                    else
                        s[i][j]=minimum(s[i-1][j],s[i][j-1],s[i-1][j-1])+1;
                }
            }
        }
        printf("%d\n",s[l][m]);
    }
    return 0;
}

