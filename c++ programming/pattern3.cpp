#include<iostream>

using namespace std;
int main()
{
    int n,i,j;
    cout<<"enter n";
    cin>>n;
    for (i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
    {
        cout<<"*";
    }
           cout<<endl;
    }
    
    return 0;
}