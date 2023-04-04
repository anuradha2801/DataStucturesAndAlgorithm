#include<bits/stdc++.h>
using namespace std;
int main()
{
  string str="anuradha";
  string s1= "fam";
  string s2="ily";
  s1.append(s2);
  cout<<s1<<endl;

  string s3="abc";
  string s4="abc";
  if(s3.compare(s4)==0)
  {
      cout<<"string are equal"<<endl;;
  }
  cout<<s4.compare(s3)<<endl;

  s1.clear();
  if(s1.empty())
  cout<<"string is empty"<<endl;

  str.erase(3,5);//(index,no of letters to be erased)
cout<<str<<endl;

cout<<str.find("nu")<<endl;

str.insert(3,"radha");
cout<<str<<endl;

cout<<str.length()<<endl;

string s5="743";
int x=stoi(s5);
cout<<x+1<<endl;

sort(str.begin(),str.end());
cout<<str<<endl;
    return 0;

}