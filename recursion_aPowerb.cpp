#include<iostream>
using namespace std;

int power(int a,int b)
{
    if(b==0)
    {
        return 1;
    }
    if(b==1)
    {
        return a;
    }
    //recursive call
     int ans=power(a,b/2);
    //ek case solve krdo
    if(b%2==0){
        //even value of b
        return ans*ans;
    }else//odd
    {
        return a*ans*ans;
    }
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<power(a,b);
    return 0;
}