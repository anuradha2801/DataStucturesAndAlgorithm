#include<iostream>
using namespace std;

bool linearSearch(int arr[],int size,int key)
{
    if(size==0)
    {
        return 0;
    }
    if(arr[0]==key)
    {
        return true;
    }
 
   bool remainingpart=linearSearch(arr+1,size-1,key);
   return remainingpart;

}
int main()
{
    int arr[6]={3,1,5,2,8,2};
    int key;
    cin>>key;
    cout<<linearSearch(arr,6,key);
    return 0;
}