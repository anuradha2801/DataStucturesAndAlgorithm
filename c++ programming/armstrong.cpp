#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,count=0;
    int originalno=n,lastdigit,sum=0;
    cin>>n;
    while (n!=0)
    {
        n/=10;
        count++;
    }
    cout<<count<<endl;
    for(int i=0;i<=n;i++)
    {
        lastdigit=n%10;
        sum+=pow(lastdigit,count);
        n/=10;
    }
    if(sum==originalno)
    {
        cout<<"armstrong number\n";
    }
    else{
        cout<<"not armstrong number";
    }

    return 0;
}
