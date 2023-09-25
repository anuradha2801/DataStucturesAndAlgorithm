#include<bits/stdc++.h>
using namespace std;
int countSubstr(string s1, string s2){
 int count=0;
 int j=0;
 for(int i=0;i<s1.length();i++){
    if(s1[i]==s2[j] && j<s1.length()) {
         ++j;
    } if(j==s2.length()){
        ++count;
        j=0;
    }
 }
 return count;
}
int main(){
string s1="TimsplTimayTimfqevqvtim";
 for(int i=0;i<=s1.length();i++) { 
    // ASCII value of A to Z(uppercase chars) ranges from 65 to 92  
      if(s1[i]>=65 && s1[i]<=92){
	  s1[i]=s1[i]+32;
      }
   }
string s2="Tim";
for(int i=0;i<=s2.length();i++) { 
      if(s2[i]>=65 && s2[i]<=92)
      {
	  s2[i]=s2[i]+32;
      }
   }
cout<<countSubstr(s1,s2);
    return 0;
}