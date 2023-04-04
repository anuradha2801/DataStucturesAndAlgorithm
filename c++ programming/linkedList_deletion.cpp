#include<bits/stdc++.h>
using namespace std;
class node{
    public:
 int data;
 node* nxt;
 node(int var)
 {
     data=var;
     nxt=NULL;
 }
};

 void insertAtHead(node* &head,int var)
{
    node* n=new node(var);
    n->nxt=head;
    head=n;
}

void insertAtTail(node* &head,int var){
    node* n=new node(var);
    if(head==NULL)
    {
        head=n;
        return;
    }
node*temp=head;
    while(temp->nxt!=NULL)
    {
       temp= temp->nxt;
    }
    temp->nxt=n;
}

void display(node* head)
{
    node* temp=head;
while(temp!=NULL)
{
    cout<<temp->data<<" ->";
    temp=temp->nxt;
}
cout<<"NULL"<<endl;
}

int main()
{
node* head=NULL;
insertAtTail(head,1);
insertAtTail(head,2);
insertAtTail(head,3);
insertAtTail(head,4);
display(head);
insertAtHead(head,9);
display(head);
    return 0;
}