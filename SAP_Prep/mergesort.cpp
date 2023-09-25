#include<iostream>
using namespace std;

void merge(int *arr,int s,int e)
{
  int mid=s+(e-s)/2;
  
  int l1=mid-s+1;
  int l2=e-mid;
  //copying values to the arrays
  int *narr1=new int[l1];
  int *narr2=new int[l2];
  int index=s;
  for(int i=0;i<l1;i++)
  {
    narr1[i]=arr[index];
    index++;
  }
  index=mid+1;
  for(int i=0;i<l2;i++)
  {
    narr2[i]=arr[index++];
  }
  
  //merging them
  int index1=0;
  int index2=0;
  int k=s;
  
  while(index1<l1 && index2<l2)
  {
    if(narr1[index1]<narr2[index2])
    {
      arr[k++]=narr1[index1++];
    }else{
       arr[k++]=narr2[index2++];
    }
    
  }
  
   while(index1<l1)
  {
      arr[k++]=narr1[index1++];
  }
    
  
   while(index2<l2)
  {
      arr[k++]=narr2[index2++];
  }
    
    delete[] narr2;
    delete[] narr1;
}

void mergesort(int *arr,int s,int e)
{
  if(s>=e)
  {
    return;
  }
  
  int mid=s+ (e-s)/2;
  mergesort(arr,s,mid);
  mergesort(arr,mid+1,e);
  merge(arr,s,e);
  
}



int main()
{

int arr[5]={5,2,10,6,9};

mergesort(arr,0,4);

for(int i=0;i<5;i++)
{
  cout<<arr[i]<<endl;
}
return 0;
}