//bubble sort
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
 int counter=1;
while (counter<n)
{
  for (i=0;i<n-counter;i++)
  {
      if (a[i]>a[i+1])
      {
          int temp=a[i];
          a[i]=a[i+1];
          a[i+1]=temp;
      }
  }
  counter++;
   }
  for(i=0;i<n;i++)
  {
      cout<<a[i]<<" ";
  }
  return 0;
}
