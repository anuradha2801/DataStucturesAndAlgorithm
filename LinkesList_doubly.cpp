#include<iostream>
using namespace std;
class node{
public:
node* prev;
int data;
node* nxt;
node(int data)
{
    this->prev=NULL;
    this->data=data;
    this->nxt=NULL;
}

~node()
{
   int value= this->data;
   if(this->nxt!=NULL)
   {
       delete nxt;
   }
   this->nxt=NULL;
   cout<<"deleted value is "<<value<<endl;
}

};

void insertAtHead(node* &head,node* &tail,int data)
{
    if(head==NULL)
    {
        node* temp=new node(data);
        head=temp;
        tail=temp;
    }
    else{
  node* temp=new node(data);
  temp->nxt=head;
  head->prev=temp;
  head=temp;

    }

}

void insertAtTail(node* &tail,node* &head,int data)
{
    if(tail==NULL)
    {
        node* temp=new node(data);
        tail=temp;
        head=temp;
    }

    else{
        node* temp=new node(data);
        tail->nxt=temp;
        temp->prev=tail;
        tail=temp;
    }
}

void insertAtPostion(node* &head, node* &tail,int position,int data)
{
    if(position==1)
    {
        insertAtHead(head,tail,data);
        return;
    }

    int cnt=1;
    node* temp=head;
    node* newnode=new node(data);
    while(cnt<position-1)
    {
     temp=temp->nxt;
     cnt++;

     if(temp==NULL)
     {
         cout<<"invalid postion"<<endl;
         return;
     }

    }
    if(temp->nxt==NULL)
    {
        insertAtTail(tail,head,data);
        return;
    }
     newnode->nxt=temp->nxt;
    temp->nxt=newnode;
    newnode->prev=temp;
    temp->nxt->prev=newnode;
    


}
void printlist(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->nxt;
    }
    cout<<endl;
}

void deletion( node* &head,int postion)
{
    if(postion==1)
    {
        node* temp=head;
         temp->nxt->prev=NULL;
        head=temp->nxt;
        temp->nxt=NULL;
       
        delete temp;
        return;
    }else{

        int cnt=1;
        node* previous=NULL;
        node* current=head;
        while(cnt<postion)
        {
            previous=current;
            current=current->nxt;
            cnt++;
            if(current==NULL)
            {
                cout<<"postion not valid for deletion"<<endl;
                return;
            }
        }
        previous->nxt=current->nxt;
        current->prev=NULL;
        current->nxt=NULL;
    delete current;
    }
}

void reverse(node* &head)
{
    node* current=head;
    node* temp=NULL;
    if(head==NULL || head->nxt==NULL)
    {
    return;
    }
    while(current!=NULL)
    {

      temp=current->prev;
       current->prev=current->nxt;
       current->nxt=temp;
    
        current=current->prev;
    }

   if(temp!=NULL)
    {
        head=temp->prev;
    }

    
    
}
int main()
{
    node *head=NULL;
    node*tail=NULL;
insertAtHead(head,tail,10);
printlist(head);

//cout<<head->data<<" "<<tail->data;

insertAtHead(head,tail,20);
printlist(head);

//cout<<"head-> "<<head->data<<" tail->"<<tail->data<<endl;
insertAtTail(tail,head,30);
printlist(head);

//cout<<"head-> "<<head->data<<" tail->"<<tail->data<<endl;

insertAtPostion(head,tail,4,22);
printlist(head);

//cout<<"head-> "<<head->data<<" tail->"<<tail->data<<endl;

deletion(head,1);
printlist(head);

cout<<"head-> "<<head->data<<" tail->"<<tail->data<<endl;
reverse(head);
printlist(head);
    return 0;
}