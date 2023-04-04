//wap to print a hollow rectangle
#include<iostream>
using namespace std;
int main()
{
    int row,column,i,j;
    cout<<"enter the row and column:\n";
    cin>>row>>column;
    for (i=1;i<=row;i++)
    {
        for(j=1;j<=column;j++)
        {
            if (i==1 || i==row || j==1 || j==column)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
    
    return 0;
}
