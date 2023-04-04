
   //wap a program to find the square of a number using nested class.
#include<bits/stdc++.h>
using namespace std;
class Square{
    public:
    class innerclass{
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
};
int main()
{
    Square::innerclass obj1;
    obj1.getnum();
     obj1.squareno();
    return 0;
}