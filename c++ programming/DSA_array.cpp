#include<iostream>
using namespace std;

void insertelement(int n,int arr[]){
int pos;
cout<<"enter postion"<<endl;
cin>>pos;
cout<<"enter new element:"<<endl;
int element;
cin>>element;
if(pos>n)
{
    cout<<"invalid postion"<<endl;
}
for(int i=n-1;i>=pos-1;i--)
{
arr[i+1]=arr[i];
}
arr[pos-1]=element;

for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
}

 void deleteelement(int n,int arr[])
 {
     int pos;
     cout<<"enter the postion at which the element is to be deleted:"<<endl;
    cin>>pos;
    if(pos>n)
    {
        cout<<"not possible to delete"<<endl;
    }
     for(int i=pos-1;i<n;i++)
     {
         arr[i]=arr[i+1];
     }
       cout<<"elements after deletion:"<<endl;

     for(int i=0;i<n-1;i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
 }

 int  binarySearch(int n,int arr[])
 {
  int key;
  cout<<"enter the element to be searched:"<<endl;
  cin>>key;
  int s=0;
  int e=n;
  while(s<=e)
  {
      int mid=(s+e)/2;
      if(arr[mid]==key)
      {
          return mid;
      }
      else if(arr[mid]>key)
      {
          e=mid-1;
      }
      else
      {
          s=mid+1;
      }
  }
return -1;

 }

 int linearSearch(int n,int arr[])
 {
int key;
cout<<"enter the element to be searched via linear search:"<<endl;
cin>>key;
 for(int i=0;i<n;i++)
 {
     if(arr[i]==key)
     {
        return 1;
     }
 }
 return -1;
 }

int main()
{
    int n;
    cout<<"enter the size of the array:"<<endl;
    cin>>n;
  int  arr[n];
  cout<<"enter the elements of the array:"<<endl;
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }
  int op;
  do
  {
     cout<<"1 for inserting an element in the array"<<endl
      <<"2 for deleting an element"<<endl
      <<"3 for linear search"<<endl
      <<"4 for binary search"<<endl
      <<"5 to exit from program:"<<endl;
      cin>>op;
  switch (op)
  {
  case 1:
       insertelement(n,arr);
      break;
      
  case 2:
      deleteelement(n,arr);
      break;
  case 3:
   cout<<linearSearch(n,arr)<<endl;

    break;
    case 4:
  cout<<binarySearch(n,arr)<<endl;
  default:
  cout<<"enter a valid operation";
        break;
  }
  } while(op!=5);
  

return 0;

}