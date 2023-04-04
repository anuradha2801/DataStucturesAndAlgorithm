//wap a program to find the square of a number using class.
#include<bits/stdc++.h>
using namespace std;
class Sum{
private:
int num;
public:
void sumOfNaturalno()
{
    int sum=0;
    for(int i=1;i<=10;i++)
    {
        sum=sum+i;
    }
    cout<<sum;
    
}

};
int main()
{
    Sum obj1;
     obj1.sumOfNaturalno();
    return 0;
}