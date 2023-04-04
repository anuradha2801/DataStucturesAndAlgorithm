//wap to find weather the number is prime or not
#include<iostream>
using namespace std;
int main()
{
    int num,i;
    int count=0;
    cout<<"enter a number:";
    cin>>num;
for ( i = 2; i < num; i++)
{
    if(num%i==0)
   count++;
}

if(count==0){
    cout<<num<<" is  a prime number";
}else {
    cout<<num<<" is  not a prime number";
}
    return 0;
}
