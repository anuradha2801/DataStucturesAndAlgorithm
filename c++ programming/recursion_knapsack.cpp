/*put n items with given weight and value in a knapsack of capacity W to get the 
maximum total value in the knapsack*/
#include<bits/stdc++.h>
using namespace std;
int knapsack(int n,int W,int wt[],int value[])
{
    if(n==0 || W==0)
    {
        return 0;
    }
    if(wt[n-1]>W)
    {
      return  knapsack(n-1,W,wt,value);
    }
    return max(knapsack(n-1,W-wt[n-1],wt,value)+value[n-1], knapsack(n-1,W,wt,value));
}
int main()
{
    int wt[]={10,20,30};
    int W=50;
    int value[]={100,50,150};
    cout<<knapsack(3,W,wt,value)<<endl;
    return 0;
}