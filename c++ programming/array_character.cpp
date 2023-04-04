//wap to check weather a input in charater array is pelindrom or not.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char a[n];
    cin>>a;

    bool check=1;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=a[n-1-i])
        {
            check=0;
            break;
        }
    }
    if(check==1)
    {
        cout<<"pelindrom";
    }else{
        cout<<"not pelindrom";
    }
return 0;
}