#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
int minIndex;
  for(int i=0;i<n-1;i++)
  {
     minIndex=arr[i];
     for(int j=i+1;j<n;j++)
     {
         if(arr[minIndex]>arr[j])
         {
             minIndex=j;
         }
     } 
     swap(arr[i],arr[minIndex]);
  }

  for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}