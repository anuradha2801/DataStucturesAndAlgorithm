#include<bits/stdc++.h>
using namespace std;

class Complex{
private:
int real;
int imag;

public://constructor
Complex(int r=0,int i=0)
{
    real=r;
    imag=i;
}

Complex operator+(Complex const &obj) //operator overloading
{

    Complex res;
    res.imag=imag+obj.imag;
    res.real=real+obj.real;
    return res;
}

void print()
{
    cout<<real<<"+i"<<imag<<endl;
}
};

int main()
{
    Complex c1(12,7),c2(6,7);
    Complex c3=c1+c2;
    c3.print();
    return 0;
}