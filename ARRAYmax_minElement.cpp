#include<bits\stdc++.h>
using namespace std;

void maxmin(int arr[],int n)
{
      int maxi=INT_MIN;
    int mini=INT_MAX;
    for(int i=0;i<n;i++)
    {
        maxi=max(maxi,arr[i]);
        mini=min(mini,arr[i]);
    }
    cout<<"maximum element=>"<<maxi<<endl;
    cout<<"minimum element=>"<<mini<<endl;
}

void sum(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    cout<<"sum of all the elements of array is=>"<<sum<<endl;
}

void linearSearch(int arr[],int n)
{
    cout<<"enter a key to be searched=>"<<endl;
    int key;
    int flag=0;
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
           flag=1;
        }
      
    }
    if(flag==1){
         cout<<"key is present "<<endl;
    }
    else{
        cout<<"not present";
    }
    }

  void reverse(int arr[],int n)
  {
      int s=0;
      int e=n-1;
      while(s<=e)
      {
          swap(arr[s],arr[e]);
          s++;
          e--;
      }
      for(int i=0;i<n;i++)
      {
          cout<<arr[i]<<" ";
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
  maxmin(arr,n);
  sum(arr,n);
  linearSearch(arr,n);
  reverse(arr,n);


    return 0;

}
