#include<iostream>
using namespace std;
int main()
{/*
float f = 10.5;
float p = 2.5;
float* ptr = &f;
(*ptr)++;
*ptr = p;
cout << *ptr << " " << f << " " << p;*/
  int arr[] = {4, 5, 6, 7};
  int *p = arr+1;
  cout<<*p<<endl;
  cout<<*arr<<endl;
  cout << *arr + 9;

    return 0;
}