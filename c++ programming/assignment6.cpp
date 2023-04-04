//WAP to give student details using friend class
#include<bits/stdc++.h>
using namespace std;
class student{
    private:
    int roll_no;
    string name;
    int marks;
    public:
    student()
    {
        roll_no=10;
        name="anu";
        marks=100;
    }
    friend void displaydetails(student s1);
};
void  displaydetails(student s1)
{
    cout<<"ROLL NUMBER="<<s1.roll_no<<endl<<"NAME="<<s1.name<<endl<<"MARKS="<<s1.marks<<endl;
}
int main()
{
student s1;
displaydetails(s1);
return 0;
}