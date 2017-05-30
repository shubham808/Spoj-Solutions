#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int a[n];
int count=0;
long long int sum=0;
for(int i=1;i<=n;i++){
    cin>>a[i];
    if(a[i]==0)
        count++;
        sum+=a[i];
}
if(count==n)
    cout<<"NO"<<endl;
    else if(sum){
        cout<<"YES"<<endl;
        cout<<"1"<<endl;
        cout<<"1"<<" "<<n<<endl;
    }
else{
        cout<<"YES"<<endl;
    cout<<"2"<<endl;
    int i;
  for( i=1;i<=n;i++){
    if(a[i]!=0){
        cout<<"1"<<" "<<i<<endl;
        break;
    }
    
  }
cout<<i+1<<" "<<n<<endl;
}


return 0;
}
