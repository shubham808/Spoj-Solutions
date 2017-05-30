#include<bits/stdc++.h>
using namespace std;
main()
{
 int t;
 scanf("%d",&t);
 while(t--)
 {
  int n,k,i,j;
  scanf("%d%d",&n,&k);
  long long int a[n],b[n-k+1];
  
  for(i=0;i<n;i++)
   scanf("%lld",&a[i]);
  sort(a,a+n);
  for(i=0;i<(n-k+1);i++)
  {
   b[i]=a[i+k-1]-a[i];
  }
  sort(b,b+n-k);
  printf("%lld\n",b[n-k]);
 }
}
