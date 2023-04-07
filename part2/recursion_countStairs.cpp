#include<iostream>
using namespace std;

int stairCount(int n)
{
    if(n==0)
    {
        return 1;
    }
    if(n<0)
    {
        return 0;
    }

    return (stairCount(n-2)+stairCount(n-1));
}
int main()
{
    int n;
    cin>>n;
    cout<<stairCount(n);
    return 0;
}