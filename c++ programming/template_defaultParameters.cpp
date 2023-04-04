#include<bits/stdc++.h>
using namespace std;

template <class T>
class Datatype
{
public:
T data;

 Datatype(T n)
{
    data=n;

}
  /* void display()
    {
        cout<<data<<endl;
    }*/

    void display();
    
};

template <class  T>
 void Datatype<T>::display(){
cout<<this->data<<endl;
}
int main()
{
Datatype<int> d(3);
d.display();

    return 0;
}