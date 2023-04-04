#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
       for(int i=0;i<n;i++)
       {
           cin>>v[i];
       }
       sort(v.begin(),v.end());
       if(v[n-2]==v[n-1])
       {
           cout<<"fight"<<endl;
       }else{
           cout<<"peace"<<endl;
       }
       return 0;
}