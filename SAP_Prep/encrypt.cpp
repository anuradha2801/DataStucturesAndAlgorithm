#include<bits/stdc++.h>
using namespace std;
int power(int a,int b)
{ 
    int ans=1;
    for(int i=1;i<=b;i++)
    {
        ans*=a;
    }
    return ans;
}
int main()
{
    int S=2;
    int N=3;
    int M=4;

    int a=power(S,N);
    int b=a%10;
    int c=power(b,M);
    int d=c%1000000007;
    cout<<d;
    return 0;
}