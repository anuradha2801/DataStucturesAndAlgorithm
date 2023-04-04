//map is an associative array

#include<bits/stdc++.h>
using namespace std;
int main()
{

map<string,int>marksmap;
marksmap["anu"]=98;
marksmap["deepak"]=94;
marksmap["tamnu"]=99;
marksmap.insert({{"anurag",88},{"adarsh",90}});

map<string,int>::iterator i;
for(i=marksmap.begin();i!=marksmap.end();i++)
{
    cout<<(*i).first<<"  "<<(*i).second<<"\n";
}

    return 0;
}