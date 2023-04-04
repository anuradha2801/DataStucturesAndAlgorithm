#include<bits/stdc++.h>
using namespace std;

class Queue_array{
    public:
    int *arr;
    int front;
    int rear;
    int size;
 
 Queue_array()
 {
      size=10;
      arr=new int[size];
      front=0;
      rear=0;
 }
 void enque(int x)
{
    if(rear==size)
    {
       cout<<"overflow"<<endl;
       return;
    }else {
 arr[rear]=x;
        rear++;
    }
       
}


int dequeue()
{
    int ans=0;

    if(front==rear)
    {
        cout<<"underflow"<<endl;
        return -1;
    }else{
        ans=arr[front];
        front++;
    }
    if(front==rear)
    {
        front=0;
        rear=0;
    }
    return ans;
}
void frontele()
{
    if(front==rear)
    {
    cout<<"empty"<<endl;
    }else{
        cout<< arr[front]<<endl;
    }
}
bool isempty()
{
     if(front==rear)
    {
        return true;
    }else{
        return false;
    }
}
};



int main()
{
Queue_array q;
q.enque(4);
q.frontele();
q.enque(3);
q.dequeue();
q.frontele();

q.enque(2);
q.frontele();
q.dequeue();
q.enque(1);
q.frontele();
q.enque(7);
q.frontele();
q.enque(9);

return 0;

}