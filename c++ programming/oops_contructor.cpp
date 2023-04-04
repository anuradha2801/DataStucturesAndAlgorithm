#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    string name;
    int age;
    bool gender;

    student()
    {
        cout<<"default constructor"<<endl;
    }

    student(string s, int a, bool g)
    {
         cout<<"parameterized constructor"<<endl;
        name=s;
        age=a;
        gender=g;// parameterize constructor
    }
    

    student(student &a)
    {
         cout<<"copy constructor"<<endl;
         name=a.name;
         age=a.age;
         gender=a.gender;
    }
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
  student a("anu",20,1);
  //a.print();

  student b;
  student c=a;//copy costructor
return 0;
}