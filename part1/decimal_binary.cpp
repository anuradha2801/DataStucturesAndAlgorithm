#include<bits\stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int i=0;
int ans=0;
while(n!=0)
{
    //int bit=n&2;
    int bit=n%2;//  n/2
    ans=(bit*pow(10,i))+ans; //reversed the bits
   // n=n>>1;
    n=n/2;
    i++;
}
cout<<"binary no is="<<ans;
return 0;
}