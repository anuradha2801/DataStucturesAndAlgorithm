#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* nxt;


    node(int val)
    {
        data=val;
        nxt=NULL;
    }

};

void insertAtTail(node* &head, int val)
{
node* n=new node(val);

if(head==NULL)
{
    head=n;
    return;
}
    node*temp=head;
while(temp->nxt!=NULL)
{
temp=temp->nxt;
}
temp->nxt=n;
}


void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->nxt;
    }
    cout<<"NULL"<<endl;
}

void insertAtHead(node* &head,int val)
{
    node* n=new node(val);
    n->nxt=head;
    head=n;
}
bool search(node* head,int key)
{
    node* temp=head;
    while (temp!=NULL)
    {
        if(temp->data==key)
        {
            return true;
        }
       temp= temp->nxt;
    }return false;
    
}
void deleteAThead(node* &head)
{
    node* todelete=head;
    head=head->nxt;
    delete todelete;
}


void deletion(node* &head,int var)
{
    if(head==NULL)
    {
        return;
    }
    if(head->nxt=NULL)
    {
        deleteAThead(head);
    }
    node*temp=head;
    while(temp->nxt->data!=var)
    {
        temp=temp->nxt;
    }
 node* deletion=temp->nxt;
   temp->nxt=temp->nxt->nxt;
       delete deletion;
}


int main()
{
    node*head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);
    insertAtHead(head,4);
    display(head);
  //  cout<<search(head,3)<<endl;
  // cout<< search(head,4)<<endl;
   deletion(head,3);
   display(head);
   deleteAThead(head);
   display(head);
    return 0;

}