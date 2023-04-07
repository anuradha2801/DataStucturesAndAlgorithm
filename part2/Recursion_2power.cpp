#include<iostream>
using namespace std;

int power(int n)
{
    if(n==0)
    {
        return 1;
    }
    return 2*power(n-1);
}

int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n*fact(n-1);
}

int febonacci(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }

    return febonacci(n-2)+febonacci(n-1);
}
int main()
{
    int n;
    cin>>n;
    int ans;
    ans=power(n);
    cout<<ans<<endl;


    cout<<fact(n)<<endl;

    cout<<febonacci(n)<<endl;
    return 0;
}