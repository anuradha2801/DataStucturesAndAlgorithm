#include<bits/stdc++.h>
using namespace std;

string moveAllx(string s)
{
    if(s.length()==0)
    {
        return "";
    }
    string ans=moveAllx(s.substr(1));
    char ch=s[0];
    if(ch=='x')
    {
        return ans+ch;
    }
    else{
        return ch+ans;
    }
}

int main()
{
cout<<moveAllx("kfkerjxxxdwkehxxx");
return 0;
}