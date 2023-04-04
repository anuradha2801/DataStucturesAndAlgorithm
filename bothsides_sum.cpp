#include<bits\stdc++.h>
using namespace std;

int solve(int A[],int size, int B) {
    int sum1=0;
    int sum2=0;
  
    int i=0;
   int j=size;
   while(i!=B || j!=B)
   {
       
        if(i<B )
        {
         sum1=sum1+A[i] ;
         i++;
        }
         
          if(j>B ){
            sum2=sum2+A[j];
            j--;
         }
   }
    cout<<sum1<<endl;
    cout<<sum2<<endl;
    int ans=max(sum1,sum2);
    return ans;
}

int main()
{
    int A[5]={5,-2,3,1,2};
    cout<<solve(A,5,3)<<endl;
}