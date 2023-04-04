#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
  int n;
  cin>>n;

    for(int j=1;j<=n;j++)
    {
        cout<<j;
    }
    for(int j=n-1;j>0;j--)
    {
        cout<<j;
    }
cout<<endl;

for(int i=1;i<n;i++)
{
    for(int j=1;j<n-i+1;j++)
    {
        cout<<j;
    }
  
  for(int j=0;j<i-1;j++)
  {
      cout<<"*";
  }
  
  for(int j=i;j>0;j--)
  {
      cout<<"*";
  }
  for(int j=n-i;j>0;j--)
    {
        cout<<j;
    }
cout<<endl;

}
cout<<endl;
    return 0;
}

