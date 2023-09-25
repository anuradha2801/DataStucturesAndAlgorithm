#include<bits/stdc++.h>
using namespace std;

 string gcdOfStrings(string str1, string str2) {
        string s="";
        
            s = s + str2;
         cout<<"Initial val of s "<<s<<endl;
        for(int i=s.size()-1;i>=0;i--)
        {  cout<<endl;
         cout<<endl;
            cout<<i<<endl;
            string r="";
            string t="";
            cout<<endl;
            cout<<"new S "<<s<<endl;
            while(r.size()<str1.size())
            {   cout<<r<<" r inside while loop" <<endl;
                r=r+s;
                cout<<r<<" r inside while loop" <<endl;
            }
            cout<<"r size= "<<r.size()<<endl;
            cout<<"str size= "<<str1.size()<<endl;
            cout<<r<<" r inside for loop"<<endl;
            while(t.size()<str2.size())
            {
                 cout<<t<<" t inside  while loop"<<endl;
                t=t+s;
            }
            cout<<"r size= "<<t.size()<<endl;
            cout<<"str2 size= "<<str2.size()<<endl;
            cout<<t<<" t inside  for loop"<<endl;
            if(r==str1 && t==str2)
            {
                return s;
            }else{
                
                s.pop_back();
                cout<<"pop from s "<<s<<endl;;
            }
        cout<<"s "<<s<<endl;
         cout<<"r "<<r<<endl;
          cout<<"t "<<t<<endl;
        }
      return s;
       }

int main()
{
    string str1="LEET";
    string str2="CODE";
     string ans=gcdOfStrings(str1,str2);
     cout<<"ans "<<ans;
    return 0;
}