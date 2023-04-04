//hiding sensitive data from user
#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    int a;
    void funcA()
    {
        cout << "faunc A\n";
    }

private:
    int b;
    void funcB()
    {
        cout << "faunc B\n";
    }

protected:
    int c;
    void funcC()
    {
        cout << "faunc C\n";
    }
};
int main()
{
A object;
object.funcA();
/*
object.funcB();
object.funcC;         private and protected data cannot be shared*/
    return 0;
}