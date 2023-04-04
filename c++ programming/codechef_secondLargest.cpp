#include<bits/stdc++.h>
using namespace std;

void secondLargest(int a,int b,int c)
{
   if(a>b && a>c)
   {
      /* if(b>c)
       {
           cout<<b<<endl;       
       }
       else{
           cout<<c<<endl;
       }*/
       cout<<max(b,c)<<endl;
   }

    if(b>a && b>c)
   {
      /* if(a>c)
       {
           cout<<a<<endl;
       }else
       {
           cout<<c<<endl;
       }*/
       cout<<max(a,c)<<endl;
   }


     if(c>a && c>b)
   {
       /*if(a>b)
       {
           cout<<a<<endl;
       }else
       {
           cout<<b<<endl;
       }*/
       cout<<max(a,b)<<endl;
   }
}
int main()
{
    int t,a,b,c;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>a>>b>>c;
        secondLargest(a,b,c);
    }



    return 0;
}