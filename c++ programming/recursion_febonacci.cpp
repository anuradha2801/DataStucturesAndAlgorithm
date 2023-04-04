#include<bits/stdc++.h>
using namespace std;

int febonacci(int n)
{
    if(n==0 || n==1){
        return n;
    }
    return febonacci(n-1)+febonacci(n-2);
}
int main()
{
    int n;
    cin>>n;
    cout<<febonacci(n)<<endl;
}