/*finding all the possible sub arrays of a given array and has maximum sum*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int maxSum=INT_MIN;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
             int sum=0;
            for( int k=i;k<=j;k++)
            {
               // cout<<a[k]<<" ";
                sum+=a[k];
                maxSum=max(maxSum,sum);
            } //cout<<endl;  
        } 
     
    }
    cout<<maxSum<<endl;

    return 0;
}