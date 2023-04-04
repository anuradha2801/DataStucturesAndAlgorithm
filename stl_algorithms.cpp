#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()


vector<int> v;
v.push_back(1);
v.push_back(3);
v.push_back(5);
v.push_back(8);

cout<<binary_search(v.begin(),v.end(),5)<<endl;
{

int a=87;
int b=67;
cout<<"max->"<<max(a,b)<<endl;

cout<<"min->"<<min(a,b)<<endl;

swap(a,b);
cout<<"a-->"<<a<<"  "<<"b-->"<<b<<endl;

string s="anuradha";
reverse(s.begin(),s.end());
cout<<"string-->"<<s<<endl;


sort(v.begin(),v.end());//intro sort-quick sort,heap sort,insertion sort
for(auto i:v)
{
    cout<<i<<" ";
}
 return 0;
}