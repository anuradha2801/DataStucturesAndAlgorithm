#include<bits/stdc++.h>
using namespace std;

void primeSieve(int n)
{
   //
   vector<bool> prime(n,false);
  //  int prime[100]={0};
    for(int i=2;i<=n;i++)
    {
        if(prime[i]==0)
        {
            for(int j=2*i;j<=n;j+=i)
            {
                prime[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(prime[i]==0)
        {
            cout<<i<<" ";
        }
    }
}
int main()
{
    int n;
    cin>>n;
primeSieve(n);
return 0;
}