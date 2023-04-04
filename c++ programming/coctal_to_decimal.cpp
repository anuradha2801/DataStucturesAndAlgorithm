#include<bits/stdc++.h>
using namespace std;
int octal_to_decimal(int n){
    int ans=0;
    int x=1;

    while(n>0){
       int lastdigit=n%10;
        ans+=x*lastdigit;
        x*=8;
        n/=10;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<(octal_to_decimal(n));
    return 0;
}