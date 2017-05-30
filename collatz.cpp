#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long int arr[50000]={0};
long int arr1[50000]={0};
long int dp(long int q)
{
	if(q<=50000)
	{
	    if(q==1)return 1;
	    if(arr[q]!=0)return arr[q];
	    arr[q]=(q%2==0)?1+dp(q/2):1+dp((3*q)+1);return arr[q];
	}
	else
	{
		if(arr1[q-50000]!=0)return arr1[q-50000];
	    arr1[q-50000]=(q%2==0)?1+dp(q/2):1+dp((3*q)+1);return arr1[q-50000];
	}
}
int main() 
{
    long int t;
    scanf("%d",&t);
    while(t--)
    {
        long int n,i,max=0,k,x;
        scanf("%d",&n);
        for(i=n;i>1;i--)
        {
           x=dp(i);
           if(x>max)
           {
               max=x;
               k=i;
           }     
        }
        printf("%d\n",k);
    }
    return 0;
}


