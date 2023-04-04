//write a program to print all the subsets of a set.
#include<bits/stdc++.h>
using namespace std;

void subset(int arr[],int n)
{
    for(int i=0;i<(1<<n);i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i & (1<<j))
            {
                cout<<arr[j]<<" ";
            }
           
        } cout<<endl;
    }
}
int main()
{
int arr[4]={2,4,1,5};
subset(arr,4);
return 0;
}