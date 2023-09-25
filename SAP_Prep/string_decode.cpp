#include<bits/stdc++.h>
using namespace std;
 void decodeString(string s) {
       stack<string>str;
        stack<int>count;
        string ans="";
        int num=0;
        for (int i=0;i<s.size();i++){

            cout<<"i"<<i<<endl;
           if (s[i]>='0' && s[i]<='9'){ 
               num=10*num+s[i]-'0';
               
           }
           else if (s[i]=='[') {//reset
              cout<<"i "<<i<<" "<<"stack ans = "<<ans<<endl;
                str.push(ans);
                ans="";
                cout<<"num = "<<num<<endl;
                count.push(num);
                num=0;
           }
           else if(s[i]==']'){ //add the num times to the ans
               string temp=ans;
               cout<<"temp = "<<temp<<endl;;
               ans=str.top();
               cout<<"]ans "<<ans<<endl;
               str.pop();
               int times=count.top();
               count.pop();
               while (times--){
                   ans+=temp;
               }
           }
           else { // for char 
               ans+=s[i];
               cout<<"i= "<<i<<" ans= "<<ans<<endl;
           }

        }
        cout<< ans;
    }

int main()
{
 string s="2[abc]3[cd]ef";
decodeString(s);
    return 0;
}