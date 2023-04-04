#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    string data;
    node *nxt;
    node(string var){
        data=var;
        nxt=NULL;
    }

};

void addAtTail(node* &head,string var)
{
    node* n=new node(var);
    if(head==NULL)
    {
        head=n;
        return;
    }

node *temp=head;
        while(temp->nxt!=NULL)
        {
          temp=temp->nxt;
        }
temp->nxt=n;

}
void display(node* &head)
{
node *temp=head;
while(temp!=NULL)
{
    cout<<temp->data<<"->";
    temp=temp->nxt;
}
cout<<"Null"<<endl;
}
void insertAtHead(node* &head,string var)
{
    node *n=new node(var);
    {
        n->nxt=head;
        head=n;
    }
}
void insertAtAnyPostion(node* &head,string var,int p)
{
    node*newnode=new node(var);
    
    newnode->data=var;
    newnode->nxt=NULL;
    if(p<0)
    {
cout<<"invalid postion";
    }
  else  if(p==1)
    {
        newnode->nxt=head;
        head=newnode;
    }else{
        node *loc=head;
      for(int i=1;i<p-1;i++)
{
    if(loc!=NULL){
        loc=loc->nxt;
    }
}
        if(loc!=NULL)
        {
            newnode->nxt=loc->nxt;
            loc->nxt=newnode;
        }
        else
        {
           cout<<endl<<"the previous node is null"<<endl; 
        }
    

    }

}/*
void search(node* &head,int key)
{
    node *temp=head;
    while(temp!=NULL)
    {
    if(temp->data==key)
    {
        cout<<endl<<temp->data<<" is present"<<endl;
    }
    else {
    cout<<"not present"<<endl;
    }
    temp=temp->nxt;
    }
  */ 

int main()
{
    node *head=NULL;
    string s;
    for(int i=0;i<s.length();i++)
    {
        cin>>s;
    }
    addAtTail(head,s);
    addAtTail(head,s);
    addAtTail(head,s);
    display(head);
    cout<<endl;
   // insertAtHead(head,4);
   // addAtTail(head,5);
  //  display(head);

   // search(head,2);
   // search(head,5);
  //  display(head);
   // insertAtAnyPostion(head,8,3);
   display(head);
   cout<<endl;
  // insertAtHead(head,6);
   display(head);
    return 0;

}
