#include<iostream>//to make dynamical arrays
#include<vector>
using namespace std;
//contigeous memory allocation
int main()
{
    vector<int> v;
    //vector<int> v(5,1)   vector of size 5 initiated with 1
    v.push_back(1);
    v.push_back(2);
    v.push_back(9);
    cout<<"element at index 2"<<v.at(2)<<endl;

    cout<<"size"<<v.size()<<endl;

    cout<<"front element"<<v.front()<<endl;
    cout<<"last element"<<v.back()<<endl;

    //for printing an array
    for(int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;

    //to remove element
    v.pop_back();
    for(int a:v)
    {
cout<<"elements after poping"<<a<<" "<<endl;
    }

}
