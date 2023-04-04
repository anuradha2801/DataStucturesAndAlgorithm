/*finding all the possible sub arrays of a given array and has maximum sum commulative sum approach
max sum=total sum-sum of non contributing ellements */

#include<bits/stdc++.h>
using namespace std;

int kadane(int a[],int n)
{
    int currentSum=0;
   int maxSum=INT_MIN;
   for(int i=0;i<n;i++)
   {
       currentSum+=a[i];
       if(currentSum<0)
       {
         currentSum=0;
       }
       maxSum=max(maxSum,currentSum);
       
   }
return maxSum;
}
int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
   int wrapsum;
   int nonWrapSum;
   int totalSum=0;
   nonWrapSum=kadane(a,n);
   for(int i=0;i<n;i++)
   {
       totalSum+=a[i];
       a[i]=-a[i];
   }
   wrapsum=totalSum+kadane(a,n);
     cout<<max(wrapsum,nonWrapSum);
    return 0;
} 