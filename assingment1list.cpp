//CODE BY SHUBHAM SHUKLA
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

struct node
{
	int data;
	struct node *next;
};
struct node *l1,*l2,*l3;
struct node * create(struct node *start,int x)
{
	struct node *ptr1,*ptr2,*tmp;
	if(start==NULL)
	{
		ptr1=(struct node *)malloc(sizeof(struct node));
		ptr1->data=x;
		ptr1->next=NULL;
		start=ptr1;
		tmp=start;
		return start;
	}
	else
	{
		ptr2=(struct node *)malloc(sizeof(struct node));
		ptr2->data=x;
		tmp->next=ptr2;
		ptr2->next=NULL;
		tmp=ptr2;
	}
	return start;
}
struct node * merge(struct node *start1,struct node *start2)
{
	struct node *ptr1;
	ptr1=start1;
	while(ptr1->next!=NULL)
	{
		ptr1=ptr1->next;
	}
	ptr1->next=start2;
	return start1;
}


void deletenode(struct node *ptr)
{
	struct node *temp;
	temp=ptr->next;
	ptr->next=temp->next;
	free(temp);

}
void display(struct node *start)
{
	struct node *p;
	p=start;
	while(p!=NULL)
	{
		cout<<p->data<<endl;
		p=p->next;
	}
}

void llist(struct node *start)
{
	struct node *ptr1,*ptr2;
	ptr1=l3;
	while(ptr1->next!=NULL)
	{
		ptr2=ptr1;
		while(ptr2->next!=NULL)
		{
			if(ptr1->data==ptr2->next->data)
			deletenode(ptr2);
		}
		ptr1=ptr1->next;
	}
}
int main()
{ 
	struct node *tmp,*ptr1;
	
	l1=NULL;
	l2=NULL;
	
	cout<<"Enter num of nodes in list1"<<endl;
	int n,i,x;
	cin>>n;
	cout<<"Enter "<<n<<" elements"<<endl;

	for(i=0;i<n;i++)
	{
		cin>>x;
		l1=create(l1,x);
	}
	cout<<"Enter num of nodes in list2"<<endl;
	cin>>n;
	cout<<"Enter "<<n<<" elements"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>x;
		l2=create(l2,x);
	}
	l3=merge(l1,l2);
	llist(l3);
	display(l3);
	 return 0;
}
