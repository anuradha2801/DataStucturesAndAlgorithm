#include<bits/stdc++.h>
using namespace std;


class c1
{
    public:
    int val1;
    void set(int a)
    {
        val1=a;
    }

    void display()
    {
        cout<<val1<<endl;
    }

};


class c2
{
    public:
    int val2;
    void set(int a)
    {
        val2=a;
    }

    void display()
    {
        cout<<val2<<endl;
    }
    friend void exchange(c1&,c2&);
};

void exchange(c1&x ,c2&y)
{
    int temp=x.val1;
    x.val1=y.val2;
    y.val2=temp;
}


int main()
{
c1 oc1;
c2 oc2;
oc1.set(20);
oc2.set(10);
oc1.display();
oc2.display();
exchange(oc1,oc2);
 oc1.display();
 oc2.display();
    return 0;
}