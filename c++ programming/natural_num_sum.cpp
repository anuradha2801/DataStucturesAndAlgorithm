//wap to find the sum of n natural numbers
#include<iostream>
using namespace std;
int main(){
    int i,n,sum=0;
    cout<<"enter the number:\n";
    cin>>n;
    for (i=1;i<n;i++)
    {
        sum=sum+i;
        
    }
    cout<<sum<<"\n";
   return 0; 
}
