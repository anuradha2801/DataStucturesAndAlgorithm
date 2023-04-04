#include<bits/stdc++.h>
using namespace std;


class Complex;
class calculator
{
    public:
    int add(int a,int b)
    {
        return(a+b);
    }

    int sumReal(Complex,Complex);
    int sumComplex(Complex,Complex);

};

class Complex
{
private:
    /* data */
public:
   int a,b;
 friend int/* calculator::*/sumComplex(Complex,Complex);
friend int /*calculator::*/sumReal(Complex,Complex);
//friend class calulator;
void setNumber(int n1,int n2)
{
    a=n1;
    b=n2;
}

void display()
{
    cout<<a<<"+"<<b<<"i"<<endl;
}

};

int calculator::sumReal(Complex o1,Complex o2)
{
return(o1.a+o2.a);
}

int calculator::sumComplex(Complex o1,Complex o2)
{
    return (o1.b+o2.b);
}

int main()
{
   Complex o1,o2;
   o1.setNumber(4,5);
   o2.setNumber(1,3);
   calculator calc;
   int res=calc.sumReal(o1,o2);
   cout<<"sum of real part of complex="<<res<<endl;
   int resc=calc.sumComplex(o1,o2);
   cout<<"sum of complex part of complex="<<resc<<endl;
return 0;
}