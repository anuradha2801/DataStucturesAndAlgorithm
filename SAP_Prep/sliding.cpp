#include<bits/stdc++.h>
using namespace std;
 bool isVowel(char ch)
   {
       if(ch=='a' ||ch=='e' || ch=='i' || ch=='o' || ch=='u')
       {
           return true;
       }
       return false;
   }
    void maxVowels(string s, int k) {
       int count=0;
       int maxCount=INT_MIN;
       int i=0;int j=0;
       while(j<s.length())
       {
           if(isVowel(s[j])){
               count++;
           }
           if(j-i+1<k)
           {
               j++;
           }
           else if(j-i+1==k)
           {
               maxCount=max(maxCount,count);
               if(isVowel(s[i]))
               count--;
               i++;
               j++;
           }
       } 
      // cout<<count<<endl;
       cout<< maxCount;
    }
int main()
{
    string s="leetcode";
   maxVowels(s,3);
    return 0;
}