#include<bits\stdc++.h>
using namespace std;
int power(int a,int b)
{
    int ans=1;
    for(int i=1;i<=b;i++)
    {
        ans=ans*a;
    }
    return ans;
}

int factorial(int a)
{
 int fact=1;
 for(int i=1;i<=a;i++)
 {
     fact=fact*i;
 }
 return fact;
}

int nCr(int n,int r)
{
    int num=factorial(n);
    int deno=factorial(r)*factorial(n-r);
    int ans=num/deno;
    return ans;
}

void isprime(int n)
{
    int flage=1;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flage=0;
        
        }
        
    }
    if(flage==1)
    {
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}
int main()
{
int a, b;
cin>>a>>b;
cout<<"power="<<power(a,b)<<endl;
cout<<"factorial=>"<<factorial(a)<<endl;
cout<<"nCr=>"<<nCr(a,b)<<endl;
cout<<"is prime=>"<<endl;
isprime(a);

    return 0;
}