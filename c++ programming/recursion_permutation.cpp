///print all the permutation of a string
#include<bits/stdc++.h>
using namespace std;

void permutation(string s,string ans)
{
    if(s.length()==0)
    {
          cout<<ans<<endl;
          return;
    }
  for(int i=0;i<s.length();i++){
      char ch=s[i];
      string ros=s.substr(0,i)+s.substr(i+1);
    
      permutation(ros,ans+ch);//rest of the string ->ans+fix charater

  }

}


int main()
{

permutation("ABC","");
return 0;
}