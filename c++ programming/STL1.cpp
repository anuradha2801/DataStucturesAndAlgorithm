/*STANDARD TAMPLATE LIBERARY-  STL is used because its a good idea not to reinvent the wheel.
COMPOMENTS-1.container->stores data
2.algorithms     3.iterators-> object points to an element in a container/ handles just like pointers/connecs algo with cointainer*/


#include<bits/stdc++.h>
using namespace std;

template <class T>

void display(vector<T> &v)
{
    
for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";
}
}

int main()

{
    //creation of vectors:

vector<int>vec1;//zero lenght
vector<char>vec2(4);//consist of 4 elements
vector<char>vec3(vec2);//4-element character vector from vec2
vector<int>vec4(6,3);//6 element vector of 3s
display(vec1);
vec2.push_back('4');
vec2.push_back('a');
vec2.push_back('b');
vec2.push_back('c');
display(vec2);
display(vec4);

/*
int element;

for(int i=0;i<4;i++)
{
    cin>>element;
    vec2.push_back(element)
}
display(vec1);
vec1.pop_back();
vector<int>::iterator i=vec1.begin

vec1.insert(i,50)  shortcut to insert cpy->vec1.insert(i+1,5,50)

*/
    return 0;
}