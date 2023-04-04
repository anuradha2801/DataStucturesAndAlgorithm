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

int i=0;
int j=n-1;
while(i<=j)
{
    if(arr[i]==0 && i<j)
    {
        i++;
    }
    if(arr[j]==1 && i<j)
    {
        j--;
    }
  else{
      swap(arr[i],arr[j]);
      i++;j--;
  }
}

for(int a=0;a<n;a++)
{
    cout<<arr[a]<<" ";
}
return 0;
}