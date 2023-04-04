//wap a program to find the square of a number using class.
#include<bits/stdc++.h>
using namespace std;
class addition{
private:
int num1;
int num2;
public:
void getnum()
{
    cout<<"enter two number for addtion"<<endl;
    cin>>num1>>num2;
}
void addno()
{
    int ans=num1+num2;
    cout<<ans<<endl;
}

};
int main()
{
    addition obj1;
    obj1.getnum();
     obj1.addno();
    return 0;
}