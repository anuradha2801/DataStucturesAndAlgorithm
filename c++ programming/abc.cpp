#include<bits/stdc++.h>
using namespace std;
int equal(int e,int arr[],int n)
{
      int maxNo=INT_MIN;
    int minNo=INT_MAX;

    for(int i=0;i<n;i++)
    {
        maxNo=max(maxNo, arr[i]);
        minNo=min(minNo,arr[i]);
    }
    int c2=0;
    for(int i=0;i<e;i++)
    {
      if(arr[i]<maxNo)
      {
          arr[i]=arr[i]+1;
          c2++;
      }else{
          c2--;
      }
    }
   
    return c2;
}

int main()
{
    int e;
    int n;
    cin>>n;
    cin>>e;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   cout<< equal(e,arr,n);
}