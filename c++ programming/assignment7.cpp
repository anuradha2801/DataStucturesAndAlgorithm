//wap of binary operator overloading using friend function.
#include<bits/stdc++.h>
using namespace std;
class Complex{
    public:
int real;
int imaginary;
public:
void setdata(int r,int i)
{
    real=r;
    imaginary=i;
}
void show()
{
    cout<<real<<"+"<<imaginary<<"i";
}
friend Complex operator+(Complex&,Complex&);
};
Complex operator+(Complex& c1, Complex&c2)
{
Complex temp;
temp.real=c1.real+c2.real;
temp.imaginary=c1.imaginary+c2.imaginary;
return temp;
}
int main()
{
    Complex c1;
    c1.setdata(2,3);
    Complex c2;
    c2.setdata(3,2);
    Complex c3;
    c3=c1+c2;
    c3.show();
    return 0;
}
