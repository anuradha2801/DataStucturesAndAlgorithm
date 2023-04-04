#include<bits/stdc++.h>
using namespace std;
int first_digit(int n){
 while(n>=10)
        {
            n=n/10;
        }
return n;
}
int last_digit(int n)
{
    return n%10;
}

int main()
{
    int t;
    int n;

    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
       
        cout<<first_digit(n)+last_digit(n)<<endl;
    }
    return 0;
}