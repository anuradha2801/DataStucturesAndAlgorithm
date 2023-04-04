
#include<bits/stdc++.h>
using namespace std;

int cdecimal_to_octal(int n)
{
    int x=1;
    int ans=0;
    while (n>0)
    {
        ans+=(n%8)*x;
        n/=8;
        x*=10;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<cdecimal_to_octal(n);
    return 0;
}