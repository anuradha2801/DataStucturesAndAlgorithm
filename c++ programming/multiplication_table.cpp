//wap to print multiplication table of a given number
#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"enter the num:";
    cin>>n;
    for(i=0;i<=10;i++)
    {
        cout<<n<<"x"<<i<<"="<<n*i<<endl;
    }
    return 0;
}
