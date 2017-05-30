#include <stdio.h>
long long int arr[100000]={0};
void fun(){
    int i=1;
    for(i=1;i<=100000;i++){
        if(i<=2048){
        if((i&(i-1)) == 0)
        arr[i] = i;
        else
        arr[i] = arr[i-1];
        }
        else
        arr[i] = 2048;
    }
}
int main() {
	int t;
	fun();
	scanf("%d",&t);
	while(t--)
	{
	    long long int n,count=0;
	    scanf("%lld",&n);
	    while(n>=1){
	        n=n-arr[n];
	        count++;
	    }
	    printf("%lld\n",count);
	}
	return 0;
}
 
