#include<bits\stdc++.h>
using namespace std;

int binarySearch(int arr[],int a,int b, int key)
{
    int s=a;
    int e=b;
  int  mid=(s+e)/2;
while(s<e)
{
    if(arr[mid]==key)
    {
        return mid;
    }
    if(key<arr[mid])
    {
        s=mid+1;
    }
    else{
        e=mid-1;
    }
    mid=(s+e)/2;
}
return -1;
}

int pivot(int arr[],int n)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
   while (s<e)
   {
     if(arr[mid]>=arr[0])
     {
         s=mid+1;
     }
     else{
         e=mid;
     }
     mid=(s+e)/2;
   }
   return s;
  
}
int main()
{
int arr[5]={7,9,1,2,3};
int p=pivot(arr,5);
int key;
cin>>key;
if(arr[p]<=key && key<=arr[5] )
{
   cout<< binarySearch(arr,p,5,key);
}
else{
  cout<<  binarySearch(arr,0,p-1,key);
}
    return 0;
}