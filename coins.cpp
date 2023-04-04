#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    int count=0;
    if(n>=5)
    {
        count=n/5;
    }
    cout<<n-count;
    return 0;
}