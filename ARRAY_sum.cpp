#include<bits\stdc++.h>
using namespace std;
void reverse(int arr3[],int a)
{
    int s=0;
    int e=a-1;
    while (s<e)
    {
        swap(arr3[s],arr3[e]);
        s++;e--;
        /* code */
    }
    
}
void sum(int arr1[],int n,int arr2[],int m,int arr3[],int a)
{
    int i=n-1;
    int j=m-1;
    int carry=0;
    int k=0;
   while(i>=0 && j>=0)
   {
       int val1=arr1[i];
       int val2=arr2[j];
       int sum=val1+val2+carry;
       carry=sum/10;
       sum=sum%10;
       arr3[k++]=sum;
   i--;j--;
   }
   while(i>=0)
   {
       int sum=arr1[i]+carry;
       carry=sum/10;
       sum=sum%10;
       arr3[k++]=sum;
       i--;
   }

    while(j>=0)
   {
       int sum=arr1[j]+carry;
       carry=sum/10;
       sum=sum%10;
       arr3[k++]=sum;
       j--;
   }

}
using namespace std;
int main()
{
int arr1[6]={1,3,5,7,2,2};
int arr2[5]={2,4,1,1,2};
int arr3[5]={0};

sum(arr1,6,arr2,5,arr3,6);
reverse(arr3,6);
for(int i=0;i<6;i++)
    {
        cout<<arr3[i]<<" ";
    }

    return 0;
}
   
 