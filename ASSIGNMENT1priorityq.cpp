//CODE BY SHUBHAM SHUKLA
#include<bits/stdc++.h>
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

#define MAX 100000
int n;
struct q1
{
	int a[MAX];
	int front;
	int rear;
};

bool empty(struct qu1 *pq)
{
return(pq->front==pq->rear)?true:false;	
}
struct q1* insert(struct q1 *pq,int info)
{

	if(pq->rear==n)
	pq->rear=0;
	else
	pq->rear++;
	
	if(pq->rear==pq->front)
	{
		if(pq->rear==0)
		pq->rear=n;
		else
		(pq->rear)--;
		return pq;
	}
	
	pq->a[pq->rear]=info;
	return pq;
}
struct qu *deletemin(struct qu1 *pq)
{
	if(!empty(pq))
{
	int i=pq->front+1;
	if(i==n)
	i=0;
	while(i<pq->rear)
	{
		pq->a[i]=pq->a[i+1];
		i++;
	}
	(pq->rear)--;
}
else
cout<<"Queue is empty"<<endl;
	return pq;
}
void display(struct qu1 *pq)
{
	if(!empty(pq))
{
		int i=pq->front+1;
	if(i==n+1)
	i=0;
	while(i<=pq->rear)
	{
		cout<<pq->a[i]<<endl;
		i++;
	}
}
else
cout<<"Queue is empty"<<endl;
}

int main()
{	
    struct qu1 *p=(struct qu1 *)malloc(sizeof(struct qu1));
    p->rear=n;p->front=n;
    
	cout<<"Enter no of elements in queue"<<endl;
	cin>>n;
	cout<<"Enter the elements"<<endl;
	int i,x;
	
	for(i=0;i<n;i++)
	{
		cin>>x;
		p=insert(p,x);
		
	}
	
	p=deletemin(p);
	
	display(p);
	return 0;
}

