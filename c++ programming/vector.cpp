#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<int>v;
    v.push_back(1);  //adding elements
    v.push_back(2);
    v.push_back(3);

    for(int i=0;i<v.size();i++) //print elements of the array
    cout<<v[i]<<endl;//1 2 3

    //or using iterator

    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<endl;  //1 2 3
    } 

    //or   using autokey word
    for(auto element:v)
    {
        cout<<element<<endl;
    }//1 2 3

 
    //creating another vector v2
    vector<int>v2 (3,50);  //3 is size of array and 50 is the element
// 50,50,50

//for swaping the elements in v and v2

swap(v,v2);
 for(auto element:v)
    {
        cout<<element<<endl;
    }//1 2 3

     for(auto element:v2)
    {
        cout<<element<<endl;
    }//1 2 3


  return 0;
}  