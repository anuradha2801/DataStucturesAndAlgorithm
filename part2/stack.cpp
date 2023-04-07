#include<iostream>
using namespace std;

class stack{
public:
int size;
int *arr;
int top;
stack(int size)
{
    this->size=size;
    arr=new int[size];
    top=-1;
}

void push(int val)
{
    if(size-top>0)
    {
        top++;
        arr[top]=val;
        
    }else{
        cout<<"overflow"<<endl;
    }
}
void pop()
{
  if(top==-1)
  {
      cout<<"underflow"<<endl;
  }else{
      top--;
  }
}

void isempty()
{
    if(top==-1)
    {
        cout<<"stack is empty"<<endl;
    }else{
        cout<<"stack is not empty"<<endl;
    }
}
void display()
{
    if(top==-1)
    {
        cout<<"no element is present"<<endl;
    }else{
        int temp=top;
       while(temp>=0)
       {
           cout<<arr[temp]<<endl;
           temp--;
       }
    }
}
};


int main(){
stack st(5);
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);
st.display();
st.isempty();
st.pop();
st.pop();
st.display();
return 0;
}