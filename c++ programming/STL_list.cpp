#include<bits/stdc++.h>
using namespace std;

void display(list<int> &lst)
{
list<int>::iterator it;
for(it=lst.begin();it!=lst.end();it++)
{
    cout<<*it<<" ";
}cout<<endl;
}
int main()
{

list<int>list1;//zero length list
list<int>list2(5);//empty list of 5 element length
list1.push_back(1);
list1.push_back(2);
list1.push_back(3);
list1.push_back(4);
list1.push_back(5);

/*list<int>::iterator i;
i=list1.begin();
cout<<*i<<" ";
i++;
cout<<*i<<" ";
i++;
cout<<*i<<" ";
i++;
cout<<*i<<" ";
i++;
cout<<*i<<" ";
i++;*/
display(list1);
list1.pop_back();
display(list1);
list1.remove(3);
display(list1);
list<int>list3(4);
list<int>::iterator ir;
ir=list3.begin();
*ir=2;
ir++;
*ir=5;
ir++;
*ir=7;
ir++;
*ir=1;
display(list3);
list3.sort();
list1.sort();
display(list3);

//merge
list1.merge(list3);
display(list1);
//reversing the list
list1.reverse();
display(list1);


    return 0;
}