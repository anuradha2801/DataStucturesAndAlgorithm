#include<bits/stdc++.h>
using namespace std;
/*
void withdraw(int wd,int ca)
{
if(wd<=ca)
{
ca=ca-wd;
}
else
cout<<"You dont have enough amount"<<endl;
}
*/
class Bank {
    public:
string name;
string account_no; 
public:

void details(){
    cout<<"Enter your Acoount Number: "<<endl;
    cin>>account_no;
    cout<<"enter your Name: "<<endl;
         cin>>name; 
         cout<<"======================================================================="<<endl;
}
void show()
{
    cout<<"YOUR NAME: "<<name<<endl;
    cout<<"YOUR ACCOUNT NUMBER: "<<account_no<<endl;
     cout<<"======================================================================="<<endl;
}

};
int main()
{
cout<<"========================================================================"<<endl<<endl;

Bank c1;
c1.details();
c1.show();
int ch;
float ca=500000;
 int wd;
do
{
    cout<<"<===========OUR SERVICES===========>"<<endl;
cout<<"press 1 to see your current amount"<<endl;
cout<<"press 2 to withdraw money"<<endl;
cout<<"press 3 to deposit money"<<endl;
cout<<"press 4 to exit"<<endl;
cout<<"-----------------------------------------------"<<endl;
cin>>ch;


if(ch==2)
{
  cout<<"Enter the withdraw amount: "<<endl;
      cin>>wd;
      if(wd<=ca)
{
ca=ca-wd;
cout<<ca;
}
else
cout<<"You dont have enough amount to withdraw"<<endl;  
}
else if(ch==1)
{
      cout<<"Your current avilable balance is: "<<ca<<endl;
}
else if(ch==3)
{
    cout<<"Enter the money to be deposited: "<<endl;
    int d;
    cin>>d;
    ca=ca+d;
}

 if(ch==4)
 {
     cout<<"Thank you"<<endl;
 }
}while(ch!=4);

    return 0;
}

