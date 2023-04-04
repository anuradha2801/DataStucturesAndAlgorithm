#include<bits\stdc++.h>
using namespace std;
void sortNonZeros(int arr[],int n)
{
    int noneZero=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[noneZero]);
            noneZero++;
        }
    }
}
int main()
{
   int n;
    cin>>n;
    int arr[n];

  for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
sortNonZeros(arr,n);

 for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}