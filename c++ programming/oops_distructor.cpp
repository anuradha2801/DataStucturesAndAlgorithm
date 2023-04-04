#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    string name;
    int age;
    bool gender;
    student(student &a)
    {
         cout<<"copy constructor"<<endl;
         name=a.name;
         age=a.age;
         gender=a.gender;
    }

     student(string s, int a, bool g)
    {
         cout<<"parameterized constructor"<<endl;
        name=s;
        age=a;
        gender=g;// parameterize constructor
    }
    

    //operator overloading
    bool operator==(student &a)
    {
        if(name==a.name && age==a.age && gender==a.gender)
        {
            return true;
        }
        return false;
    }
     
};

int main()
{
  student a("anu",20,1);
  //a.print();

  student b("deepak",18,0);
  student c=a;//copy costructor

  if(c==a)
  {
      cout<<" a and c are same"<<endl;
  }else{
      cout<<" a and c are not same"<<endl;
  }
  if(b==a)
  {
      cout<<" b and c are same"<<endl;
  }else{
      cout<<" b and cnot same"<<endl;
  }
return 0;
}