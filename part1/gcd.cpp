// gcd(a,b)=gcd(a-b,b)
// gcd(a,b)=gcd(a%b,b)

#include <bits\stdc++.h>
using namespace std;

int gdc(int a, int b)
{

    if (a == 0)
    {
        return a;
    }

    if (b == 0)
    {
        return b;
    }
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
     return a;


     
}
int main()
{

    int a, b;
    cout << "enter two numbers: " << endl;
    cin >> a >> b;
    int ans = gdc(a, b);
    cout << "the gdc of two numbers is: " << ans;

    return 0;
}