#include <iostream>
using namespace std;
 
int main() {
	int t,flag,ls,lf,i1,i,j;
	cin>>t;
	while(t--)
	{
		flag=0;
		cin>>ls;
		int s[ls];
		for(i=0;i<ls;i++)
		cin>>s[i];
		cin>>lf;
		int f[lf];
		for(i=0;i<lf;i++)
		cin>>f[i];
		j=0;
		for(i=0;i<ls;)
		{
			if(s[i]==f[j])
			{
			i++;
			j++;
			}
			else
			{
			i++;
			}
			if(j==lf)
			{
				flag=1;
				break;
			}
		}
		if(flag)
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;
	}
	return 0;
}  
