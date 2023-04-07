#include<iostream>//static array i.e size is fixed
#include<array>
using namespace std;
int main()
{
int basicarray[3]={1,2,3};

array<int,4> a={1,2,3,4};
for(int i=0;i<a.size();i++)
{
    cout<<a[i]<<endl;
}
cout<<"element at second index="<<a.at(2)<<endl;
cout<<"Empty or not="<<a.empty()<<endl;
cout<<"First element="<<a.front()<<endl;
cout<<"Last element="<<a.back()<<endl;









    return 0;
}