#include<bits/stdc++.h>
using namespace std;
int binary_to_decimal(int n){
    int ans=0;
    int x=1;

    while(n>0){
       int lastdigit=n%10;
        ans+=x*lastdigit;
        x*=2;
        n/=10;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<(binary_to_decimal(n));
    return 0;
}