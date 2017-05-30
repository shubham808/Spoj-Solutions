#include<iostream>
using namespace std;
main()
{
int n,i=0,ans=0;
cin>>n;
int h1=0,h2=0,h3=0;
char s[3];
for(i=0;i<n;i++)
{
		scanf("%s",s);
		if((int)s[0]-'0'==3)
		h3++;
		else if((int)s[2]-'0'==2)
		h1++;
		else if((int)s[2]-'0'==4)
		h2++;
}

ans=h3;
h1=h1-h3;
ans+=(h2-h2%2)/2;
if(h2%2)
{
ans++;
h1-=2;
}

if(h1>0)
{
ans+=(h1-(h1%4))/4;
if(h1%4>0) 
ans++;
}
cout<<ans+1<<endl;
return 0;
}
