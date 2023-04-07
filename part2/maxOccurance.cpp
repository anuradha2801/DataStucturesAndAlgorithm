#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
int n;
    cin>>n;
    int count=1;
    int maxcount=1;
    
    vector<int> v(n);
    int result=v[0];
       for(int i=0;i<n;i++)
       {
           cin>>v[i];
       }
       sort(v.begin(),v.end());
      
      for(int i=1;i<n;i++)
      {
          if(v[i]==v[i-1])
          {
              count++;
          }else{
              count=1;
          }

           if(count>maxcount)
       {
          maxcount=count;
          result=v[i-1];
       }
      }
      
    
       return 0;
}