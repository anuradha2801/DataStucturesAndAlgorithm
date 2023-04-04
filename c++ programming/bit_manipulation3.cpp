//write a program to find 2 unique numbers in an array where all numbers except two,are present twice.
#include<bits/stdc++.h>
using namespace std;
int SetBit(int n,int pos)
{
    return((n & (1<<pos))!=0);
}

void unique(int arr[],int n)
{
   int xorsum=0;
    for(int i=0;i<n;i++)
    {
        xorsum=xorsum^arr[i];
    }
    int setbit=0;
    int tempxor=xorsum;

    int pos=0;
    while(setbit!=1)
    {
        setbit=xorsum & 1;
        pos++;
        xorsum=xorsum>>1;
    }
    int newxor=0;
    for(int i=0;i<n;i++)
    {
        if(SetBit(arr[i],pos-1))
        {
            newxor=newxor^arr[i];
        }
    }
cout<<newxor<<endl;
cout<<(tempxor^newxor)<<endl;

}
int main()
{
int arr[]={1,2,3,1,2,3,5,7};
unique(arr,8);
return 0;
}