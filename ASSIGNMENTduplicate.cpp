//CODE BY SHUBHAM SHUKLA
#include<iostream>
#include<cstdio>
int n;
void _delete(int a[],int index)
{
	int i;
	
	for(i=index;i<n-1;i++)
	a[i]=a[i+1];
	
	n--;
}
int main()
{
	int i,j;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			_delete(a,j),j--;
		}
	}
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	printf("\n");
	return 0;
}

