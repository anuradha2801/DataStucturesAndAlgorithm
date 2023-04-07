#include<iostream>
using namespace std;


int merge(int *arr,int s,int e)
{

    int mid=s+(e-s)/2;
    int invc;

    //cpying values from the array;
    int n1=mid-s+1;
    int n2=e-mid;

    int* firstpart=new int[n1];
    int* secondpart=new int[n2];

    int mainIndex=s;
    for(int i=0;i<n1;i++)
    {
        firstpart[i]=arr[mainIndex++];
    }
    mainIndex=mid+1;
    for(int j=0;j<n2;j++)
    {
        secondpart[j]=arr[mainIndex++];
    }

    //merge sorted arrays

int i=0;int j=0;mainIndex=s;

while(i<n1 && j<n2)
{
    if(firstpart[i]<secondpart[j])
    {
        arr[mainIndex++]=firstpart[i++];
    }
    else{
        arr[mainIndex++]=secondpart[j++];
        invc=invc+(mid-i);
    }

    while(i<n1)
    {
       arr[mainIndex++]=firstpart[i++]; 
    }

    while(j<n2)
    {
     arr[mainIndex++]=secondpart[j++];
    }
   // cout<<invc<<endl;
}
return invc;

}


int mergeSort_inversions(int *arr,int s,int e)
{
    int mid=s+(e-s)/2;
    int invc=0;
    if(s<e)
    {
           invc+=mergeSort_inversions(arr,s,mid);
           invc+=mergeSort_inversions(arr,mid+1,e);

           //merge the two parts
           invc+=merge(arr,s,e);
    }
    return invc;
}

int main()
{
    int arr[4]={9,6,8,4};
    int n=4;
  cout<< mergeSort_inversions(arr,0,n-1);



    return 0;
}