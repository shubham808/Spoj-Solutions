//CODE BY SHUBHAM SHUKLA
#include<iostream>
using namespace std;
int main()
{
	int n ,row,col,flag=0,d1,d2,rsum,csum;
	cout<<"Enter the size of matrix\n";
	cin>>n;
   int a[n][n];
 	d1=0;
	d2=0;
   printf("Enter matrix : \n");
   for (row=0;row<n;row++) {
      for (col=0;col<n;col++)
        {
		 	scanf("%d",&a[row][col]);
			if (row == col)
            	d1+=a[row][col];
        	if(row+col==n-1)
            	d2+=a[row][col];
        }
   }
    
   for (row=0;row<n;row++) 
   {
	      rsum=0,csum=0;
		for (col=0;col<n;col++)
		{
	        rsum+=a[row][col];
	        csum+=a[col][row];
	    }
	    if(d1==rsum&&d2==rsum&&d1==csum&&d2==csum&&d1==d2)
	        flag = 1;
	    else 
		{
	        flag = 0;
	        break;
	    }
   }
   if (flag == 1)
      cout<<"Magic square"<<endl;
   else
      cout<<"No Magic square"<<endl;
 
return 0;
}

