/*inhertance -DERIVED CLASSS(child)-the class that inherits from another class
            BASE CLASS(parent)-the class that being inherited from
     poly-many     morphinism- forms->   compile time(function overloading, operator overloading)
                                          Run time(virtual function)*/


#include<bits/stdc++.h>
using namespace std;

class apnaCollege
{
    //function overloading
    public:

    void fun()
    {
        cout<<"its an void function"<<endl;
    }

    void fun(int n)
    {
        cout<<"its an integer function"<<endl;
    }

    void fun(double x)
    {
        cout<<"its an double function"<<endl;
    }

};

int main()
{
    apnaCollege a;
    a.fun();
    a.fun(4);
    a.fun(6.434);
    return 0;
}
            