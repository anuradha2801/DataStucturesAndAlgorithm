#include<iostream>
using namespace std;

int sum(int arr[],int size)
{
    if(size==0)
    {
         return 0;
    }
    if(size==1)
    {
        return arr[0];
    }

   int remainingpart= sum(arr+1,size-1);
   int sum= remainingpart+arr[0];
   return sum;
 
}
int main()
{
    int arr[5]={1,2,3,4,5};
 cout<<sum(arr,5);
    return 0;
}