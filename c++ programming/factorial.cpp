/*#include<iostream>
using namespace std;
int main()
{
    int i,fact=1,n;
    cout<<"enter a number:";
    cin>>n;
    for(i=n;i>=1;i--)
    {
        fact=fact*i;
    }
    cout<<fact;
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;

void fact(int n)
{ int fact=1;
     for(int i=n;i>=1;i--)
    {
        fact=fact*i;
    }
    cout<<fact<<endl;
}
int main()
{
int t,n;
cin>>t;
for(int i=1;i<=t;i++)
{
    cin>>n;
    fact(n);
}
return 0;
}