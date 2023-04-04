#include<bits/stdc++.h>
using namespace std;

class Complex{
public:
    int real;
    int imaginary;
    void setdata(int r,int i)
    {
        real=r;
        imaginary=i;
    }
   void getdata()
   {
       cout<<real<<" "<<imaginary;
   }


};
int main()
{

Complex c1;//Complex *ptr=new Complex;
Complex *ptr=&c1;
(*ptr).setdata(1,15);//ptr->setdata(1,15);
(*ptr).getdata();    //ptr->getdata();


    return 0;
}