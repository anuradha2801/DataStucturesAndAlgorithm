#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n;j++)
    {
        cout<<j;
    }
    cout<<endl;
}
cout<<endl;
for(int i=1;i<=n;i++)
{
    for(int j=n;j>0;j--)
    {
        cout<<j;
    }
    cout<<endl;
}
cout<<endl;
int count=1;

for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n;j++)
    {
        cout<<count;
        count++;
    }
    cout<<endl;
}
cout<<endl;

for(int i=1;i<=n;i++)
{
    for(int j=1;j<=i;j++)
    {
        cout<<" * ";
    }
    cout<<endl;
}
cout<<endl;

for(int i=1;i<=n;i++)
{
    for(int j=1;j<=i;j++)
    {
        cout<<i;
    }
    cout<<endl;
}
cout<<endl;
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n;j++)
    {
        cout<<count;
        count++;
    }
    cout<<endl;
}
cout<<endl;
int c=0;
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=i;j++)
    {
        cout<<c;
        c++;
    }
    cout<<endl;
}
cout<<endl;
for(int i=1;i<=n;i++)
{
    for(int j=i;j>0;j--)
    {
        cout<<j;
    }
    cout<<endl;
}
cout<<endl;
char ch='A';
for(int i=1;i<=n;i++)
{
 for(int j=1;j<=n;j++)
 {   char p='A'+i-1;
     cout<<p;
 }
  cout<<endl;
}
cout<<endl;

for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n;j++)
    {
        char abcd=ch+i+j-2;
        cout<<abcd;
    }
    cout<<endl;
}
cout<<endl;
//star pattern with space
for(int i=1;i<=n;i++)
{
    for(int j=n-i;j>0;j--)
    {
        cout<<" ";
    }

    for(int j=1;j<=i;j++)
    {
        cout<<"*";
    }
    cout<<endl;
}
cout<<endl;


for(int i=1;i<=n;i++)
{
    for(int j=n-i+1;j>0;j--)
    {
        cout<<"*";
    }
    cout<<endl;
}
cout<<endl;

for(int i=1;i<=n;i++)
{
      for(int j=1;j<=i-1;j++)
    {
        cout<<" ";
    }
    for(int j=1;j<=n-i+1;j++)
    {
        cout<<"*";
    }
  
    cout<<endl;
}
cout<<endl;

for(int i=1;i<=n;i++)
{
       for(int j=1;j<i;j++)
    {
        cout<<" ";
    }
    for(int j=1;j<=n-i+1;j++)
    {
        cout<<i;
    }
 
    cout<<endl;
}
cout<<endl;
int v=1;
for(int i=1;i<=n;i++)
{
       for(int j=n-i;j>0;j--)
    {
        cout<<" ";
    }
    for(int j=1;j<=i;j++)
    {
        cout<<v;
        v++;
    }
 
    cout<<endl;
}
cout<<endl;

for(int i=1;i<=n;i++)
{
       for(int j=1;j<=n-i;j++)
    {
        cout<<" ";
    }
    for(int j=i;j>0;j--)
    {
        cout<<j;
    }
     for(int j=i-1;j>0;j--)
    {
        cout<<j;
    }
 
 
    cout<<endl;
}
cout<<endl;

return 0;
}