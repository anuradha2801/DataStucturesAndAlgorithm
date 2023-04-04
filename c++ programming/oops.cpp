#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    string name;
    int age;
    bool gender;

    void print()
    {
        cout<<"name=";
         cout<<name<<endl;
         cout<<"age=";
         cout<<age<<endl;;
         cout<<"Gender";
         cout<<gender<<endl;
    }
};
 int main()
 {
     student arr[3];  //student a  //a.name=anu//a.age//a.gender
     for(int i=0;i<3;i++)
     {
         cout<<"name=";
         cin>>arr[i].name;
         cout<<"age=";
         cin>>arr[i].age;
         cout<<"Gender";
         cin>>arr[i].gender;
     }

     for (int i = 0; i < 3; i++)
     {
         arr[i].print();
     }
     return 0;
 }