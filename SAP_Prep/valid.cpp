#include<bits/stdc++.h>
using namespace std;

bool isvalid(char ch)
{
    if((ch>='a' && ch<='z')|| (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')|| ch==' ')
    return true;
    else
    return false;
}
int main()
{

string s="aa a234bc@sad$ hsagd^";
int cnt=0;
for(int i=0;i<s.length();i++)
{
    if(!isvalid(s[i]))
     {
       cnt++;
     }
}
cout<<cnt;
    return 0;
}