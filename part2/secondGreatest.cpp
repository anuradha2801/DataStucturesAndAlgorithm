#include <iostream>
using namespace std;

int secondGreatest(int a, int b, int c)
{
    if ((a > b && b > c) || (a < b && b < c))
    {
        return b;
    }
    else if ((b > a && a > c) || (b < a && a < c))
    {
        return a;
    }
    else
    {
        return c;
    }
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << secondGreatest(a, b, c);
    return 0;
}