#include<iostream>
using namespace std;

class node{
public:
int data;
node* next;
public:
 node(int data)
 {
     this->data=data;
     this->next=NULL;
 }

};


void insertAtTail(node* &tail,int data)
{
   node* temp=new node(data);

   tail->next=temp;
   tail=tail->next;
}

void insertAtHead(node* &head,int data)
{
       node* temp=new node(data);
       temp->next=head;
       head=temp;
}

void insertAtPosition(node* &head,node* &tail, int pos,int data)
{
    node* newnode=new node(data);
    if(head==NULL)
    {
        newnode->next=head;
       head=newnode;
    }

    node* temp=head;
    int cnt=1;
    while(cnt<pos-1)
    {
        temp=temp->next;
        cnt++;
    }

    newnode->next=temp->next;
    temp->next=newnode;
    if(pos==1)
    {
         node* temp=new node(data);
       temp->next=head;
       head=temp;
        return;
    }
    if(temp->next==NULL)
    {
    node* temp=new node(data);

   tail->next=temp;
   tail=tail->next;
   return;
    }
}

void printll(node* &head)
{
   if(head==NULL)
   {
       cout<<"Linked list is empty"<<endl;
   }

   node *temp=head;
   while(temp!=NULL)
{
    cout<<temp->data<<"->";
    temp=temp->next;
}

}


int main()
{
    
    node* n1=new node(5);
    node* head=n1;
    node*tail=n1;
    insertAtHead(head,20);
    insertAtHead(head,30);
    insertAtTail(tail,10);
    insertAtPosition(head,tail,4,24);
    printll(head);


}