#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool flag=0;
    for(int i=0;i<=30;i++)
    {
        if(pow(2,i)==n)
        {
          flag=1;
        }
    }

    if(flag==1)
    {
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}