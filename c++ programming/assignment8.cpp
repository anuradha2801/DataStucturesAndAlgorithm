#include <bits/stdc++.h>
using namespace std;
class person
{
public:
    string name;
    int age;
    
    virtual void display() = 0;
};
class student : public person
{
public:
    string branch;
    int roll_no;
    student()
    {
    name="anu";
    age=19; 
    roll_no=113;
    branch="CSE";
    }

    void display()
    {
         cout<<"STUDENT DETAILS:"<<endl
             <<"STUDENT NAME:" << name << endl
             << "AGE:" << age << endl
             << "ROLL NO:" << roll_no << endl
             << "BRANCH:" << branch << endl;
             cout<<"---------------------"<<endl;
    }
};
class faculty:public person{
    public:
string degree;
int id;
int salary;
faculty()
{
    name="xyz";
    age=19;
    degree="phd";
    salary=100000000;
}
void display()
{
         cout<< "FACULTY DETAILS:"<<endl
             <<"FACULTY NAME:" << name << endl
             << "AGE:" << age << endl
             << "DEGREE:" << degree << endl
             << "SALARY:" << salary << endl;
    }
};
int main()
{  
    student s1; 
   s1.display();
  faculty f1;
    f1.display();
    return 0;
}