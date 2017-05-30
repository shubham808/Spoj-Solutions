#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define MAX 100000
int n;
struct queue1
{
	int a[MAX];
	int front;
	int rear;
};

bool empty(struct queue1 *pq)
{
if(pq->front==pq->rear)
return true;
else 
return false;	
}
struct queue1 *insert(struct queue1 *pq,int item)
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
	
	pq->a[pq->rear]=item;
	return pq;
}
struct queue1 *deletenode(struct queue1 *pq)
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
void display(struct queue1 *pq)
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
    struct queue1 *p=(struct queue1 *)malloc(sizeof(struct queue1));
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
	
	p=deletenode(p);
	
	display(p);
	return 0;
}
