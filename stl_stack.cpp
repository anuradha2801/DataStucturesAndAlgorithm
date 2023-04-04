#include<bits/stdc++.h>
using namespace std;
int main()
{
stack<string> s;
s.push("hello");
s.push("anu");
s.push("radha");
s.push("singh");

cout<<"top element"<<s.size()<<endl;
int n=s.size();
for(int i=0;i<n;i++)
{
    cout<<s.top()<<" ";
    s.pop();
}

cout<<endl;/*
s.push("deepak");
for(int i=0;i<s.size();i++)
{
    cout<<s.top()<<" ";
    s.pop();
}

cout<<endl;
//s.pop();
//cout<<"top element"<<s.top()<<endl;

*/
    return 0;
}