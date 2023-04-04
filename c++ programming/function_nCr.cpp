//nCr=n!/(n-r)xr!
#include<iostream>
using namespace std;
int factorial(int n)
{
   int factorial=1;
   for(int i=2;i<=n;i++)
   {
       factorial*=i;
   }
   return factorial;

}

int main()
{
    int n,r,C;
    cin>>n>>r;
    C=factorial(n)/(factorial(n-r)*factorial(r));
    cout<<C<<endl;
    return 0;
}
