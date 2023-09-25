#include<bits/stdc++.h>
using namespace std;
string newPassword(string s1, string s2)
{
    int i=0;
    int j=0;
    string ans="";
    while(i<s1.length() && j<s2.length())
    {
       ans+=s1[i++];
       ans+=s2[j++];
    }
    while(i<s1.length())
    {
       ans+=s1[i++];
    }
     while(j<s2.length())
    {
       ans+=s2[j++];
    }
    return ans;
}
int main(){
string s1="hackerrank";
string s2="mountain";
string ans=newPassword(s1,s2);
cout<<ans;
    return 0;
}