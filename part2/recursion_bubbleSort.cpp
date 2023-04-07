#include<iostream>
using namespace std;

void bubblesortArray(int *arr,int n)
{
    if(n==0 || n==1)
    {
        return;
    }
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        swap(arr[i],arr[i+1]);
    }
    bubblesortArray(arr,n-1);
}


void selection_sort(int *arr,int n)
{
if(n==0 || n==1)
{
    return;
}

for(int i=0;i<n-1;i++)
{
    int minindex=i;

    if(arr[minindex]<arr[i+1])
    {
      minindex=i+1;
       
    }
     swap(arr[minindex],arr[i+1]);
}

selection_sort(arr,n-1);


}



void printArray(int *arr, int n)
{
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}


int main()
{
    int arr[6]={2,5,1,0,4,3};
    bubblesortArray(arr,6);
   printArray(arr,6);
cout<<endl<<endl;
    int arr2[6]={2,0,5,1,9,4};
    selection_sort(arr2,6);
    printArray(arr2,6);
    return 0;
}