#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int n)
{
    int sum=0;

        int temp;
        for(temp=n;temp>0;temp/=10)
        {
            int lastdig=temp%10;
        sum=sum*10+lastdig;
        }
        

    if(sum==n)
    {
        return true;
    }
        return false;
}
int main()
{
    int n;
    cin>>n;
    if(isPalindrome(n))
    {
        cout<<n<<"is palindrom";
    }
    else{
        cout<<n<<"is not a palindrom";
    }
    return 0;
}