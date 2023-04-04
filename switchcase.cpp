#include<bits\stdc++.h>
using namespace std;
int main()
{
    int amount;
    cin>>amount;
if(amount>500)
{
    cout<<"no. of 500 notes is "<<amount/500<<endl;
    amount=amount-(amount/500)*500;
}
if(amount>100 && amount<500)
{
    cout<<"no. of 100 notes is "<<amount/100<<endl;
    amount=amount-(amount/100)*100;
}
if(amount>=50 && amount<100)
{
    cout<<"no. of 50 notes is "<<amount/100<<endl;
    amount=amount-((amount/50)*50);
}
if(amount>=20 && amount<50)
{
    cout<<"no. of 20 notes "<<amount/20<<endl;
     amount=amount-((amount/20)*20);
}

  if(amount>=10 && amount<=20)
{
    cout<<"no. of 10 notes "<<amount/10<<endl;
     amount=amount-((amount/10)*10);
}
if(amount>=1 && amount<10)
{
    
    cout<<"no. of 1 notes "<<amount<<endl;
     
}

    return 0;
}