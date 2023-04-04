#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if(n==0){
        return 1;
    }
    int previousfact=fact(n-1);
    return n*previousfact;
}
int main()
{
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
}