//wap to print pelindrome pattern  
//row=n, column-space (1 to n-row no) ,2.k=row no(print k--)(n-row no to n),k=2(k++)(n to n+row no-1)
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        int j;
     for (j=1;j<=n-i;j++)
     {
        cout<<" ";
     }
      
     int k=i;
     for(;j<=n;j++)
     {
         cout<<k--;
     }

     k=2;
     for (;j<=n+i-1;j++)
     {
        cout<<k++;
     }
     cout<<endl;
    }
    
    return 0;
}
