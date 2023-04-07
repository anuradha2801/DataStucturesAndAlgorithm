#include<iostream>
using namespace std;


int binarySearch(int arr[],int s,int e,int key)
{
   
    if(s>e)
    {
        return 0;
    }
     int mid=(e+s)/2;
    if(arr[mid]==key)
    {
        return mid;
    }
    if(arr[mid]<key)
    {
        return binarySearch(arr,mid+1,e,key);
    }else{
        return binarySearch(arr,s,mid-1,key);
    }
}
int main()
{
    int arr[5]={1,2,3,4,5};
    int key;
    cin>>key;
    cout<<binarySearch(arr,0,4,key);
return 0;
}