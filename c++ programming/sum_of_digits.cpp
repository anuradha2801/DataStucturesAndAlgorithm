#include<bits/stdc++.h>
using namespace std;
void sum(int n)
{
    int last_digit;
    int sum=0;
    int temp=n;
    while(n>0)
    {
        last_digit=n%10;
        sum=sum+last_digit;
         n/=10;
    }
      cout<<sum<<endl;

}
int main()
{
    int tc;
    int n;
    cin>>tc;
    for(int i=0;i<tc;i++)
    {
        cin>>n;
      sum(n);
    }
    
    return 0;
}