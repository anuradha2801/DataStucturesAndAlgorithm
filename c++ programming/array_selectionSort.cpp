
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n ,i;
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
    cin>>a[i];
}

for(i=0;i<n-1;i++)
{
   for (int j=i+1;j<n;j++)
   {
       if(a[j]<a[i])
       {
           int temp=a[j];
           a[j]=a[i];
           a[i]=temp;
       }
   }
   
}
for(i=0;i<n;i++)
{for(i=0;i<n-1;i++)
{
   for (int j=i+1;j<n;j++)
   {
       if(a[j]<a[i])
       {
           int temp=a[j];
           a[j]=a[i];
           a[i]=temp;
       }
   }
  cout<<a[i]<<" ";
}cout<<endl;
    return 0;
}