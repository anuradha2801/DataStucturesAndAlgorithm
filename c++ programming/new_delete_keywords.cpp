#include<bits/stdc++.h>
using namespace std;
int main(){

//basic example
int a=4;
int* ptr=&a;

cout<<"the value of a is"<<*(ptr)<<endl;//derefrencing

//new keyword

int *p=new int(40);
cout<<*(p)<<endl;

int *arr=new int[3];
arr[0]=10;
arr[1]=20;//*(a+1)
arr[2]=30;
for(int i=0;i<3;i++)
cout<<arr[i]<<endl;
delete[]arr;
    return 0;
}

