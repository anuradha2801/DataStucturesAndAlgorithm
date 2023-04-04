#include<iostream>
using namespace std;
int main()
{
    int num,i;
    bool flag=0;
    cout<<"enter the number:"<<endl;
    cin>>num;
    for(i=2;i<=num/2;i++)
    {
        if (num%i==0)
        {
            cout<<"none prime"<<endl;
            flag=1;
            break;
        }
        
    }
    if(flag==0)
    {
        cout<<"prime";
    }
    return 0;
}