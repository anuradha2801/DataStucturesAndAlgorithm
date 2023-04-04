//WAP to addition of two numbers using nested class
#include <iostream>
using namespace std;
class add
{

public:
    class innerclass
    {
    private:
        int x;
        int y;

    public:
        void get()
        {
            cin >> x >> y;
        }
        void addition()
        {
            cout << x + y;
        }
    };
};
int main()
{
    add::innerclass ob1;
    ob1.get();
    ob1.addition();
    return 0;
}