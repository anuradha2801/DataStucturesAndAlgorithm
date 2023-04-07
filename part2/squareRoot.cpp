#include<bits\stdc++.h>
using namespace std;

int squareroot(int n)
{
    int s=0;
    int e=n;
    int mid=(s+e)/2;
  int ans=-1;
    while(s<=e)
    {
       long long int product=mid*mid;

        if(product==n)
        {
            return mid;
        }

         if(product<n)
        {
            ans=mid;
            s=mid+1;
       
        }
        else{
         e=mid-1;   
        }

        mid=(e+s)/2;
    }
    return ans;
}

double precision(int s,int n)
{
double ans=s;
double fact=1;
for(int i=0;i<3;i++)
{
     fact=fact/10;
    for(double j=ans;j*j<n;j=j+fact)
    {
        ans=j;
    }
}
return ans;
}
int main()
{
    int n;
    cin>>n;
  int  s=squareroot(n);
  cout<<s<<endl;
  cout<<precision(s,n)<<endl;
    return 0;
}