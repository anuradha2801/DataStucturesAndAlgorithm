//WAP a c++ program to make a simple calculator using switchcase
#include<iostream>
using namespace std;
int main(){
    char opr;
    int a,b;
    cout<<"enter the 1st number and second number:";
    cin>>a>>b;
    cout<<"enter the operator";
    cin>>opr;
    switch (opr)
    {
    case '+':
         cout<<a+b;
        break;
    case '-':
         cout<<a-b;
         break;
    case '*':
         cout<<a*b;
         break;
    case '/':
         cout<<a/b;
         break;
    default:
        cout<<"please enter a valid operator:";
        break;
    }


}