#include<bits/stdc++.h>
using namespace std;
class A
{
public:
 /* data */
    int a;
    
   void getval1()
   {
       cout<<"enter 1st value: ";cin>>a;

   }
   void set()
   {
       a=a;
   }

};

class B:public A
{
   public:
    int b;
   
    void getval2(){
     cout<<"enter 2nd value: ";
     cin>>b;
    }
    void set2()
    {
        b=b;
    }
};
class C: public B
{

    /* data */
public:
int z;
void product()
{
    cin>>z;
    z=z;
   cout<<z*a*b;
}
};

int main()
{
    C obj1;
   obj1.getval1();
    obj1.set();
    obj1.getval2();
    obj1.set2();
    
    
    obj1.product();
}