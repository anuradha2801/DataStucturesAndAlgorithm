//find the pivot of the given sorted rotated array
#include<bits\stdc++.h>
using namespace std;

int pivot(int arr[],int n)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e)
    {
        if(arr[mid]>=arr[0])
        {
            s=mid+1; //moving start toward pivot
        }
         else{
             e=mid;
         }
mid=(e+s)/2;
    }

    return arr[e];
}
int main()
{

int arr[5]={3,8,10,17,1};
cout<<pivot(arr,5);
    return 0;
}