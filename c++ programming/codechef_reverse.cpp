#include <bits/stdc++.h>
using namespace std;

int reverse(int n)
{
    int last_digit;
   int  ans=0;
    while(n!=0)
    {
        last_digit=n%10;
        ans=ans*10+last_digit;
        n/=10;
    
    }
    return ans;

}
int main() {
	int t,n;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
	    cin>>n;
	  cout<<  reverse(n)<<endl;
	}
	return 0;
}
