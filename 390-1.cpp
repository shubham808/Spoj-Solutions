#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str[7],tmp[7];
	for(int i=0;i<4;i++)
		{
			cin>>str[i];
			tmp[i]=str[i];
		}
	for(int x=0;x<4;x++)
		for(int y=0;y<4;y++)
		{

	if(str[x][y]=='.')
	{
		str[x][y]='x';
		//cout<<"````````"<<"\n";
		//for(int i=0;i<4;i++)
		//	cout<<str[i]<<"\n";
	for(int i=0;i<4;i++)
	for(int j=2;j<4;j++)
	{
		if(str[i][j]=='x' && str[i][j-1]=='x' && str[i][j-2]=='x')
		{
			cout<<"YES\n";
			return 0;
		}
	}
	for(int i=0;i<4;i++)
	for(int j=2;j<4;j++)
	{
		if(str[j][i]=='x' && str[j-1][i]=='x' && str[j-2][i]=='x')
		{
			//cout<<i<<" "<<j<<"**\n";
			cout<<"YES\n";
			return 0;
		}
	}
	if(str[0][1]=='x' && str[1][2]=='x' && str[2][3]=='x')
	{
		cout<<"YES\n";
		return 0;
	}
	if(str[0][0]=='x' && str[1][1]=='x' && str[2][2]=='x')
	{
		cout<<"YES\n";
		return 0;
	}
	if(str[1][1]=='x' && str[2][2]=='x' && str[3][3]=='x')
	{
		cout<<"YES\n";
		return 0;
	}
	if(str[1][0]=='x' && str[2][1]=='x' && str[3][2]=='x')
	{
		cout<<"YES\n";
		return 0;
	}
	if(str[0][2]=='x' && str[1][1]=='x' && str[2][0]=='x')
	{
		cout<<"YES\n";
		return 0;
	}
	if(str[3][0]=='x' && str[2][1]=='x' && str[1][2]=='x')
	{
		cout<<"YES\n";
		return 0;
	}
	if(str[2][1]=='x' && str[1][2]=='x' && str[0][3]=='x')
	{
		cout<<"YES\n";
		return 0;
	}
	if(str[3][1]=='x' && str[2][2]=='x' && str[1][3]=='x')
	{
		cout<<"YES\n";
		return 0;
	}
	for(int t=0;t<4;t++)
		str[t]=tmp[t];
	}
}
cout<<"NO\n";
	return 0;

}
