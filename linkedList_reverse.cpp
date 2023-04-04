#include<bits\stdc++.h>
using namespace std;

class node{
    public:
int data;
node *nxt;

node(int data)
{
    this->data=data;
    this->nxt=NULL;
}
};


//printing linked list
void printlinkedList(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->nxt;
    }
    cout<<endl;
}

//inserting in linked list
void insertAtTail(node* head,int data)
{
    node* newnode= new node(data);
    if(head==NULL)
    {
        head=newnode;
        return;
    }
node* temp=head;

while(temp->nxt!=NULL)
{
    temp=temp->nxt;
}
temp->nxt=newnode;
newnode->nxt=NULL;
}

//reverse function
void reverse(node* &head)
{
   node* prev=NULL;
   node* current=head;
   node* forward=current->nxt;
   while(current!=NULL)
   {
     forward=current->nxt;
     current->nxt=prev;
     prev=current;
     current=forward;
   }
    head=prev;

}


//function for finding the length of the linked list
int getlength(node* &head)
{
    int cnt=1;
    node*temp=head;
    while(temp!=NULL)
    {
        cnt++;
        temp=temp->nxt;
    }
    return cnt;
}


//function for finding middle element
void middleElement(node* &head)
{
    int length=getlength(head);
    int ans=(length/2 )+1;
    node* temp=head;
    int cnt=1;
    while(cnt<ans)
    {
        temp=temp->nxt;
        cnt++;
    }
    cout<<temp->data<<endl;

}

node* reverseKgroups(node* &head,int k)
{


    if(head==NULL)
    {
        return NULL;
    }
    node* previous=NULL;
    node* current=head;
    node* forward=NULL;
int cnt=0;
    while(current!=NULL && cnt<k)
    {
        forward=current->nxt;
     current->nxt=previous;
      previous=current;
      current=forward;
      cnt++;
    }
    if(forward!=NULL)
    head->nxt=reverseKgroups(forward,k);


    return previous;
}

//main function
int main()
{
node* newnode=new node(10);
node* head=newnode;
insertAtTail(head,20);
insertAtTail(head,30);
insertAtTail(head,40);
printlinkedList(head);
//reverse(head);
//printlinkedList(head);
//cout<<getlength(head)<<endl;
//middleElement(head);
 printlinkedList(head);
 node* newhead=reverseKgroups(head,2);
printlinkedList(newhead);
    return 0;
}