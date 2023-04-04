//wap a program to find the square of a number using class.
#include<bits/stdc++.h>
using namespace std;
class Square{
private:
int num;
public:
void getnum()
{
    cout<<"enter a number for finding its square"<<endl;
    cin>>num;
}
void squareno()
{
    int ans=num*num;
    cout<<ans<<endl;
}

};
int main()
{
    Square obj1;
    obj1.getnum();
     obj1.squareno();
    return 0;
}