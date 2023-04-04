//Function Object : Function(functors) wrapped in class so that it available like an object

#include<bits/stdc++.h>
//#include<functional>
//#include<algoriths>
using namespace std;
int main()
{
int arr[]={49,3,0,53,73,10};//sorting in ascendinng order
sort(arr,arr+6);

for(int i=0;i<6;i++)
{
    cout<<arr[i]<<" ";
}cout<<endl;
//sorting in descending order
sort(arr,arr+6,greater<int>());
for(int i=0;i<6;i++)
{
    cout<<arr[i]<<" ";
}

    return 0;
}