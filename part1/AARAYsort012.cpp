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

int low=0;
int mid=0;
int high=n-1;
while(mid<high)
{
    if(arr[mid]==0)
    {
        swap(arr[mid],arr[low]);
        mid++;
        low++;
    }
    if(arr[mid]==1)
    {
       mid++;
    }
    if(arr[mid]==2)
    {
        swap(arr[mid],arr[high]);
        mid++;
        high--;
    }
  
}
for(int a=0;a<n;a++)
{
    cout<<arr[a]<<" ";
}
return 0;
}