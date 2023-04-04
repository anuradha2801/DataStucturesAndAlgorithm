#include<bits/stdc++.h>
using namespace std;

int power(int n,int p)
{
    if(p==0){
        return 1;
    }
    int previouspower=power(n,p-1);
    return n*previouspower;
}
int main()
{
    int n;
    int p;
    cin>>n>>p;
    cout<<power(n,p)<<endl;
}