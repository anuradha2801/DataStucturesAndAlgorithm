#include<bits/stdc++.h>
using namespace std;
vector<string>buildSubsequences(string s)
{
vector<string>ans;
string substr="";
for(int i=0;i<s.length();i++)
{
    for(int j=i;j<s.length();j++)
    {
      substr+=s[j];
       ans.push_back(substr);
    }
     substr="";
}
sort(ans.begin(),ans.end());
return ans;
}
int main()
{
string s="ba";
vector<string>ans;
ans=buildSubsequences(s);
for(int i=0;i<ans.size();i++)
{
    cout<<ans[i]<<endl;
}
    return 0;
}
