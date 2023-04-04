#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
     cout<<"enter three numbers:\n";
    cin>>a>>b>>c;
     if (a>b)
     {
         if (a>c)
         {
             cout<<"a is largest"<<a<<endl;
         }else{
             cout<<"c is largest"<<c<<endl;
         }
        
     }
     else {
         if(b>c)
          {
         cout<<"b is largest"<<b;
          }
          else{
              cout<<"c is largest"<<c;
          }
     }
    return 0;
}
