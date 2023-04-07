#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
int data;
Node* left;
Node* right;

Node(int d){
this->data=d;
this->left=NULL;
this->right=NULL;
}
};

Node* insertIntoBST(Node* root,int d)
{
    if(root==NULL)
    {
        root=new Node(d);
        return root;
    }

    if(d>root->data)
    {
        root->right=insertIntoBST(root->right,d);
       
    }
    else
    {
         root->left=insertIntoBST(root->left,d);
    }
    return root;
}

void levelOrderTraversal(Node* root)
{
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        Node* temp=q.front();
        
        q.pop();
        if(temp==NULL)
        {
            //purana level completey traverse ho chuka h
            cout<<endl;
             if(!q.empty())
             {
                //queue still has some elements
              q.push(NULL);
             }
        }else{
            cout<<temp->data<<" ";
            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
       }
    }
}


void takeInput(Node* &root)
{
    int data;
    cin>>data;
    while(data!=-1)
    {
        
       root=insertIntoBST(root,data);
        cin>>data;
    }
}

int minVal(Node* root)
{
  Node* temp=root;
  while(temp->left!=NULL)
  {
    temp=temp->left;
  }
  return temp->data;
}

int maxVal(Node* root)
{
 Node* temp=root;
  while(temp->right!=NULL)
  {
    temp=temp->right;
  }
  return temp->data;

}

Node* deleteFromBST(Node* root,int val)
{
//base case
if(root==NULL)
{
    return root;
}

if(root->data==val){

//zero child
if(root->left==NULL && root->right==NULL)
{
    delete root;
    return NULL;
}
//one child
//left
if(root->left!=NULL && root->right==NULL) 
{
Node* temp=root->left;
delete root;
return temp;
}
//right
if(root->left==NULL && root->right!=NULL)
{
    Node* temp=root->right;
    delete root;
    return temp;

}
//two child
if(root->left!=NULL && root->right!=NULL)
{
    int mini=minVal(root->right);
    root->data=mini;
    root->right=deleteFromBST(root->right,mini);
    return root;
}

}

else if(root->data>val)
{
    root->left=deleteFromBST(root->left,val);
    return root;
}
else{
    root->right=deleteFromBST(root->right,val);
    return root;
}
return root;
}

int main()
{
 Node* root=NULL;
 cout<<"enter data"<<endl;
  takeInput(root);
  cout<<"printing level order"<<endl;
    levelOrderTraversal(root);

    cout<<"min value "<<minVal(root)<<endl;
    cout<<"max value "<<maxVal(root);
    root=deleteFromBST(root,21);
    cout<<"printing level order"<<endl;
    levelOrderTraversal(root);
    return 0;
}