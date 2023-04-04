#include<bits\stdc++.h>
using namespace std;

int binary(int a[],int n, int key)
{
    int s=0;
    int e=n-1;
    int mid= s+ (e-s)/2;
    while(s<=e)
    {
        if(a[mid]==key)
        {
            return mid;
        }

        if(key>a[mid])
        {
             s=mid+1;
           
        }
        else{//key>mid
            e=mid-1;
        }
        mid=s+(e-s)/2;
      // mid=(s+e)/2;

    }
    return -1;
}
int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
int key;
cout<<"enter a key to search: "<<endl;
cin>>key;
cout<<binary(a,n,key)<<endl;

    return 0;
}