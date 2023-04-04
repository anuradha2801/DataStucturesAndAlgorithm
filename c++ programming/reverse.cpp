#include<iostream>
using namespace std;
int main()
{
    int num,reverse=0,lastdigit;
    cout<<"enter a number:"<<endl;
    cin>>num;
    while (num!=0)
    {
     lastdigit=num%10;
         reverse=reverse*10+lastdigit;
        num/=10;
    }
    
cout<<reverse<<endl;

}
