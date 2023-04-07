#include<bits\stdc++.h>
using namespace std;

int main()
{
    map<int,string>m;
    m[1]="anu";
    m[2]="deepak";
    m[12]="tanu";
    for(auto i:m)
    {
        cout<<i.first<<endl;
    }
    m.insert({5,"papa"});

    for(auto i:m)
    {
        cout<<i.first<<i.second<<endl;
    }

    m.erase(12);
for(auto i:m)
    {
        cout<<i.first<<" " <<i.second<<endl;
    }


    return 0;
}