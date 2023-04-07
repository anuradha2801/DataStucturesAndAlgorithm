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

~node()
{
    int value=this->data;
    if(this->nxt==NULL)
    {
        delete nxt;
    }
    this->nxt=NULL;
    cout<<value<<" is deleted"<<endl;
}


};


void insertAtHead( node* &head,int data)
{
    node* temp=new node(data);
    temp->nxt=head;
    head=temp;


}
void printlinkedList(node* &head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->nxt;
    }
    cout<<endl;
}
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

void insertAtPos(node* &head, int pos,int data)
{
    if(pos==1)
    {
        insertAtHead(head,data);
    }
        node* temp=head;
    if(temp->nxt==NULL)
        {
            insertAtTail(head,data);
        }
        int i=1;
        node *newnode=new node(data);
        while(i<pos-1)
        {
           temp=temp->nxt;
           i++;

           if(temp==NULL)
           {
               cout<<"cant insert"<<endl;
               return;
           }

        }
         newnode->nxt=temp->nxt;
            temp->nxt=newnode;
}
void deletion(node* &head, int pos)
{
if(pos==1)
{
node* current=head;
head=head->nxt;
current->nxt=NULL;
delete current;
}

else{
node* current=head;
node *previous=NULL;
int cnt=1;
while(cnt<pos)
{
    previous=current;
    current=current->nxt;
    cnt++;
    if(current==NULL)
    {
        cout<<"invalid position"<<endl;
    }

}

previous->nxt=current->nxt;
current->nxt=NULL;
delete current;

}
}
   


int main()
{

node* node1=new node(15);
cout<<node1->data<<endl;
node* head=node1;
insertAtHead(head,16);
insertAtPos(head,2,12);

insertAtPos(head,3,20);
insertAtTail(head,22);

insertAtPos(head,6,30);
printlinkedList(head);

insertAtPos(head,10,30);
printlinkedList(head);

deletion(head,2);
printlinkedList(head);

deletion(head,4);
printlinkedList(head);

    return 0;
}