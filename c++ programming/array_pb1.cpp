/*write a program to print the maximum till i*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    int maxi=-199999999;
    for(i=0;i<n;i++)
    {
         cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
     maxi=max(maxi,a[i]);
        cout<<maxi<<endl;
    }
    return 0;
}