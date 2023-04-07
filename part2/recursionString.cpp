#include<iostream>
using namespace std;

bool isPalindrome(string s,int i,int j){
if(i>j)
{
    return true;
}
if(s[i]!=s[j])
{
    return false;
}else{
    return isPalindrome(s,i++,j--);
}
}

void reverse(string& name,int i,int j)
{
if(i>j)
{
    return;
}

swap(name[i],name[j]);
reverse(name,i+1,j-1);

}

int main()
{
    string s;
    cin>>s;
    string name="anuradha";
    if(isPalindrome(s,0,s.length()-1))
    {
        cout<<"Palindrome"<<endl;
    }else{
        cout<<"not palindrome"<<endl;
    }

  
    reverse(name,0,name.length()-1);
    cout<<name;
    return 0;
}