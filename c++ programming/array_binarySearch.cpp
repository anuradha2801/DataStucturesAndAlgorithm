#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int n,int key)
{
    int s=0,e=n;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;

}
int main()
{
    int n,key,i, mid;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the key:"<<endl;
    cin>>key;
    cout<<binarySearch(arr,n,key);
    return 0;

}