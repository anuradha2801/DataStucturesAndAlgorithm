#include<bits\stdc++.h>
using namespace std;

void reverse(int arr[],int n,int m)
{
    int s=m+1;
    int e=n-1;
    while(s<e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}
int main()
{
   int n;
    cin>>n;
    int arr[n];
int m;
cin>>m;

  for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
reverse(arr,n,m);

 for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}