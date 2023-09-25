
//print all the non-repeating characters from the given string.
#include<bits/stdc++.h>
using namespace std;

int unique(string s)
{
    unordered_map<char,int>mp;
    for(int i=0;i<s.size();i++)
    {
        mp[s[i]]++;
    }
    int cnt=0;
    for(int i=0;i<mp.size();i++)
    {
        if(mp[i]==1)
        {
            cnt++;
        }
    }
    return cnt;
}

int main()
{
string s="alphaadida";
cout<<unique(s);
    return 0;
}