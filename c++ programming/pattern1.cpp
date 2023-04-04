//wap to print a solid rectangle
#include<iostream>
using namespace std;
int main()
{
    int row,column,i,j;
    cout<<"enter the rows and columns:\n";
    cin>>row>>column;
    for (i=1;i<=row;i++)
    {
        for(j=1;j<=column;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}

