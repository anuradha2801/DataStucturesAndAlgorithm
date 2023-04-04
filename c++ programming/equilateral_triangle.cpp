//wap to check weather a traingle is equilateral,scalen or scalar.
#include<iostream>
using namespace std;
int main()
{
    int side1,side2,side3;
    cout<<"enter the three sides of the triangle:\n";
    cin>>side1>>side2>>side3;
    if (side1==side2 && side2==side3 && side3==side1)
    {
        cout<<"equilateral triangle";
    }
    else if(side1==side2 || side2==side3||side3==side1)
    {
        cout<<"scalar triangle";
    }
    else{
        cout<<"scalen triangle";
    }
    return 0;
}

