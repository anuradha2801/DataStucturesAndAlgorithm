//wap to print all the prime number upto a given range
#include<iostream>
using namespace std;
int main()
{
     int a,b,i,num;
    int count=0;
    cout<<"enter two number:";
    cin>>a>>b;
    for(num=a;num<b;num++)
    {
       for ( i = 2; i < num; i++)
        {
           if(num%i==0)
           break;
        }

if(i==num){
    cout<<num<<endl;

          }
    }
    return 0;
}
